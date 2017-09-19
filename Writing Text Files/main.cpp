#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    fstream outFile;

    string outFileName = "text.txt";

    outFile.open(outFileName.c_str(),ios::out);

    if(outFile.is_open())
    {
        outFile<<"Hello";
        outFile<<"!2333";
        outFile.close();
    }
    else
    {
        cout<<"Could not create file"<<endl;

    }





    cout << "Hello world!" << endl;
    return 0;
}
