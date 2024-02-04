#include<iostream>
#include<cmath>
using namespace std;
float a,b,c;
void d2(float det);
void d1(float disc);
void d3(float dt);
main()
{
    cout<<"Enter the value of a: ";
       
         cin>>a;
         cout<<"Enter the value of b: ";
         
         cin>>b;
         cout<<"Enter the value of c: ";
         
         cin>>c;

        float determinant = (b*b) - 4*a*c;
        if(determinant > 0)
        {   d1(determinant);
          
        }
        if (determinant == 0)
        {    d2(determinant);
           
        }
        if (determinant < 0)
        {
            d3(determinant);


        }

}
void d1(float disc)
{  float  root1 = (-b + sqrt(disc))/(2*a);
         float root2 = (-b - sqrt(disc))/(2*a);
         cout<<"Solutions: x = "<<root1<<" and x = "<<root2;

}
void d2(float det)
{
     float root = -b/(2*a),root2 = -b/(2*a);
            cout<<"Solution: x = "<<root;
}
void d3(float dt)
{float root1 = (sqrt(-dt)/2*a),root3 = (sqrt(-dt)/2*a);
            float root2 = -b/(2*a),root4 = -b/(2*a);
            cout<<"Complex Solutions: x = "<<root2<<" + "<<root1<<"i and x = "<<root4<<" - "<<root3<<"i";


}

