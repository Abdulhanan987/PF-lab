#include<iostream>
using namespace std;
void EvenOrodd();
main ()
{
      EvenOrodd();
}
void EvenOrodd()
{   cout<<"Enter a five-digit number: ";
    
       int number;
       cin>>number;
       int number_2;
        number_2 =  (number)%10;
        int number_3= number/10;
        int number_4=( number_3)%10;
        int number_5= (number_3)/10;
        int number_6= (number_5)%10;
        int number_7=  (number_5)/10;
        int number_8=  (number_7)%10;
        int number_9=  (number_7)/10;
        int number_10= (number_9)%10;
        int number_11= number_2 + number_4 + number_6 +number_8 + number_10;
        if (number_11%2==0)
        {
            cout<<"Evenish";
        }
 
 if (number_11%2!=0)
{
    cout<<"Oddish";
}
}