#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float radius;
    cout<<"enter the radius:";
    cin>>radius;
    float area=3.14159*radius*radius;
    float circum=2*3.14159*radius;
    // cout<<fixed<<setprecision(2);
    cout<<"Area: "<<area<<endl;
    cout<<"Circumference: "<<circum;
    return 0;

}