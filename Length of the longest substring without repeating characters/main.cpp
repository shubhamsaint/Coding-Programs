#include <iostream>
#include <string.h>
#include<stdlib.h>
#include <stdio.h>

using namespace std;

#define NO_OF_CHAR 256

int longestUniqueSubstring(char *str)
{
 int m;
 int i,j,len;
 int cur_len = 1;
 int max_len = 1;

 int prev_index = -1;
 len = strlen(str);

 int *visited = (int*)malloc(sizeof(int)*NO_OF_CHAR);

  for(i=0;i<NO_OF_CHAR;i++)
  {
      visited[i] = -1;
  }

  visited[str[0]]=0;

  for(i=1;i<len;i++)
  {
      prev_index = visited[str[i]];
      if(prev_index == -1||i-cur_len>prev_index)
         cur_len++;
      else
      {
          if(cur_len>max_len)
            max_len=cur_len;

          cur_len = i-prev_index;
      }
      visited[str[i]] = i;
  }

  if(cur_len>max_len)
    max_len = cur_len;

    return max_len;
}

int min(int a, int b)
{
    return (a>b)?b:a;
}

int main()
{
    char str[] = "ABDEFGABEFFFDASASABCDEFGHIJKAL";
    printf("The input string is %s \n", str);
    int len =  longestUniqueSubstring(str);
    printf("The length of the longest non-repeating character substring is %d", len);

    getchar();
    return 0;
}

