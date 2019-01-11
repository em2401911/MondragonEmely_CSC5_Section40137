/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: madha
 *
 * Created on January 9, 2019, 9:09 PM
 */
// A program displaying the volume of a cylindrical fuel tank
#include <iostream>
#include <cmath>
using namespace std;

main ()
{
    const double PI = 3.14159;
    double volume, radius, height;
    cout << "This program will tell you the volume of\n";
    cout << "a cylinder-shaped fuel tank.\n";
    cout << "How tall is the tank? ";
    cin >> height ;
    cout << "What is the radius of the tank? ";
    cin >> radius;
    volume = PI * pow(radius, 2.0)*height;
    cout << "The volume is " << volume << endl;
    return 0;
}