# include <iostream>
using namespace std;
main()
{
  int a[10],size,i,pos,num;
  cout<<"Enter the size of the array"<<endl;
  cin>>size;
  cout<<"Enter the values into the array"<<endl;
  for(i=0;i<size;i++)
  { cin>>a[i]; }
  cout<<"Enter the number that is to be insert"<<endl;
  cin>>num;
  cout<<"Enter Position where you want to insert the value"<<endl;
  cin>>pos;
  if(pos<=0||pos>size+1)
  { cout<<"Invalid Position";}
  else{
    for(i=size-1;i>=pos-1;i--)
    {   a[i+1]=a[i]; }
    a[pos-1]=num;
    size++;
    cout<<"Now elements of array are:-"<<endl;
    for(i=0;i<size;i++)
    {  cout<<" "<<a[i]; }
    }
}
    
  
