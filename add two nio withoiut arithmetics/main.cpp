#include <iostream>

using namespace std;
int add(int x,int y)
{
    int carry;
    while(y!=0)
    {
        carry=x&y;

        x=x^y;
        y=carry<<1;

    }
    return x;
}

int recAdd(int x,int y)
{
    if(y==0)
        return x;
    else
    {
        return recAdd(x^y,(x&y)<<1);
    }

}

int main()
{
    cout << "Hello world!" << endl;
    cout<<recAdd(4,5);
    return 0;
}
