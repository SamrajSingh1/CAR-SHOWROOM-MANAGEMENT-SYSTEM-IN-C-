 #include<iostream>
 #include<string>
 #include "Salesman.h" 
 #include "Person.h"
 using namespace std ;
 
 salesman::salesman(int x , int y , string sal ,string a ,int q , string st1 , string st2 , string st3):person(a,q,st1,st2,st3),salary(x) , id(y) , designation(sal)
	{   } /* initialize members */
	
void salesman::disp() /*displaying members */
    {

        person::disp() ;
        cout<<"\n" ;
        cout<<"SALARY : "<<salary<<"\n" ;
        cout<<"I.D : "<<id<<"\n" ;
        cout<<"DESIGNATION : "<<designation<<"\n" ;
        

    }

