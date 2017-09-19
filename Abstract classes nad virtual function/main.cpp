#include <iostream>
#include <typeinfo>
#include <vector>
#include "ring.h"

using namespace std;



/*
int main()
{
    string avle;


    decltype(avle) name="Bob";
    cout<<name;

    cout<<typeid(name).name()<<endl;
    cout<<typeid(avle).name()<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
*/
/*
int main()
{
    auto value="sjgk";

    cout<<typeid(value).name();

    return 0;
}
*/
/*
int main()
{

    auto texts={"one","two","three"};

    for(auto text : texts)
    {
        cout<<text<<endl;
    }

    vector<int> numbers;

    numbers.push_back(5);
    numbers.push_back(4);
    numbers.push_back(3);
    numbers.push_back(52);
    numbers.push_back(23);
    numbers.push_back(34);

    for(auto number: numbers)
    {
        cout<<number<<endl;
    }


    return 0;
}
*/

int main()
{

    ring<string> textring(3);

    textring.add("one");
    textring.add("teo");
    textring.add("three");

    for(int i=0;i<textring.size();i++)
    {
        cout<<textring.get(i)<<endl;
    }

    return 0;
}


