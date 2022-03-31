#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

//Random number generating funtion

int rand();

int main()
{
    int n,i,j;
    float m[100][100],v[100],ma;

    do{cout<<"Give a number (>0) that represents how many numbers you want to make the average for:"<<endl;
       cin>>n;}
     while (n<=0);

    /*for (i=0; i<n; i++) //function for with the purpose of creating an array of numbers
        { v[i]=rand()/2.314;
          cout<<v[i]<<endl;
          ma=ma+v[i];
        }
    cout<<endl<<"The average of the random generated numbers is: "<<ma/n<<endl;*/

    //Creating the matrix
    for(i=0; i<n; i++)
        for (j=0; j<n; j++)
            { 
                m[i][j]=rand()/2.314;
                ma=ma+m[i][j];
            }
    //Output the matrix
    for(i=0; i<n; i++)
       { cout<<endl;
        for (j=0; j<n; j++)
             cout<<m[i][j]<<" ";}

 cout<<endl<<endl;


    //Function to calculate the average of numbers on a row
    for(i=0; i<n; i++)
        { ma=0;
         for (j=0; j<n; j++)
         {ma=ma+m[i][j];}
        cout<<"The average of the random generated numbers for row "<<i+1<<" is: "<<ma/n<<endl;}

 cout<<endl;
    
    //Function to calculate the average number on a column
    for(j=0; j<n; j++)
        { ma=0;
         for (i=0; i<n; i++)
         {ma=ma+m[i][j];}
        cout<<"The average of the random generated numbers for column "<<j+1<<" is: "<<ma/n<<endl;}
    return 0;
}
