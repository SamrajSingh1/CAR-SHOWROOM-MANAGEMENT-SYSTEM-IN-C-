#ifndef SELLING_H
#define SELLING_H

#include<iostream>
#include<string> 
using namespace std ;





class selling /*selling class which maintains cars and money record */
{

private :
   int cars_sold ;
   int total_money_collect ;

public :
   void set1(int z , int x) ; /*this function initializes the members of class selling */
   void cars_money() ; /* it displays number of cars to be sold and total money collcted */


};

#endif//SELLING_H


