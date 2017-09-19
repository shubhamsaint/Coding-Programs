#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> mylist;


    mylist.push_back(210);
    mylist.push_front(213);

    list<int>::iterator it=mylist.begin();
*it++;
    mylist.insert(it,56);


    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\n";
    }


    cout << "Hello world!" << endl;
    return 0;
}
