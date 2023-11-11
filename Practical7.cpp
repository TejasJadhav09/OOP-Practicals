#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string,int>state;

	state.insert(pair<string,int>("Maharshtra",9987634));
	state.insert(pair<string,int>("Goa",876533));
	state.insert(pair<string,int>("MP",876524));
	state.insert(pair<string,int>("UP",5783449785));
	state.insert(pair<string,int>("Gujrat",7648233));
	
	string s;
	int count=0;
	int pop;
	
	cout<<"Enter the State to be searched "<<endl;
	cin>>s;
	
	
	map<string,int>::iterator i;
	
	for(i=state.begin();i!=state.end();i++)
	{
		if(s==i->first)
		{
			count++;
			cout<<i->first<<" is Present and the population is "<<i->second<<endl;
			
		}
		
	}


		if(count>0)
		{
			cout<<"Found!!!"<<endl;
		}
		else
		{
			cout<<"Not Found!!"<<endl;
		}
	
	
	return 0;
}