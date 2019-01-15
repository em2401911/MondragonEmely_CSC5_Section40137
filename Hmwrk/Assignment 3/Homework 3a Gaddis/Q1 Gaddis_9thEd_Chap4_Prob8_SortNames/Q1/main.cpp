/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 14, 2019, 2:24 PM
 */

/* 
 * File:   main.cpp
 * Author: Emely Mondragon
 * Created on January 2, 2019, 12:36 PM
 * Purpose: Write a program that asks the user to enter three names, 
 * and then displays the names sorted in alphabetical order. 
 * Assume that none of the names are the same. For example, if the user entered
 *  Charlie, Leslie, and Andy the program would display:
 * Andy
 * Charlie
 * Leslie*/

#include <iostream>
#include <string>
using namespace std;

int main ()
 {

string name1, name2, name3;

cout << "Sorting Names\n";
// User will input three names
cout << "Input 3 names" << endl;

getline(cin, name1) ; //Charly
getline(cin, name2); // Leslie
getline(cin, name3); // Andy

/* 6 possible combinations of the inputs (3!)

1 2 3 
1 3 2
2 3 1
2 1 3
3 1 2
3 2 1
*/


if (name1 < name2 && name2 < name3) 
cout<<name1<<endl<<name2<<endl<<name3; // 1 2 3
	
if (name1 < name3 && name3 < name2)
cout<<name1<<endl<<name3<<endl<<name2; // 1 3 2
	
if (name2 < name3 && name3 < name1)
cout<<name2<<endl<<name3<<endl<<name1; // 2 3 1
	
if (name2 < name1 && name1 < name3)
cout<<name2<<endl<<name1<<endl<<name3; // 2 1 3
	
if (name3 < name1 && name1 < name2)
cout<<name3<<endl<<name1<<endl<<name2; // 3 1 2
	
if (name3 < name2 && name2 < name1)
cout<<name3<<endl<<name2<<endl<<name1; // 3 2 1

return 0;
} 