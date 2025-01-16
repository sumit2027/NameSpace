#include<iostream>
using namespace std;
class addition
{
    public:
    int x;
    int y;

    int add()
    {
        return x+y;

    }

};

int main()
{
    addition a;
    addition b;
    cout<<"Enter two number"<<endl;
    cin>>a.x>>a.y;
    int z = a.add();
    cout<<"Addition of "<<a.x<<" and "<<a.y<<" is "<<z<<endl;

    cout<<"Enter two number"<<endl;
    cin>>b.x>>b.y;
    int p = b.add();
    cout<<"Addition of "<<b.x<<" and "<<b.y<<" is "<<p<<endl;
    return 0;

}