#ifndef SALESMAN_H
#define SALESMAN_H

#include<iostream>
#include<string> 
#include "Person.h"
using namespace std ;






class salesman :  public person /*this class inherits person class */
{
private :

   int salary ;   /* these are its members which represents it */
   int id ;
   string designation ;


public :
    salesman(int x , int y , string sal , string a ,int q , string st1 , string st2 , string st3);
    void disp() ;
    
    /* here , there is class salesman constructor and a display overrided function 
      which displays derived and base class member's information */


};

#endif//SALESMAN_H
