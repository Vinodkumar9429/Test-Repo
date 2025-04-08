#include<iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter your marks :"<<endl;
    cin >> marks;

    if ( marks == 0){
        cout<<"fuck you!"<<endl;
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

   

    return 0;
}