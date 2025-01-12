#include<iostream>
using namespace std;
namespace
{
    int x = 2;

}

int main()
{
    cout<<x<<endl;
    cout<<::x<<endl;
    return 0;
}