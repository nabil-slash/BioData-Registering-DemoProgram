//BioData Resgistering Program

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char n[31],e[30],p[30];
    cout<<"\tEnter Your Name : ";
    cin.getline(n,31);
    cout<<"\n\tEnter Your E-mail : ";
    cin>>e;
    cout<<"\n\tEnter Your Phone Number : ";
    cin>>p;
    cout<<"\n\t---------------------------------";
    cout<<"\n\n\tName : "<<n<<endl;
    cout<<"\n\tE-mail : "<<e<<endl;
    cout<<"\n\tPhone Number : "<<p<<endl;
    cout<<"\n\n\t--------------------------------"<<endl;
    cout<<"\tYour Bio Data Successfully Registered"<<endl;
    cout<<"\t-----------------------------------------";

    getch();
}
