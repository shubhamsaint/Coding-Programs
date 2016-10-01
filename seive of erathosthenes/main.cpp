#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void seiveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int p=i*2;p<=n;p=p+i)
            {
                prime[p]=false;
            }
        }
    }

    for(int i=2;i<=n;i++)
        if(prime[i])
        cout<<i<<" ";
}


int main()
{
    seiveOfEratosthenes(90);
    cout << "Hello world!" << endl;
    return 0;
}
