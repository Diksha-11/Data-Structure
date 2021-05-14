#include <iostream>
using namespace std;
main()
{
  int a[10],i,size;
  cout<<"Enter the size of the array"<<endl;
  cin>>size;
  cout<<"Enter the elments of the array"<<endl;
  for(i=0;i<size;i++)
  {  cin>>a[i] ; }
  cout<<"Element in array are:-"<<endl;
  for(i=0;i<size;i++)
  {    cout<<" "<<a[i]; }
}
  
