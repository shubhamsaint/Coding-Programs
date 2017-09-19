#include <iostream>

using namespace std;

void test()
{

    cout<<"hello";
}

int main()
{
    void (*pTest)()=test;

    pTest();



    cout << "Hello world!" << endl;
    return 0;
}
