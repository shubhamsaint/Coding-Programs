#include <iostream>

using namespace std;

void mightGrow()
{

    bool error1 = true;
    bool error2 = true;

    if(error1)
    {

        throw "Something went wrong";
    }
    if(error2)
    {
        throw 8;
    }
}

int main()
{
    try
    {
    mightGrow();
    }
    catch(int e)
    {
        cout<< "error code" <<e<<endl;
    }catch(char const* e)
    {

        cout<<"Error mesage"<<e<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
