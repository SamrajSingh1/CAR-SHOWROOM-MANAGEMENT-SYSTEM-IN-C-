 #include<iostream>
 #include<string>
 #include "Person.h"
 using namespace std ;
 
 
 person::person(string s1 , int x , string a , string s , string d) /*initialize members */
    {
    name =  s1 ;
    age = x ;
    cnic  = a ;
    contact = s ;
    address = d ;

    }

    void person::disp() /*display members */
    {
        cout<<"\nNAME: "<<name<<"\n" ;
        cout<<"AGE: "<<age<<"\n" ;
        cout<<"CNIC:"<<cnic<<"\n" ;
        cout<<"CONTACT: "<<contact<<"\n" ;
        cout<<"ADDRESS: "<<address<<"\n" ;
    }

  
