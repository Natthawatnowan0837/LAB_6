#include<iostream>
using namespace std;

int main(){
    int x,i=0,y=0;
    while (x != 0){
         cout << "Enter an integer: ";
         cin >> x;
         if( x != 0){
             if(x%2 == 0){
                 i++;
             }else{
                 y++;
             }
         }
         
        
    }
        
    cout << "#Even numbers = "<<i <<endl;
    cout << "#Odd numbers = "<<y <<endl;
    return 0;
}