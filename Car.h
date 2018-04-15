#ifndef CAR_H
#define CAR_H

#include<iostream>
#include<string> 
using namespace std ;

class car /* this is car class with members which represents its imformation */
{
private :

     int    year ;
    
	string brand ;
    string model ;
    string color ;
    int  price ;


public :
    car(int x, string a , string s , string d  , int e) ; /* constructor for the car */
    void disp() ;


};


 #endif//CAR_H 

