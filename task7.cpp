#include<iostream>
using namespace std;
void IsSymmetrical();

main()
{ 
           IsSymmetrical();
}
void IsSymmetrical()
{cout<<"Enter a three-digit number: ";
      int number;
      cin>> number;
    
       int n2 = number%10;
       int n3 = number/10;
       int n4 = n3%10;
       int n5 = n3/10;
       int n6 = n5%10;
       
       if (n6==n2)
       {
        cout<<"The number is symmetrical.";
       }
       if (n2!=n6)
       {
        cout<<"The number is not symmetrical.";
       }

}