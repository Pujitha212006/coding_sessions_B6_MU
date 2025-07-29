// swap two numbers with temp value
#include <iostream>
using namespace std;
int main() {
    int a,b,temp;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"before swap";
    cout<<"\na="<<a<<"b="<<b;
    swap(a,b);
    temp=a;
    a=b;
    b=temp;
    cout<<"\nafter swap";
    cout<<"\na="<<a<<"b="<<b;
    return 0;
}
