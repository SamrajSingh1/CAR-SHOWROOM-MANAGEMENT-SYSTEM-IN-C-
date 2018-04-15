#ifndef PERSON_H
#define PERSON_H 

#include<iostream>
#include<string> 
using namespace std ;


class person /* person class with its members to represent the class */
{
private :
    string name ;
    int age ;
    string cnic ;
    string contact ;
    string address ;

public :
    person(string s1 , int x , string a , string s , string d) ; /*constructor */
    void disp(); /* this function displays its members information */

};

 #endif //PERSON_H



