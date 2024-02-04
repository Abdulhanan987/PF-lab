#include<iostream>
using namespace std;
void timeTravel(int h,int m);
main()
{
    cout<<"Enter Hours: ";
      int hours;
      cin>>hours;
      cout<<"Enter Minutes: ";
        int minutes;
        cin>>minutes;
        timeTravel(hours,minutes);

}
void timeTravel(int h,int m)
{
    if (h<23)
    {   if (m>=45)
      {
        int time = h + 1;
          int t2 =( m +15)%60;
          
          cout<<time<<":"<<t2;}
    }
    if (h<23)
    {    if (m<45)
    {
        int t1 = m + 15;
        cout<<h<<":"<<t1;}
    }
       if (h ==23)

        {    if(m>=45)
           { int t3 = h - 23;
            int t4 = (m+15)%60;
        
            cout<<t3<<":"<<t4;
           }
             

        }
           if (h==23)
           {
            if (m<45)
            {
                int t6 = m + 15;
                cout<<h<<":"<<t6;
            }
           }
}