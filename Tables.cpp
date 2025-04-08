#include<iostream>
using namespace std;

int main(){

    int x;
    cout<<"Enter Any Number for it's table to be printed : "<<endl;
    cin>>x;
    for(int i = 1; i <= 10; i++){
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
    }
    cout<<"This is an extra line added to practice GIT commands"<<endl;

    return 0;
}