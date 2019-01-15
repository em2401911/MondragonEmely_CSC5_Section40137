/*An Internet service provider has three different subscription packages for its customers:

Package A: For $9.95 per month 10 hours of access are provided. Additional hours

are $2.00 per hour.

Package B: For $14.95 per month 20 hours of access are provided. Additional hours

are $1.00 per hour.

Package C: For $19.95 per month unlimited access is provided.

Write a program that calculates a customer’s monthly bill. It should ask which package

the customer has purchased and how many hours were used. It should then display

the total amount due.

Input Validation: Be sure the user only selects package A, B, or C. Also, the number

of hours used in a month cannot exceed 744.*/

#  #include<iostream>
#include<iomanip>

using namespace std;

int main()
{
 double hours, total, limit;
 char package;

 cout << "Which package do you have A, B, or C? : ";
 package = cin.get();

 if(package == 'A' || package == 'B' || package == 'C')
 {

 cout << "\nHow many hours were used: ";
 cin >> hours;

 if(hours > 744 || hours < 0)
 {
 cout << "Hours cannot be greater than 744 or less than 0!! \n\n"
  << "Enter hours again: ";
 cin >> hours;
 }

 if(package == 'A')
 {
 limit = 9.95;
 if(hours < 10)
 {   
 total = limit;
 }
 else
 total = ((hours - 10) * 2) + limit;

 cout << "The amount due is: $" << total << "\n\n";
 }

 if(package == 'B')
 {
 limit = 14.95;
 if(hours < 20)
 total = limit;
 else
 total = ((hours - 20) * 1) + limit;

 cout << "The amount due is: $" << total << "\n\n";
 }

 if(package == 'C')
 {
 limit = 19.95;
 total = limit;
 cout << "The amount due is: $" << total << "\n\n";
 }
 }
 else
 cout << "You did not enter A, B, or C!! \n\n"
      << "Please run the program again!! \n\n";

 system("pause");

 return 0;