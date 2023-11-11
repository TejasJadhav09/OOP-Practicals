#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class items
{
 private:
 string name;
 int quantity;
 public:
 int code,cost;
 items(int a,string b,int c,int d)
 {
 code=a;
 name=b;
 cost=c;
 quantity=d;
 }
 void display()
 {

 cout<<"\n"<<code<<" "<<name<<" "<<cost<<" "<<quantity;
 }

};
bool compare(const items &i1, const items &i2)
{
return i1.cost < i2.cost;
}
int main()
{
 vector<items> v1;
 int ch;
 while(1)
 {
 //items i;
 cout<<"\n 1:Insert";
 cout<<"\n 2:Display";
 cout<<"\n 3:Search";
 cout<<"\n 4:Sort";
 cout<<"\n 5:Exit";
 cout<<"\n Enter your choice :";
 cin>>ch;
 if(ch==1)
 {
 //items i;
 string name;
 int code,quantity,cost;
 cout<<"\n Enter item details:";
 cout<<"\n Enter code :";
 cin>>code;
 cout<<"\n Enter name :";
 cin>>name;
 cout<<"\n Enter cost :";
 cin>>cost;
 cout<<"\n Enter quantity :";
 cin>>quantity;
 items item(code,name,cost,quantity);
 v1.push_back(item);
 }
 else if(ch==2)
 {
 cout<<"\n code | Name | Cost | Quantity :";
 for(int i=0;i<v1.size();i++)
 {
 v1[i].display();
 }
 }
 else if(ch==3)
 {
 int c;
 cout<<"\n Enter the item code to be search :";
 cin>>c;
 int count;
 for(int i=0;i<v1.size();i++)
 {
 if(v1[i].code==c)
 {
 v1[i].display();
 count=1;
 break;
 }
 }
 if(count==0)
 {
 cout<<"\n Item not found";
 }
 }
 else if(ch==4)
 {
 sort(v1.begin(),v1.end(),compare);
 cout<<"\n Sorted on Cost";
 for(int i=0;i<v1.size();i++)
 {
 v1[i].display();
 }
 }
 else if(ch==5)
 {
 break;
 }
 }

 return 0;
}