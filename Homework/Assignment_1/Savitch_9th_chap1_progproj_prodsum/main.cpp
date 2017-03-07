/*
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 16, 2017, 11:28 AM
 * Purpose: Generate the product and sum of 2 numbers
*/
//System Libraries
#include <iostream>//Input - Output Library
#include <cstdlib>  //Random number generator
#include <ctime>   //Time library to seed the random number generator



using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants

//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the random number generator with time
    srand(static_cast<unsigned int>(time(0)));
    
    //declare variables
    short op1,op2,sum,prod;
    
    
    //Initialize variables
    op1=rand()%171+10; //10 - 180
    op2=rand()%90+10; //10-99
    //Input data
    
    //Map inputs to outputs or process the data
    sum=op1+op2;
    prod=op1*op2;
    //Output the transformed data
    cout<<op1<<" + " <<op2<<" = " <<sum<<" and ";
    cout<<op1<<" X " <<op2<<" = " <<prod<<endl;
    //Exit stage right
    
    return 0;
}