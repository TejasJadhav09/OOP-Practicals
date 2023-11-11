#include <iostream>
using namespace std;
class publication 
{
public:
string title;
float price;

void setdata(){
cout<<"Enter title of book"<<endl;
cin>>title;
 cout<<"Enter price of book"<<endl;
cin>>price;
}
 
};
class book:public publication
{
public:
int pagecount;

void setdata1(){
cout<<"Enter number of pages of book"<<endl;
cin>>pagecount;
}
void display1()
{
cout<<"title of book is"<<title<<endl;
cout<<"price of book is"<<price<<endl;
cout<<" number of pages of book is"<<pagecount<<endl;
}
};
class tape:public publication
{
public:
int playingtime;

void setdata2()
{
cout<<"Enter play time of book"<<endl;
cin>>playingtime;
}
void display2()
{
cout<<" playing time of book is"<<endl;
}
};
int main()
{
book b;
b.setdata();
b.setdata1();
b.display1();
tape t;
t.setdata2();
t.display2();
return 0;
}















































































