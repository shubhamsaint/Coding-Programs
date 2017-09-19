#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream input;

    input.open("stats.txt");

    if(!input.is_open())
    {
        return 1;
    }
    while(input)
    {
        string line;

        //getline(input,line,":");

        getline(input,line,':');
        int population;

        input>>population;
        input >> ws;
        if(!input)
            break;


        cout<<"1"<< line<<"---"<<population<<endl;


    }


    return 0;
}
