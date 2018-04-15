 #include<iostream>
 #include<string>
 #include "Selling.h" 
 using namespace std ;
 
 
 void selling::set1(int z , int x) /* initialize members */
    {
        cars_sold = z ;
        total_money_collect = x ;


    }

    void selling::cars_money() /*displaying members */
    {

        cout<<"\ncars sold : "<<cars_sold<<"\n" ;
        cout<<"total money collected : "<<total_money_collect ;


    }
