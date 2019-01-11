/* 
 * File:   main.cpp
 * Author: Emely Mondragon
 * Created on January 2, 2019, 12:36 PM
 */

/* Program·to·calculate·the·limit·of·Soda·Pop·Consumption.↵
Input·the·desired·dieters·weight·in·lbs.↵
The·maximum·number·of·soda·pop·cans↵
which·can·be·consumed·is·37027·cans*/
#include <iostream>  

using namespace std;

int main() 
{
    int mLethal;  // Amount in Grams of lethal sweetener in mice
    int hMass_G;  // Mass of a 100 lb human converted to grams
    int mMass_G; // Mas of mice in grams
    int lethal_G; // Amount of lethal grams in humans 
    int des_lbs;  // Input amount in lbs
    int des_g;  // Converted input to grams
    const float per_diet = 0.001f;  //Percentage of artificial sweetener in diet soda
    int can_G;    // mass in can of soda in grams
    long long int num_cans;// Output of number of cans that can be consumed
    
   mLethal = 5;  // Lethal dose of artificial sweetener for mouse in grams
   hMass_G = 45400;  // Weight of human (100 lbs) converted to grams
   mMass_G = 35; // Mass of mouse in grams
   can_G = 350 ;  // Amount in one can of soda in grams 

            
    cout << "Program to calculate the limit of Soda Pop Consumption.\n";
    cout << "Input the desired dieters weight in lbs.\n ";
    cin >> des_lbs ;      
    
    lethal_G = ( mLethal * hMass_G ) / mMass_G ;
    
    des_g = (lethal_G * des_lbs) / 100;  // Lethal amount calculated above
    
    num_cans = des_g / (per_diet * can_G );
    
    cout << "The maximum number of soda pop cans\n";
    cout << "which can be consumed is " << num_cans << " cans";

    
    return 0;
}