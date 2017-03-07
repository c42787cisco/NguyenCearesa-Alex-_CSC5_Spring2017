/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on March 2nd 2017, 11:52 AM
 * Purpose: Calculate loan parameters
 */

//System Libraries
#include <iostream>//Input - Output Library
#include <iomanip> //format library
#include <cmath> 
using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants
const float PERCENT=100.f;   //percent conversion
const float CNVYRMN=12.0f;        
//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float faceval,    //loan face value
          cnsmrrec,   //what the consumer receives
            monthpay; //monthly payment made
    int  intrate,     //yearly percentage interest rate
         NumMon;      // number of months in the loan
    
    
    //Initialize variables
    
    //Input data
    cout<<"This program will calculate monthly loan ";
    cout<<"payments and the total amount owed as the face value;"<<endl;
    
    cout<<"Enter the loan amount of money needed $";    
    cin>>cnsmrrec;
    
    cout<<"Enter the number of months in the loan ";
    cin>>NumMon;
    
    cout<<"Enter your interest rate % = ";
    cin>>intrate;
    cout<<endl;
    
     
    //Map inputs to outputs or process the data
    faceval=cnsmrrec/(1-intrate/PERCENT/CNVYRMN*NumMon);
    
    monthpay=(cnsmrrec/(1-intrate/PERCENT/CNVYRMN*NumMon))/NumMon;
    
    //Output the transformed data
    
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your loan amount received is $"<<cnsmrrec<<endl;
    cout<<"Your number of monthly payments is "<<NumMon<<endl;
    cout<<"Your interest rate = "<<intrate<<"%"<<endl;
    cout<<"The total amount of money owed is $"<<faceval<<endl;
    cout<<"Your monthly installment is = $"<<monthpay<<endl;
    
    
    //Exit stage right
    
    return 0;
}