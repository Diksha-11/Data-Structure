#include<iostream>
using namespace std;
main()
{  int a[10],num,i,size,pos,item;
   cout<<"Enter the size of array:-"<<endl;
   cin>>size;
   cout<<"Enter the elements in the array:-"<<endl;
   for(i=0;i<size;i++)
   {   cin>>a[i];  }
   cout<<"Enter the position of the element that is to be deleted:-"<<endl;
   cin>>pos;
   if(pos<=0 || pos>size+1)
   {   cout<<"Invalid Number!"; }
   else{
     item=a[pos-1];
     for(i=pos-1; i<size-1; i++ )
     {
       a[i]=a[i+1];
     }
     size--;
     cout<<"Array after deletion would be:-"<<endl;
     for(i=0;i<size;i++)
     {   cout<<" "<<a[i]<<endl; }
     cout<<"Deleted Data is "<<item;
 }
}
