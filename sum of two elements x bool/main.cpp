#include <iostream>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

bool sumOfTwoElements(int arr[],int n,int sum)
{
    sort(arr,arr+n);

    int left,right;

    left=0;
    right=n-1;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    while(left<right)
    {
        if((arr[left]+arr[right])==sum)
        {
            return 1;
        }
        else if(arr[left]+arr[right]<sum)
            left++;
            else right--;

    }
    return 0;


}


int main()
{
    cout << "Hello world!" << endl;

    int arr[100];
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>x;
    cout<<sumOfTwoElements(arr,n,x);
    return 0;
}
