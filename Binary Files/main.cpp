#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push,1)  //padding,... alligning the structure by 1 byte


struct person{
char name[50];
int age;
double weight;

};

#pragma pack(pop)

int main()
{
    //cout<<sizeof(person);

    string fileName = "test.bin";

    person someone = {"Shubham",23,167.8};

    ofstream openFile;

    openFile.open(fileName.c_str(),ios::binary);

    if(openFile.is_open())
    {
        //openFile.write((char*)&someone,sizeof(person));

        openFile.write(reinterpret_cast<char*>(&someone),sizeof(person));

        openFile.close();
    }
    else{
        cout<<"could not create file";
    }
  //read binary file//////

  ifstream readFile;
 person someoneElse = {};
    readFile.open(fileName.c_str(),ios::binary);

    if(readFile.is_open())
    {
        //openFile.write((char*)&someone,sizeof(person));

        readFile.read(reinterpret_cast<char*>(&someoneElse),sizeof(person));

        readFile.close();
    }
    else{
        cout<<"could not Read file";
    }

  cout<<someoneElse.name<<" : "<<someoneElse.age<<" : ";


    openFile.close();


    return 0;
}
