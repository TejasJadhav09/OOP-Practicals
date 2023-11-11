#include <iostream>
using namespace std;
template<typename T>
void selection(T array[],int n)
{
int min;
for(int i=0;i<n;i++)
{
    min=i;
    for(int j=i+1;j<n;j++)
    {
        if(array[j]<array[min])
        min=j;

    }
    T temp=array[i];
    array[i]=array[min];
    array[min]=temp;

}
cout<<"Array after swaping"<<endl;
for(int i=0;i<n;i++)
{
    cout<<"array at index"<<i<<endl;
    cout<<array[i]<<","<<endl;

}
cout<<endl;
}
int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int array[n];
    float arr[n];
    cout<<"enter int array"<<endl;
  for(int i=0;i<n;i++)
  {
cin>>array[i];
  }
    
    cout<<"enter float array"<<endl;
  for(int i=0;i<n;i++)
  {
cin>>arr[i];
  }
  selection(array,n);
  selection(arr,n);
  return 0;
}