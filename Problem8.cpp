//Array sorter
//Take a few random generated numbers and return them in numerical order. After that, order names too.

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int rand();
int main()
{
    int n, i, a, v[100];
    
    cout<<"Give a number that represents how long you want your vector to be: ";
    cin>>n;
    cout<<endl;

    //Generating the vector
    for(i=0; i<n; i++) v[i]=rand()%100 + 1;

    cout<<"The randon generated numbers are: "<<endl;
    for(i=0; i<n; i++) cout<<v[i]<<endl;
    cout<<endl;

    //sorting algorithm
    for(i=0; i<n; i++) 
        {for(int j=0; j<n; j++)
            if (v[i]<v[j]) { a=v[i]; v[i]=v[j]; v[j]=a;}}
    
    cout<<"The random generated numbers ordered numerically: "<<endl;
    for(i=0; i<n; i++) cout<<v[i]<<endl;
}   