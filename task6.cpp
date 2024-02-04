#include<iostream>
using namespace std;
void checkAlphabetcase() ;
 char op;
main ()
{    
    cout<<"Enter a character (A/a): ";
       
        cin>>op;
      
      checkAlphabetcase();
        
}
void checkAlphabetcase() 
     
{   
     
        
     
     if (op=='A')
        {  
        cout<<"You have entered Capital "<<op;

        
        
    }
        if(op =='a')
        
        { 
            
             cout<<"You have entered small "<<op;
            
        }
       
}