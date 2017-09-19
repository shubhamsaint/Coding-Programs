#include <iostream>

using namespace std;

 class CanGoWrong{
 public:
     CanGoWrong()
     {
         char *pMemory = new char[9999999999999999999];
         delete[] pMemory;
     }

};


int main()
{

    try{
    CanGoWrong wrong;
    }catch(bad_alloc &e)
    {
        cout<<e.what();
    }
    cout << "Hello world!" ;
    return 0;
}
