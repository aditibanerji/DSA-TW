#include<iostream>
using namespace std;
/*
       BEST,AVG,WORST = O(nlogn)

*/
void heapify(int a[] , int n , int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && a[left]>a[largest])
    {
        largest=left;
    }
    if(right<n && a[right]>a[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}
void heapsort(int a[] , int n)
{
   
   for(int i=n/2-1;i>=0;i--)
   {
       heapify(a,n,i);      //creating max heap
   }

   for(int i=n-1;i>=0;i--)
   {
      swap(a[0],a[i]);          // extract max element from root and swap it with last element of heap
      heapify(a,i,0);           //Again create max heap

   }

}
int main()
{
    int n;
    cout<<"enter no of elements"<<endl;
    cin>>n;

    int a[n];

    cout<<"enter "<<n<<" elements in array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    heapsort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}