#include <iostream>
#include <map>
using namespace std;

class Person
{
    int age;
    string name;
public:
    Person(const Person &other)
    {
        cout<<"Copy Construictor Running!";
        age=other.age;
        name=other.name;
    }

    Person():name(""),age(0){
    }
    Person(string name,int age):name(name),age(age){
    }
    void print()
    {
        cout<<name<<":"<<age<<endl;
    }
};


int main()
{
    map<int,Person> people;

    people[0]=Person("Mike",40);
    people[1]=Person("Vickyu",30);

    people.insert(make_pair(55,Person("Shubha",23)));


    for(map<int,Person>::iterator it=people.begin();it!=people.end();it++)
    {

        it->second.print();
    }






    cout << "Hello world!" << endl;
    return 0;
}
