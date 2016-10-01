#include <iostream>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
  string str;
  getline(cin,str);

  map<int,string> mymap;

  int len=str.length();

  string word;
  int j=0,k=0;

  for(int i=0;i<len;i++)
  {
      if(str[i]==' ')
      {
          mymap[j++]=word;

          word="";
          k=0;
      }
      else
          word+=str[i];
  }
  mymap[j++]=word;

  for(int i=j-1;i>=0;i--)
  {
      cout<<mymap[i]<<" ";
  }

}
