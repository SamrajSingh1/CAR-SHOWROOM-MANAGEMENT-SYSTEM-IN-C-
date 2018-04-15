#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<string>
#include "Person.h"

using namespace std ;




class customer : public person /* customer class with its members to represent it */
{                              /* here customer class inherits perosn class */
private :
    string date_purchase ;
    string brand_choice ;
    string model_choice ;
    string color_choice ;
    int price_choice ;
    int year_choice ;


    public :
       customer(string s1 , int x , string s2 , string s3 , string s4); /*constructor */

       void set(string a , string s ,string d , string f , int z , int x ) ; /*function to initialize class members */
       void disp() ; /* this function is override and displays the class members and 
                      its inherited class members */





} ;

#endif//CUSTOMER_H

