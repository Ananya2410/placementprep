#include<iostream>
using namespace std;

int main(){
    int a,b,p;

    //taking 1st number as input from user
    cout<<"Enter 1st number: ";
    cin>>a;
    //taking 2nd number as input from user.
    cout<<"Enter 2nd Number: ";
    cin>>b;
    //swapping the values.
    p=a;
    a=b;
    b=p;
    //printing the numbers after swapping.
    cout<<"1st number after swap: "<<a<<endl<<"2nd number after swap: "<<b<<endl;
    //printing the sum of two numbers.
    cout<<"sum of two numbers: "<<a+b<<endl;
    
    return 0;
}