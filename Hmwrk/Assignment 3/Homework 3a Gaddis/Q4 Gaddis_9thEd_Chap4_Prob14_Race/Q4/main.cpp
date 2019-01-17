/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Emely Mondragon
 *
 * Created on January 15, 2019, 8:00 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Declare variables
    const int SIZE=15;
    char name1[SIZE],name2[SIZE],name3[SIZE];
    unsigned short time1,time2,time3;
    
    //Input the data
    cout<<"Race Ranking Program\n";
    cout<<"Input 3 Runners\n";
    cout<<"Their names, then their times"<<endl;
    cin>>name1>>time1;
    cin>>name2>>time2;
    cin>>name3>>time3;
    
    //Output as test
    if(time1<time2&&time2<time3){
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3;
    }else if(time1<time3&&time3<time2){
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2;
    }else if(time2<time1&&time1<time3){
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3;
    }else if(time2<time3&&time3<time1){
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1;
    }else if(time3<time1&&time1<time2){
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2;
    }else{
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1;    
    }
    

    return 0;
}

