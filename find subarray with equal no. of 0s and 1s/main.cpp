//shubham verma c8master

#include <iostream>
#include <unordered_set>

using namespace std;



int findSubArray(int arr[],int n)
{
    int sum=0;
    int maxsize=-1,startIndex;

    for(int i=0;i<n-1;i++)
    {
        sum=(arr[i]==0)?-1:1;

        for(int j=i+1;j<n;j++)
        {
            (arr[j]==0)?sum+=-1:sum+=1;

            if(sum==0&&maxsize<j-i+1)
            {
                maxsize=j-i+1;
                startIndex=i;
            }

        }

    }
    if(maxsize==-1)
    {
        printf("no");
    }
    else
    {
        printf("%d ,%d",startIndex,startIndex+maxsize-1);

    }
}



bool printZeroSumSubarray(int arr[])
{
    unordered_set<int> u_set;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];


        if(arr[i]==0||sum==0||u_set.find(sum)!=u_set.end())
        {
            return true;
        }
        u_set.insert(sum);
    }
}

int main()
{int arr[] = {4, 2, -3, 1, 6};
	int n = sizeof(arr)/sizeof(arr[0]);

	if (printZeroSumSubarray(arr, n))
		printf("Found a subarray with 0 sum");
	else
		printf("No Subarray with 0 sum");

    return 0;
}
