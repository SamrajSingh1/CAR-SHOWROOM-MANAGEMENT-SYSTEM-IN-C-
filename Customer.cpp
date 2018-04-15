 #include<iostream>
 #include<string>
 #include "Customer.h" 
 #include "Person.h"
  using namespace std ;
 
 /* initialize members */
 customer::customer(string s1 , int x , string s2 , string s3 , string s4): person(s1,x,s2,s3,s4){} ;
 void customer::set(string a , string s ,string d , string f , int z , int x ) 
	   {
           date_purchase = a ;
           brand_choice = s ;
           model_choice = d ;
           color_choice = f ;
           price_choice = z ;
           year_choice = x ;

       }



       void customer::disp() /*displaying members */
       {
          person::disp() ;
          cout<<"\n" ;
          cout<<"DATE OF PURCHASE : "<<date_purchase<<"\n" ;
          cout<<"BRAND CHOICE : "<<brand_choice<<"\n" ;
          cout<<"MODEL CHOICE : "<<model_choice<<"\n" ;
          cout<<"COLOR CHOICE: "<<color_choice<<"\n" ;
          cout<<"PRICE CHOICE: "<<price_choice<<"\n" ;
          cout<<"YEAR CHOICE: "<<year_choice<<"\n" ;

       }


