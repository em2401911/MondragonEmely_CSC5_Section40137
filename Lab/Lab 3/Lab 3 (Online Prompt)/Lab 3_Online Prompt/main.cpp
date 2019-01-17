/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Emely Mondragon
 * Created on January 16, 2019, 6:33 PM
 * Purpose: 
 * Create a program, i.e. a Netbeans project with the following inputs, 
 * knowns, and outputs.
 * Description -> Calculate the percentage Gas Tax on a gallon of gas, 
 * and the profit made from a gallon of gas given
 * Taxes -> http://watchdog.org/232083/california-gas-taxes
 * 
 *   39 cents for excise tax/gallon
 * 
 *   8% sales tax
 * 
 *   10 cents for cap and trade “fee”—tax on a tax/gallon
 * 
 *   18.4 cents federal excise tax/gallon
 * Profit -> http://www.forbes.com/2011/05/10/oil-company-earnings.html
 * 
 * 6.5% oil company profit
 * 
 * Input from the command line, using a prompt and the cin object
 * 
 * "The amount it cost you per gallon the last time you put gas in your car."
 * 
 * Compare the percentages and the dollar amount 
 * of profit gas companies make vs. taxes to the Govt.
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Libary
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int   PERCENT=100;   //Percentage calculation

//Function Prototypes

//Execution Begins Here!
int main()
{
    //Declare Variables
    float oilPrft,  //Oil Company Profit
          fTx,   //Federal excise Tax
          stTx,  //State excise Tax
          saTx,  //California State Sales Tax
          cTx,  // Cap and trade fee tax
          pPrice,   //Price at the pump
          sPrice;   //Price to the gas station
    
    //Initialize or input i.e. set variable values
    oilPrft = 0.0826f;//8.26 percent profit
    fTx = 0.184;  //18.4 cents per gallon or $0.184
    stTx = 0.390;  //0.390 cents per gallon or $0.39 
    saTx = 0.080; //California sales tax on gas.
    cTx = 0.100;  // 10 cents per gallon or $0.100
    // I did as the Lab Assignment on Canvas asked and gave the program an
    // input. I would input 3.259 from Chevron, in my case.
    
    //Map inputs -> outputs
    cout << "The amount it cost you per gallon ";
    cout << "the last time you put gas in your car.\n";
    cin >> pPrice;
    
    sPrice = (pPrice - fTx - stTx - cTx)/(1 + saTx);
    
    //Display the outputs
    
    cout <<fixed<<setprecision(3)<<showpoint;
    cout << "Pump Price      = $" << pPrice << "/gallon\n";
    cout << "Fed   Ex Tax    = $" << fTx << "/gallon" << endl;
    cout << "State Ex Tax    = $" << stTx << "/gallon" << endl;
    cout << "Cap and Fee Tax    = $" << cTx << "/gallon" << endl;
    cout << "State Sales Tax = $" << sPrice*saTx << "/gallon" << endl;
    cout << "Station Price   = $"<< sPrice << "/gallon" << endl;
    cout << "Oil Company Profit   = " << oilPrft*PERCENT <<"%/gallon" << endl;
    cout << "Total Percentage Tax = ";
            cout << ((pPrice-sPrice)/sPrice)*PERCENT << "%/gallon" << endl;

    return 0;
}

