#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> numbers(20);

    cout<<"Size:"<<numbers.size()<<endl;

    int capacity = numbers.capacity();

    cout<<"capacity:"<<capacity<<endl;

    for(int i=0;i<1000;i++){
        if(numbers.capacity()!=capacity){
            capacity = numbers.capacity();
            cout<<"capacity:"<<capacity<<endl;

        }
        numbers.push_back(i);
    }

    return 0;
}
