#include<iostream>
using namespace std;
namespace A
{
   int x = 10;
    namespace B
    {
        int y = 20;
    }
}

namespace C = A::B;

int main()
{
    cout<<C::y<<endl;
    cout<<A::x<<endl;
    return 0;
}