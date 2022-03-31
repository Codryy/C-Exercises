#include <iostream>
#include <string>
using namespace std;

//function meters to feet
void mtof() {
    float meter=0, feet=0;
    
    cout<<"Give the meter value: "<<endl;
    cin>>meter;
    cout<<endl;
    cout<<"Converting meters into feet: "<<endl<<endl;

    feet=meter*3.2808399;

    cout<<meter<<" meters is "<<feet<<" feet"<<endl<<endl;
};

//function kilometers to miles
void ktom() {
    float kilometer=0, mile=0;
    
    cout<<"Give the kilometer value: "<<endl;
    cin>>kilometer;

    cout<<"Converting kilometers into miles: "<<endl;

    mile=kilometer*0.621371192;

    cout<<kilometer<<" kilometer is "<<mile<<" miles"<<endl;
};

//function feet to meter
void ftom() {
    float meter=0, feet=0;
    
    cout<<"Give the feet value: "<<endl;
    cin>>feet;
    cout<<endl;
    cout<<"Converting feet into meters: "<<endl<<endl;

    meter=feet/3.2808399;

    cout<<feet<<" feet is "<<meter<<" meters"<<endl<<endl;
};

//function miles to kilometers
void mtok() {
    float kilometer=0, mile=0;
    
    cout<<"Give the miles value: "<<endl;
    cin>>mile;

    cout<<"Converting miles into kilometers: "<<endl;

    kilometer=mile/0.621371192;

    cout<<mile<<" miles is "<<kilometer<<" kilometers"<<endl;
};

int main()
{   string n;
    cout<<"Do you want to convert meters to feet?"<<endl;
    cin>>n;
    if (n=="yes" || n=="Yes" || n=="y" || n=="Y") mtof(); //apeleaza functia meters to feet
        else if (n=="no" || n=="No" || n=="n" || n=="N") 
             { cout<<"Do you want to convert kilometers to miles?"<<endl;
               cin>>n;
               if (n=="yes" || n=="Yes" || n=="y" || n=="Y") ktom(); //apeleaza functia kilometers to miles
                    else if (n=="no" || n=="No" || n=="n" || n=="N") 
                         { cout<<"Do you want to convert feet to meters?"<<endl;
                           cin>>n;
                           if (n=="yes" || n=="Yes" || n=="y" || n=="Y") ftom(); //apeleaza functia feet to meters
                                 else if (n=="no" || n=="No" || n=="n" || n=="N") 
                                      { cout<<"Do you want to convert miles to kilometers?"<<endl;
                                        cin>>n;
                                        if (n=="yes" || n=="Yes" || n=="y" || n=="Y") mtok(); //apeleaza functia miles to kilometers
                                             else { cout<<"You did not chose any converter"<<endl; return 0;}}
                                     else { cout<<"You did not chose any converter"<<endl; return 0; }}
                     else { cout<<"You did not chose any converter"<<endl; return 0; }}
            else { cout<<"You did not chose any converter"<<endl; return 0; }

}
