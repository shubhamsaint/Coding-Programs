#include <iostream>
#include <exception>

using namespace std;

void goesWrong()
{
    bool error1 = true;
    bool error2 = false;

    if(error1)
    {
        throw bad_alloc();
    }
    if(error2)
    {
        throw bad_alloc();
    }


}

int main()
{
    try{
    goesWrong();
    }

    catch(bad_alloc &e)
    {
        cout<<e.what()<<endl;
    }
    catch(exception &e)
    {
        cout<<"2";
        cout<<e.what()<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
