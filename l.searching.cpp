#include<iostream>
using namespace std;
main()
{ int a[10],i,n,data,n1=0;
 cout<<"Enter the Size of array"<<endl;
 cin>>n;
 cout<<"Enter the values in the array"<<endl;
 for(i=0;i<n;i++)
 {  cin>>a[i]; }
 cout<<"Enter the number that is to be search"<<endl;
 cin>>data;
 for(i=0;i<n;i++)
 {
   if(a[i]==data)
   {  cout<<"Element found at index:-"<<i<<endl;
      n1++;  }
   }
   if(i==n)
   {  cout<<"Element is not found"<<endl; 
       cout<<"Required no. appeared "<<n1<<" times in the array!" ;
   }
}
   
 
