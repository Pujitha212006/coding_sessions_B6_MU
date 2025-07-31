#include<iostream>
using namespace std;
int main()
{
    int a=2,b=3;
    cout<<"Before Swapping\n";
    cout<<"a="<<a<<" b="<<b<<"\n";
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After Swapping\n";
    cout<<"a="<<a<<" b="<<b;
    return 0;
}
