#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string onFileName = "test.txt";

    ifstream inFile;

    inFile.open(onFileName.c_str());

    if(inFile.is_open())
    {
        string line;
        while(inFile)
        {
        getline(inFile,line);
        cout<<line<<endl;
        }
        inFile.close();
    }

    cout << "Hello world!" << endl;
    return 0;
}
