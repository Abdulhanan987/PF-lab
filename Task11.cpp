#include<iostream>
using namespace std;
void CalculatePoolState ();
main()
{
    CalculatePoolState ();
}
void CalculatePoolState
{
    int volume, pool1, pool2; float hours;
    cout<<"Enter volume of the pool in liters: ";
    cin>>volume;
    cout<<"Enter flow rate of the first pipe per hour: ";
    cin>>pool1;
    cout<<"Enter flow rate of the second pipe per hour: ";
    cin>>pool2;
    cout<<"Enter hours that the worker is absent: ";
    cin>hours;
    int calculation=(poo1*hours)+(pool2*hours);
    int pipe1=((poo1*H)*100)/calculation;
    int pipe2=((pool2*H)*100)/calculation;
    int percalculation=(calculation*100)/volume;
    if(calculation<volume){
    cout<<"The pool is "<<percalculation<<"% full. Pipe 1: "<<pipe1<<"%. Pipe 2: "<<pipe2<<"%.";
    }
    if(calculation>volume){
        int overflow=calculation-volume;
        cout<<"For "<<H<<" hours, the pool overflows with "<<overflow<<" liters.";
    }
}

