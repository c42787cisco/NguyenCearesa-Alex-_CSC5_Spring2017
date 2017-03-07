/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 28, 2017, 11:30 AM
 * Purpose: Utilize math and formatting libraries
 */

//System Libraries
#include <iostream>//Input - Output Library
#include <cmath>   //math library
#include <iomanip>  
using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants

//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float fuVal,  //future value from savings $'s
          prsVal, //present value in savings $'s
          invRate; //Investment Rate or interest rate %  
    
    unsigned short numCper; // number of compunding periods yrs
    
    //Initialize variables
    prsVal=5000.0f;
    invRate=0.06f;
    numCper=.72/invRate; // rule of 72
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    fuVal=prsVal*pow((1+invRate) ,numCper);
    
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"interst rate             =  "<<invRate*100<<"%"<<endl;
    cout<<"years left in saving     =  "<<numCper<<"(yrs)"<<endl;
    cout<<"present value in savings = $"<<setw(8)<<prsVal<<endl;
    cout<<"future value (powe)      = $"<<setw(8)<<fuVal<<endl;
    
            //Map inputs to outputs or process the data
    
    fuVal=prsVal*exp(numCper*log(1+invRate));
     //Output the transformed data
     cout<<"future value (exp &log)  = $"<<setw(8)<<fuVal<<endl;
            
     
     //shows relationship between multiplication and logs with addition
     
     float op1=4,op2=5,prod;
     prod=op1*op2;
     cout<<"product of "<<op1<<"*"<<op2<<"="<<prod<<endl;
     prod=exp(log(op1)+log(op2));
      cout<<"product of exp((log "<<op1<<")+log("<<op2<<"))="<<prod<<endl;
     
    //Exit stage right
    
    return 0;
}