/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main1.cpp
 * Author: madha
 *Created on January 15, 2019, 9:11 PM
 * Purpose: Serendipity Booksellers has a book club that awards points 
 * to its customers based on the number of books purchased each month. 
 * The points are awarded as follows:
 * • If a customer purchases 0 books, he or she earns 0 points.
 * • If a customer purchases 1 book, he or she earns 5 points.
 * • If a customer purchases 2 books, he or she earns 15 points.
 * • If a customer purchases 3 books, he or she earns 30 points.
 * • If a customer purchases 4 or more books, he or she earns 60 points.
 * Write a program that asks the user to enter the number of books 
 * that he or she has purchased this month 
 * and then displays the number of points awarded.
 */

#include <iostream>
using namespace std;

int main ()
{
    int book, point;
   
/*Book·Worm·Points↵
Input·the·number·of·books·purchased·this·month.↵
Books·purchased·=··9↵
Points·earned···=·60*/
    
cout << "Book Worm Points\n"; 
cout << "Input the number of books purchased this month.\n";
cin >> book;
cout << "Books purchased =  "<< book<< endl;
 
        
    if (book == 0) // Point rules based on amount of books purchased
    { point = 0;
    cout << "Points earned   = " << point; //Calculated Output
    }
    if (book == 1)
        { point = 5;
    cout << "Points earned   = " << point; //Calculated Output
    }
    if (book == 2)
        { point = 15;
    cout << "Points earned   = " << point; //Calculated Output
    }
    if (book == 3)
        { point = 30;
    cout << "Points earned   = " << point; //Calculated Output
    }
    if (book >= 4)
        { point = 60;
    cout << "Points earned   = " << point; //Calculated Output
    }
 
}