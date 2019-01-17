/* 
 * File:   main.cpp
 * Author: madha
 *
 * Created on January 13, 2019, 9:48 PM
 */

/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Write a program to score the paper-rock-scissor game. 
 * Each of two users types in either P, R, or S. 
 * The program then announces the winner as well as the basis 
 * for determining the winner: Paper covers rock, Rock breaks scissors, 
 * Scissors cut paper, or Nobody wins. Be sure to allow the users 
 * to use lowercase as well as uppercase letters.
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main() 
{
    //Set the random number seed
    
    char r, p, s, R, P, S, p1, p2;//Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    cout << "Rock Paper Scissors Game\n";
    cout << "Input Player 1 and Player 2 Choices\n";
    cin >> p1;
    cin >> p2;
    
    // There are 12 possible combinations 
   
    if (p1 == 'P' && p2 == 'P');
    {  cout << "It's a tie."; }
    
       if (p1 == r && p2 == r);
    {  cout << "It's a tie."; }
       
     if (p1 == p && p2 == p);
    {  cout << "It's a tie."; }
     
      if (p1 == s && p2 == s);
    {  cout << "It's a tie."; }
    
    if ( p1 == 'P' && p2 == R );
    { cout << "Paper covers rock."; } 
    
    if ( p1 == 'P'  && p2 == S );
    { cout << "Scissors cuts paper."; } 
    
    if ( p1 == R && p2 == 'P'  );
    { cout << "Paper covers rock."; } 
    
    if ( p1 == R && p2 == S );
    { cout << "Rock breaks scissors."; } 
    
    if ( p1 == S && p2 == 'P' );
    { cout << "Scissors cuts paper."; } 
    
    if ( p1 == S && p2 == R );
    { cout << "Rock breaks scissors."; } 
    
    if ( p1 == p && p2 == r );
    { cout << "Paper covers rock."; } 
    
    if ( p1 == p && p2 == s );
    { cout << "Scissors cuts paper."; } 
    
    if ( p1 == r && p2 == p );
    { cout << "Paper covers rock."; } 
    
    if ( p1 == r && p2 == s );
    { cout << "Rock breaks scissors."; } 
    
    if ( p1 == s && p2 == p );
    { cout << "Scissors cuts paper."; }
    
    if ( p1 == s && p2 == r );
    { cout << "Rock breaks scissors."; } 
    
     if (p1 == R && p2 == R);
    {  cout << "It's a tie."; }
     
      if (p1 == S && p2 == S);
    {  cout << "It's a tie."; }
      
   
            
            
            
            
     
              
            
            
           
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
