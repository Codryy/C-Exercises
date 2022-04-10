#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void read1(vector<string> &a)
{
    ifstream numere;
    numere.open("Numbers.txt");
    string line;
    while (getline (numere, line)) { a.push_back(line);}
    numere.close();
}

int main()
{   int p;
    string ask;
    vector<string> a;
    read1(a);
    cout<<"The data is: "<<endl;
    for(int i=0;i<a.size();i++) { cout<<a[i]<<" ";}
    cout<<endl<<endl;
    for(int i=0;i<a.size();i++) 
        for(int j=i+1;j<a.size();j++) {if (a[i]==a[j]) p=p+1;}
    cout<<"In this document there are "<<p<<" duplicates!"<<endl<<endl;

    cout<<"Do you want to erase the duplicates?"<<endl<<endl;
    cin>>ask;
    cout<<endl;
    if(ask=="Yes" || ask=="Y" || ask=="yes" || ask=="y")
        { for(int i=0;i<a.size();i++) 
           for(int j=i+1;j<a.size();j++) if(a[i]==a[j]) a.erase(a.begin()+j); 
        cout<<"The new data is: "<<endl<<endl;
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";}
    else if(ask=="No" || ask=="N" || ask=="no" || ask=="n") cout<<"You did not chose to erase the duplicates!"<<endl;
        else cout<<"You did not chose any option!"<<endl;
    cout<<endl;
}
