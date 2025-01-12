#include<iostream>
using namespace std;
namespace A
{
    int x = 10;
    namespace B
    {
        int  y = 20;
    }
}
using namespace A;
using namespace B; // 
int main()
{
    cout <<A::x<<endl; // call him by A::X because it is defined in the A namespace
    cout<<B::y<<endl;  // using namespace B; so we can access the variable y directly without using A::B::y;
    cout<<A::B::y<<endl;// call him by A::B::y because it is defined in the  B namespace
    return 0;
    
}
