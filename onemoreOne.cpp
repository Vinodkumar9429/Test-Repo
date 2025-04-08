#include<iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter your marks :"<<endl;
    cin>>marks;

    if (marks == 100){
        cout<<"100"<<endl;

    }
    else if (marks >=80){
        cout<<"Good, A"<<endl;
    }
    else if (marks >=60){
        cout<<"B"<<endl;
    }
    else if(marks > 0){
        cout<<"Fail"<<endl;
    }

    int x,y,z;

    cout<<"Enter any two numbers to perform calculations :"<<endl;
    cout<<"Enter first number"<<endl;
    cin>>x;
    cout<<"Enter second number"<<endl;
    cin>>y;

    cout<<"From the list below, select the number in accordance with the operation you'd like to perform"<<endl;
    cout<<"1)Addition"<<endl;
    cout<<"2)Subtraction"<<endl;
    cout<<"3)Multiplication"<<endl;
    cout<<"4)Division"<<endl;
    cin>>z;

    switch(z){
        case 1:
        cout<<"The addition of these numbers is :"<<x+y<<endl;
        break;
        case 2:
        cout<<"The subtraction of these numbers is :"<<x-y<<endl;
        break;
        case 3:
        cout<<"The multiplication of these numbers is :"<<x*y<<endl;
        break;
        case 4:
        cout<<"The division of these numbers is :"<<x/y<<endl;
        break;

        default:
        cout<<"Invalid"<<endl;
        break;
    }
    return 0;

}