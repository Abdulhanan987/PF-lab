#include<iostream>
#include<cmath>
using namespace std;
void height(float dis,double ang);
main()   {
    cout<<"Enter the distance from the base of the tree (in feet): ";
      float distance;
      cin>>distance;
      cout<<"Enter the angle of elevation (in degrees): ";
       float angle;
       cin>>angle;
       height(distance,angle);

}
void height(float dis,double ang)
{    double radians = ang / 57.2958;
    double length = dis* tan(radians);
    cout<<"The height of the tree is: "<<length<<" feet";

}