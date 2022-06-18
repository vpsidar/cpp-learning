#include <iostream>
using namespace std;
int main() {
    char button; 
    cout<<"please press a button"<<endl;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello Maze me";
        break;
    case 'b':
        cout<<"Namaste";
    case 'c':
        cout<<"Wadakamm";        
    
    default:
        cout<<"Wrong button";
        break;
    }

    return 0;
}