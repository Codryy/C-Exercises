//Problem 4 remastered
//Make a program that converts Celsius to Fahrenheit or Kelvin and vice-versa

#include <iostream>
#include <string>
using namespace std;

//Function Celsius to Fahrenheit
void ctof() {
    float celsius=0, fahrenheit=0;
    
    cout<<"Give the Celsius value: "<<endl;
    cin>>celsius;
    cout<<endl;
    cout<<"Converting Celsius into Fahrenheit: "<<endl<<endl;

    fahrenheit=celsius*1.8+32;

    cout<<celsius<<" Celsius is "<<fahrenheit<<" Fahrenheit"<<endl<<endl;
};

//Function Celsius to Kelvin

void ctok() {
    float celsius=0, kelvin=0;
    
    cout<<"Give the Celsius value: "<<endl;
    cin>>celsius;
    cout<<endl;
    cout<<"Converting Celsius into Kelvin: "<<endl<<endl;

    kelvin=celsius+273.15;

    cout<<celsius<<" Celsius is "<<kelvin<<" Kelvin"<<endl<<endl;
};

//Function Fahrenheit to Celsius
void ftoc() {
    float celsius=0, fahrenheit=0;
    
    cout<<"Give the Fahrenheit value: "<<endl;
    cin>>fahrenheit;
    cout<<endl;
    cout<<"Converting Fahrenheit into Celsius: "<<endl<<endl;

    celsius=(fahrenheit-32)/1.8;

    cout<<fahrenheit<<" Fahrenheit is "<<celsius<<" Celsius"<<endl<<endl;
};

//Function Fahrenheit to Kelvin

void ftok() {
    float fahrenheit=0, kelvin=0;
    
    cout<<"Give the Fahrenheit value: "<<endl;
    cin>>fahrenheit;
    cout<<endl;
    cout<<"Converting Fahrenheit into Kelvin: "<<endl<<endl;

    kelvin=fahrenheit+255.372222;

    cout<<fahrenheit<<" Fahrenheit is "<<kelvin<<" Kelvin"<<endl<<endl;
};

//Function Kelvin to Celsius
void ktoc() {
    float celsius=0, kelvin=0;
    
    cout<<"Give the Kelvin value: "<<endl;
    cin>>kelvin;
    cout<<endl;
    cout<<"Converting Kelvin into Celsius: "<<endl<<endl;

    celsius=kelvin-273.15;

    cout<<kelvin<<" Kelvin is "<<celsius<<" Celsius"<<endl<<endl;
};

//Function Kelvin to Fahrenheit

void ktof() {
    float fahrenheit=0, kelvin=0;
    
    cout<<"Give the Fahrenheit value: "<<endl;
    cin>>kelvin;
    cout<<endl;
    cout<<"Converting Kelvin into Fahrenheit: "<<endl<<endl;

    fahrenheit=kelvin-255.372222;

    cout<<kelvin<<" Kelvin is "<<fahrenheit<<" Fahrenheit"<<endl<<endl;
};

int main()
{
    string n;
    cout<<"Do you want to convert Celsius to Fahrenheit?"<<endl;
    cin>>n;
    if (n=="Yes" || n=="yes" || n=="y" || n=="Y") ctof(); //apeleaza functia Celsius to Fahrenheit
        else if (n=="No" || n=="no" || n=="N" || n=="n") 
           { cout<<"Do you want to convert Celsius to Kelvin?"<<endl;
             cin>>n;
             if (n=="Yes" || n=="yes" || n=="y" || n=="Y") ctok(); //apeleaza functia Celsius to Kelvin
                else if (n=="No" || n=="no" || n=="N" || n=="n") 
                    { cout<<"Do you want to convert Fahrenheit to Celsius?"<<endl;
                      cin>>n;
                      if (n=="Yes" || n=="yes" || n=="y" || n=="Y") ftoc(); //apeleaza functia Fahrenheit to Celsius
                         else if (n=="No" || n=="no" || n=="N" || n=="n")
                            { cout<<"Do you want to convert Fahrenheit to Kelvin?"<<endl;
                              cin>>n;
                              if (n=="Yes" || n=="yes" || n=="y" || n=="Y") ftok(); //apeleaza functia Fahrenheit to Kelvin
                                 else if (n=="No" || n=="no" || n=="N" || n=="n")
                                    { cout<<"Do you want to convert Kelvin to Celsius?"<<endl;
                                      cin>>n;
                                      if (n=="Yes" || n=="yes" || n=="y" || n=="Y") ktoc(); //apeleaza functia Kelvin to Celsius
                                         else if (n=="No" || n=="no" || n=="N" || n=="n")
                                            { cout<<"Do you want to convert Kelvin to Fahrenheit?"<<endl;
                                              cin>>n;
                                              if (n=="Yes" || n=="yes" || n=="y" || n=="Y") ktof(); //apeleaza functia Kelvin to Fahrenheit
                                                 else if (n=="No" || n=="no" || n=="N" || n=="n") 
                                                    {cout<<"You did not chose any converter"<<endl; return 0;}}
                                         else {cout<<"You did not chose any converter"<<endl; return 0;}}
                                 else {cout<<"You did not chose any converter"<<endl; return 0;}}
                             else {cout<<"You did not chose any converter"<<endl; return 0;}}
                     else {cout<<"You did not chose any converter"<<endl; return 0;}}
             else {cout<<"You did not chose any converter"<<endl; return 0;}
};