#include <iostream>

using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test():id(0),name(""){

    }
    Test(int id,string name): id(id), name(name){

    }
    void print()
    {

        cout<<id<<" : "<<name<<endl;
    }
    const Test &operator=(const Test &other){

        cout<<"Operator assignment!";
        id=other.id;
        name=other.name;

        return *this;

    }

    Test(const Test &other){
    *this=other;
    }

    friend ostream &operator<<(ostream &out,const Test &test)
    {
        cout<<"Hello"<<endl;
        out<<test.id<<":"<<test.name;
        return out;
    }

};



int main()
{
    Test test1(10,"Mike");
    //test1.print();

    Test test2(20,"Bob");
    //test2.print();

    Test test3;
    test3.operator=(test2);
    //test3.print();

    Test test4=test3;
    //test3.print();
    cout<<test1<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
