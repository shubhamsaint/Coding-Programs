#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <map>
using namespace std;
typedef long long int ll;

int main() {
   map <char,int> my_map1;
    map <char,int> my_map2;
    for(ll i=97;i<123;i++)
        {
        my_map1[i]=0;
        my_map2[i]=0;
        }
    ll t;
    cin>>t;
    ll len;
    char str[100000];
    while(t--)
    {
        ll c=0;
         for(ll i=97;i<123;i++)
        {
        my_map1[i]=0;
        my_map2[i]=0;
        }
        cin>>str;
        len=strlen(str);
        if((len+1)%2==0)
            cout<<"-1\n";
        else
        {
           for(ll i=0;i<len/2;i++)
           {
               my_map1[int(str[i])]++;
           }
           for(ll i=len/2;i<len;i++)
           {
               my_map2[int(str[i])]++;
           }
           for(ll i=97;i<123;i++)
           {
               printf("%d   %d    %d\n",i,my_map1[i],my_map2[i]);
               if(my_map1>=my_map2)
              {
                c=c+(my_map1[i]-my_map2[i]);
              }
           }


        cout<<c<<"\n";}

        }



    return 0;
}
