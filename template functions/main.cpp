#include <iostream>

using namespace std;

template<class T>


void print(T n)
{

    cout<<n<<endl;
}
int main()
{

    print<int>(25);


    cout << "Hello world!" << endl;
    return 0;
}
