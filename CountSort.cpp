#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*
            BEST,WORST,AVG= O(n+m)
*/
int getmax(int a[] , int n)
{
      int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }
   return max;

}
void countsort(int a[] , int n)
{
    int m = getmax(a,n);

  int count[m+1];

  for(int i=0;i<=m;i++)
  {
    count[i]=0;
  }

   int ans[n+1];

    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }

    for(int i=1;i<=m;i++)
    {
        count[i]+=count[i-1];
    }

    
    for (int i = n - 1; i >= 0; i--) {  
    ans[count[a[i]] - 1] = a[i];  
    count[a[i]]--; 
}  

   
   for(int i=0;i<n;i++)
   {
    a[i]=ans[i];
   }
  

}
int main()
{
    int n,x;
    cout<<"enter no of element"<<endl;
    cin>>n;

   int a[n];

    cout<<"enter "<<n<<" elements :"<<endl;
    for(int i=0;i<n;i++)
    {
          cin>>a[i];

    }

    countsort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}