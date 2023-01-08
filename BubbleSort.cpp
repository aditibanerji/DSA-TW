#include<iostream>
#include<vector>
using namespace std;

/* 
   BEST,AVG,WORST = O(N^2)

*/
int main()
{
    int n,x;
    cout<<"enter number of elements in array\n";
    cin>>n;

    vector<int>a;    

    cout<<"enter "<<n<<" elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<n-1-i;j++)
       {
        if(a[j]>a[j+1])
        {
            int temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
       }
    }

cout<<"After Sorting : \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}