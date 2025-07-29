// swap two numbers without temp values
#include <iostream>
using namespace std;
int main() {
    int a,b,temp;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"before swap";
    cout<<"\na="<<a<<"b="<<b;
    
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nafter swap";
    cout<<"\na="<<a<<"b="<<b;
    return 0;
}
