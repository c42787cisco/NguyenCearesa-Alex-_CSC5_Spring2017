/* 
 * File:   main.cpp
 * Author: Nguyen, Alex
 * Created on February 16, 2017, 12:00 PM
 * Purpose: calculate free fall
 */

//System Libraries
#include <iostream>//Input - Output Library

using namespace std; //Namespace under which system libraries exist.

//User LIbraries

//Global Constants
const float GRAVITY=32.174f;//gravity on earth at sea level

//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float time,dist;
    
    //Initialize variables
    time=1.0f;
    
    //Input data
    
    //Map inputs to outputs or process the data
    dist=GRAVITY*time*time/2;//result in ft
    
    
    //Output the transformed data
    cout<<"Free fall of "<<time<<" secs = "<<dist<<" ft"<<endl;
    //Exit stage right
    
    return 0;
}