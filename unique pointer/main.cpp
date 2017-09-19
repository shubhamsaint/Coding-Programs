#include <iostream>
#include <memory>
using namespace std;


class Test{
public:
    Test()
    {
    cout<<"created"<<endl;
    }
    void greet(){
    cout<<"Hello"<<endl;
    }
    ~Test(){
    cout<<"destroyed"<<endl;
    }
};
int main()
{
    unique_ptr<Test> pTest(new Test);
    unique_ptr<Test[]> pTest1(new Test);
    pTest1[1].greet();
    pTest->greet();

    cout<<"finished"<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
