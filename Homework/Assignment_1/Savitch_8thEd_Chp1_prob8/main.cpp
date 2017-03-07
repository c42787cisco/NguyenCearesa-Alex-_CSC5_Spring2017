/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 28, 2017, 1:200 PM
 * Purpose: Value of change.
 */

//System Libraries
#include <iostream>//Input - Output Library

using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants

//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float dime,dimeval,nick,nickval,quart,quartval,penny,pennyval;
    float halfD,halfDval,goldD,total;
    
    
    //Initialize variables
    
    //Input data
    
    cout<<"Enter the number of pennies you have:"<<endl; 
    cin >>penny;
    
   cout<<"Enter the number of nickels you have:"<<endl;
   cin >> nick;
   
   cout<<"Enter the number of dimes you have:"<<endl;
   cin >> dime;
   
   cout<<"Enter the number of quarters you have:"<<endl;
   cin >> quart;
   
   cout<<"Enter the number of half-dollars you have:"<<endl;
   cin >> halfD;
   
   cout<<"Enter the number of Gold/Silver dollars you have:"<<endl;
   cin >> goldD;
   
   
   
    //Map inputs to outputs or process the data
   
   pennyval=penny*.01f;
   nickval=nick*.05f;
   dimeval=dime*0.1f;
   quartval=quart*0.25f;
   halfDval=halfD*0.5f;

   total=pennyval+nickval+dimeval+quartval+halfDval+goldD;
   
    //Output the transformed data
cout<<"If you have "<<penny<<" pennies, "<<dime<<" dimes, "<<nick;
   cout<<" nickels, "<<quart<<" quarters, "<<halfD<<" half-dollars, and "<<endl;
   cout<<goldD<<" gold or silver dollars, then you have $";
   cout<<total<<" dollars in change.";
   
           
      
    
    //Exit stage right
    
    return 0;
}