/* 
 * File:   main.cpp
 * Author: Emely Mondragon
 * Created on January 14, 2019, 4:36 PM
 * Purpose:  A bank charges $10 per month plus the following check fees for a
 * commercial checking account: $.10 each for fewer than 20 checks $.08 each 
 * for 20–39 checks $.06 each for 40–59 checks $.04 each for 60 or more checks
 * The bank also charges an extra $15 if the balance of the account falls below 
 * $400 (before any check fees are applied). 
 * Write a program that asks for the beginning balance and the number of checks 
 * written. Compute and display the bank’s service fees for the month. 
 * Input Validation: Do not accept a negative value for the number of checks 
 * written. If a negative value is given for the beginning balance, 
 * display an urgent message indicating the account is overdrawn.*/ 

//System Libraries
#include <iostream>//Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main() 
{
//Set the random number seed   
    double balance, nbalance, cfee, mfee, Lfee; //Declare Variables
    int ncheck;
    
    //Initialize or input i.e. set variable values
    //Map inputs -> outputs
   cout <<"Monthly Bank Fees\n";
   cout <<"Input Current Bank Balance and Number of Checks" << endl;
   cout << "Balance     $   ";
   cin >> balance; 
   cin >> ncheck;
   cout << endl;
   
   
   cout << setprecision (2) << fixed; //Displays
           
   //If input for balance is negative
    if (balance < 0)
       cout << "Your account is overdrawn!";
   //If statement for balance under $400
    
/* Rules for Check Fees:
 * 
 * $.10 each for fewer than 20 checks
 * $.08 each for 20–39 checks
 * $.06 each for 40–59 checks 
 * $.04 each for 60 or more checks */   
   if (ncheck <0)
       cout << "Input invalid. Please insert a value greater than 0.";
   if (ncheck <20)
       cfee = (ncheck * 0.1);
   if (ncheck <=39 && ncheck >=20)
       cfee = (ncheck * 0.08);
   if (ncheck <=59 && ncheck >=40)
       cfee = (ncheck * 0.06);
   if (ncheck >=60)
       cfee = (ncheck * 0.04);   
 
  //Calculated check fee 
   cout << "Check Fee   $     " << cfee << endl;
   
  //Displayed monthly fee
   mfee = 10.00; //Variable for Monthly Fee defined
   cout << "Monthly Fee $    " <<mfee << endl;
   
   if (balance < 400)
       Lfee = 15.00; //Fee for low funds
   else 
       Lfee = 0.00; 
   
  cout << "Low Balance $    15.00\n";
  //Calculated final balance

   nbalance = ((balance - Lfee) - cfee) - mfee;
   cout << "New Balance $    " << nbalance; //Display the outputs

         
    //Exit stage right or left!
    return 0;
}