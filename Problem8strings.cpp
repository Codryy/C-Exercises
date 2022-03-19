//Take from a text file names in a random order and sort them from A to Z
//We are going to use ~vector~ library so that we can store the data from "Nume.txt" file in a vector
//We are going to use the ~algorithm~ library so that we can use the function "sort(arg1, arg2)" to sort the names from A to Z

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

//We use this function to create our vector with the names from "Nume.txt"
void read(vector<string> &v)
{
    ifstream nume;
    nume.open("Nume.txt");
    string line;
    while (getline (nume, line)) { v.push_back(line);}
    nume.close();
}

int main()
{   
    vector<string> v;
    read(v);
    cout<<"The document contains: "<<endl;
    for(int i=0; i<v.size();i++) { cout<<v[i]<<endl; sort(v.begin(), v.end()); }
    cout<<endl;
    cout<<"After sort: "<<endl;
    for(int i=0; i<v.size();i++) {cout<<v[i]<<endl;}
    cout<<endl;
}   
