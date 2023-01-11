#include<iostream>
using namespace std;

/* 
   ALGO - 1) shift n-1 disk from A to B using C
          2) shift Last disk from A to C
          3) shift n-1 disk from B to C using A

    BEST,AVG,WORST = O(2^n)
*/
void tower(int n , char from_rod , char to_rod , char aux_rod)
{
    if(n==0)
    {
        return;
    }
    tower(n-1,from_rod,aux_rod,to_rod);
    cout<<"Move disk"<<n<<" from "<<from_rod<<" to "<<to_rod<<endl;
    tower(n-1,aux_rod,to_rod,from_rod);

}
int main()
{
    int n;
    cout<<"enter no of disks\n";
    cin>>n;
    
    tower(n,'A','C','B');

}