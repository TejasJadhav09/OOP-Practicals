#include<iostream>
#include <string.h>
using namespace std;
  class student
  {
   char name[100];
   int rollno;
   char cls[10];
   char DOB[10];
   char  BG[10];
   char CA[10];
   long Tno;
   long DLno;
    public: 
      void accept()
    {
     cout<<"enter name :  "<<endl;
     cin>>name;
     cout<<"enter rollno: "<<endl;
     cin>>rollno;
     cout<<"enter class1 :  "<<endl;
     cin>>cls;
     cout<<"enter DOB :  "<<endl;
     cin>>DOB;
     cout<<"enter BG:  "<<endl;
     cin>>BG;
     cout<<"enter CA :  "<<endl;
     cin>>CA;
     cout<<"enter Tno :  "<<endl;
     cin>>Tno;
     cout<<"enter DLno :  "<<endl;
     cin>>DLno;
     }
     void display()
     {
      cout<<"student name "<<name<<endl;;
      cout<<"student rollno "<<rollno<<endl;;
      cout<<"student class1"<<cls<<endl;;
      cout<<"student DOB "<<DOB<<endl;;
      cout<<"student BG "<<BG<<endl;;
      cout<<"student CA"<<CA<<endl;;
      cout<<"student Tno "<<Tno<<endl;;
      cout<<"student DLno "<<DLno<<endl;
     }};
  int main()
  {
	  student obj;
	  obj.accept();
      obj.display();      
  }