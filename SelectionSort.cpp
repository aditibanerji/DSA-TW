#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
  BEST,AVG,WORST = O(N^2)

*/
int main()
{
    int n,x;
    cout<<"enter no of elements\n";
    cin>>n;

    vector<int>a;

    cout<<"enter "<<n<<" elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    int min,pos;

    for(int i=0;i<n;i++)
    {
        pos=i;
        min=a[i];

        for(int j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            {
                pos=j;
            }
        }
        if(pos!=i)
        {
            swap(min,a[pos]);
        }
    }

    cout<<"after sorting :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}