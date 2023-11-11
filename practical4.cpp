#include <iostream>
#include <fstream> 
using namespace std;
 int main()
 {
ofstream outfile; 
 outfile.open("temp.txt", ios::app); 
 string s; 
 while(1)
 {
cout<<"enter 1-write a contents in file 0-exit "<<endl;
int ch;
 cout<<"enter choice :";
cin>>ch;
 if (ch==1)
 {
 cout<<"\n enter text :";
 cin.get();
 getline(cin,s);
 outfile<<s<<endl;
}
else if(ch==0)
{
cout<<"Exited "<<endl;
break;
}
else
{
 cout<<"enter correct choice..";
}
}
 outfile.close(); 
 ifstream infile; 

 infile.open("temp.txt", ios::in); 

cout<<" file contents ";
 while(!infile.eof()) 
{
 getline(infile,s);
 cout<<s<<endl;
 }
 return 0;
 }
