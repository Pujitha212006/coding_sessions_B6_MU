
#include<iostream>
using namespace std;
int main(){
    float marks1,weight1,marks2,weight2,marks3,weight3;
    cout<<"enter marks and weight for each subject";
    cin>>marks1;
    cin>>weight1;
    cin>>marks2;
    cin>>weight2;
    cin>>marks3;
    cin>>weight3;
    float wtavg=(marks1*weight1+marks2*weight2+marks3*weight3)/(weight1+weight2+weight3);
    if(wtavg>=90){
            cout<<"Grade A";
    }
    else if(wtavg>=80 && wtavg<90){
        cout<<"Grade B";
    }
     else if(wtavg>=70 && wtavg<80){
        cout<<"Grade C";
    }
     else if(wtavg>=60 && wtavg<70){
        cout<<"Grade D";
    }
    else{
        cout<<"Grade F";
    }
    return 0;
}

