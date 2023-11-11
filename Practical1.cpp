#include<iostream>
using namespace std;
class complex
{ 
int real;
int img;
public:
complex();
friend istream & operator >> (istream &, complex &);
friend ostream & operator << (ostream &, const complex &);
complex operator + (complex); //addition
complex operator * (complex); //multiplication
};
complex::complex()
{
real = 0;
img = 0;
}

istream & operator >> (istream &, complex &i)
{
cin>>i.real>>i.img;
return cin;
}

ostream & operator << (ostream &, const complex &d)
{
cout << d.real <<" + "<<d.img <<"i"<<endl;
return cout;
}

complex complex::operator + (complex c1)
{
complex temp;
temp.real = real + c1.real;
temp.img = img + c1.img;
return temp;
}
complex complex::operator * (complex c2)
{
complex tmp;
tmp.real = real * c2.real- img * c2.img;
tmp.img = real * c2.img- img * c2.real;
return tmp;
}

int main()
{
complex c1,c2,c3,c4;
cout<< " enter real and imaginary part of the complex number 1 : \n";
cin>>c1;
cout<< " enter real and imaginary part of th complex number 2 : \n";
cin>>c2;

c3 = c1+c2;
cout<<"Addition = "<<c3<<endl;

c4 = c1*c2;
cout<<"Multiplication = "<<c4<<endl;
return 0;
}

