/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main1.cpp
 * Author: madha
 *Created on January 15, 2019, 9:11 PM
 * Purpose: An Internet service provider has three different 
 * subscription packages for its customers:
 * Package A: For $9.95 per month 10 hours of access are provided. 
 * Additional hours are $2.00 per hour.
 * Package B: For $14.95 per month 20 hours of access are provided. 
 * Additional hours are $1.00 per hour.
 * Package C: For $19.95 per month unlimited access is provided.
 * Write a program that calculates a customer’s monthly bill. 
 * It should ask which package the customer has purchased 
 * and how many hours were used. It should then display the total amount due. 
 * Input Validation: Be sure the user only selects package A, B, or C. 
 * Also, the number of hours used in a month cannot exceed 744.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double hours, price, total;
    char package;// Variables
   
    
    // Initiate variables
    
    
    cout << "ISP Bill\n"; //Choose Package
    cout << "Input Package and Hours\n";
    cin >> package >> hours;
    
     
    if (hours > 744)
   {   
        cout << "You have exceeded the number of hours of use in a month!\n";
        cout << "Please input hours again";
        cin >> hours; }
    if (hours < 0)
   {    
        cout << "The number of input hours in invalid!\n";
        cout << "Please input hours again";
        cin >> hours; }
    
       if(package == 'A')
   { price = 9.95;
     if(hours < 10)
   {   
     total = price;
 }
     else
     total = ((hours - 10) * 2) + price;
        cout<< "Bill = $ "<<total; 
        }


     if(package == 'B')
 {
     price = 14.95;
     if(hours < 20)
 {   
     total = price;
 }
     else
     total = ((hours - 20) * 1) + price;
        cout<< "Bill = $ "<<total; 
        }
    
     if(package == 'C')
 {
     price = 19.95;
     total = price;
        cout<< "Bill = $ "<<total; 
        }
    
    return 0;
}