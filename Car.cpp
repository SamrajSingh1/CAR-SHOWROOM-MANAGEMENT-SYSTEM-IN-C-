 #include<iostream>
 #include<string>
 #include "Car.h"
 using namespace std ;
 
  car::car(int x, string a , string s , string d  , int e) /*initialize members */
    {
        year = x ;
        brand = a ;
        model = s ;
        color  = d ;
        price = e ;


    }

    void car::disp() /*displaying members */
    {

      cout<<"year : "<<year<<" " ;
      cout<<"brand : "<<brand<<" " ;
      cout<<"model : "<<model<<" " ;
      cout<<"color : "<<color<<" " ;
      cout<<"price : "<<price<<"\n" ; ;

    }
 
