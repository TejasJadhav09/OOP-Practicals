#include <iostream>
#include <string>
using namespace std;


class publication{
  string title;
  float  price;
  public:
  
  void get(){
   cout<<"Enter Title of Book:"<<endl;
   cin>>title;
   cout<<"Enter Price of Book:"<<endl;
   cin>>price;
   }
  void display(){
  
   cout<<" Title:"<<title;
   cout<<" Price:"<<price;
   }
 };
 
class book: public publication{
 int page_count;
 
 public:

 
  
 void add_book(){
 publication::get();
 
 
 
 
  
   
  
  cout<<"Enter Page Count:"<<endl;
  cin>>page_count;
  if(page_count<=0){
    cout<<"Page does Not Exist"<<endl;
    }
  
  }
 
  
  
  void display_book(){
    publication::display();
  
  
    
    cout<<"Page Count:"<<page_count;
   }
  
  
  }; 

class tape:public publication{
 float playing_time;
  
 
 public:
 
 
 
 void add_tape(){
 publication::get();


 
 
 
  cout<<"Enter Playing time:"<<endl;
  cin>>playing_time;
  if(playing_time<=0){
  cout<<"playing time does not exist";
  }
  }
 
  
  void display_tape(){
  publication::display();
  
  
  
  
    cout<<"Playing time:"<<playing_time;
   }
    
};

int main(){
book obj1;
tape obj2;
int choice;
while(1){
cout<<"enter 1 for add book"<<endl;
cout<<"enter 2 for display book"<<endl;
cout<<"enter 3 for add tape"<<endl;
cout<<"enter 4 for display tape"<<endl;
cout<<" "<<endl;
cout<<"Enter Your Choice:"<<endl;
cin>>choice;

switch(choice){
  case 1:
     
     obj1.add_book();
     break;
  case 2:
       
     obj1.display_book();
     break;
  case 3:
     
     obj2.add_tape();
     break;
  case 4:
     
     obj2.display_tape();
     break;  
     
    }
   }          
return 0;
}















































































