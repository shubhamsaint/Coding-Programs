#include <iostream>

using namespace std;
void heapsort(int [],int);
void buildmaxheap(int[],int);
void maxheap(int [],int,int);


int main()
{
    int a[10],size,i;
    cin>>size;

    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    heapsort(a,size);
    return 0;
}

void heapsort(int a[],int length)
{
    buildmaxheap(a,length);

    int heapsize,i,temp;

    heapsize=length-1;

    for(i=heapsize;i>=0;i--)
    {
        temp=a[0];
        a[0]=a[heapsize];
        a[heapsize]=temp;
        heapsize--;
        maxheap(a,0,heapsize);
    }

    for(i=0;i<length;i++)
    {
        cout<<a[i]<<" ";
    }
}
void buildmaxheap(int a[],int length)
{
    int i,heapsize;
    heapsize=length-1;

    for(i=(length/2);i>=0;i--)
    {
        maxheap(a,i,heapsize);
    }
}

void maxheap(int a[],int i,int heapsize)
{
    int l,r,largest,temp;

    l=2*i;
    r=2*i+1;

    if(l<=heapsize&&a[l]>a[i])
    {

        largest=l;
    }
    else largest=i;
    if(r<=heapsize&&a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        maxheap(a,largest,heapsize);
    }
}
