#include<iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter your marks :"<<endl;
    cin >> marks;

    if ( marks == 0){
        cout<<"Heck you!"<<endl;
    }
    else if (marks == 100){
        cout<<"Khabhi Ghar Ke bahar bhi jaya karo Beta!"<<endl;
    }
    else if (marks >= 90){
        cout<<"Belt me slips lagakar gumthe ho MC ?"<<endl;
    }
    else if (marks >= 80){
        cout<<"Haan, yeh sahi bhai. Aisa hi balance rakho zindhagi meh"<<endl;
    }
    else if( marks >= 60){
        cout<<"Uss ladki ke peecha karna bandh karo BSDK"<<endl;
    }
    else if (marks >= 40){
        cout<<"Aur pado!"<<endl;
    }
    else if ( marks >= 30){
        cout<<"Karali bazathi ?"<<endl;
    }
    else if (marks >= 0) {
        cout<<"Bhai ghar math jana, Dady belt pakad ke wait kar raha hoga"<<endl;
    }

    cout<<endl;

    cout<<"This is the beginning of switch case"<<endl;

    int x, y, z;
    cout<<"Enter two number to perform calculations"<<endl;
    cin >>x>>y;
    cout<<"Enter two numbers based on the operation you want to perform form the list below :"<<endl;

    cout<<"1)Addition"<<endl;
    cout<<"2)Subtraction"<<endl;
    cout<<"3)Multiplication"<<endl;
    cout<<"4)Division"<<endl;
    cin >> z;

    switch (z) {
        case 1 : 
        cout<<"The addition of these numbers is :"<<x+y<<endl;
        break;
        
        case 2 :
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