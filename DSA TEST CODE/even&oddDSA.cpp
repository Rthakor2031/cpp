#include<iostream>
using namespace std;

int main() {
    // Write C++ code here
   int num;
   cout<<"Enter a number:";
   cin>>num;
   
   if(num > 0)
   {
       (num % 2 == 0)?cout<<"It's a Even Number":cout<<"It's odd Number";
   }
   else{
       cout<<"Enter a valid number for check that even or odd number";
   }

    return 0;
}
