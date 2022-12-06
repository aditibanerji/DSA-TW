#include<iostream>
#include<queue>
using namespace std;

struct node{

    char data;
    int freq;
    node* left= NULL;
    node *right=NULL;

    node(char x , int y): data(x),freq(y),left(NULL),right(NULL) {}
   

};
struct compare{
    bool operator()(node* l, node* r)
 
    {
        return (l->freq > r->freq);
    }
};

void display( struct node* pq, string str)
{
    if(pq)
    {
          if(pq->data!='$')
          {
               cout<<pq->data<<": "<<str<<endl;

          }
		   display(pq->left,str+'0');
    display(pq->right,str+'1');
          
    }
   
}

int main()
{
    priority_queue<node* , vector<node*> , compare>pq;

    int n;
    cout<<"enter no of variables"<<endl;
    cin>>n;
    char data[n];
    int freq[n];

    for(int i=0;i<n;i++)
    {
        cout<<"enter char and it's frequency"<<endl;
        cin>>data[i]>>freq[i];
    }

    for(int i=0;i<n;i++)
    {
        pq.push(new node(data[i],freq[i]));
    }

    while(pq.size()!=1)
    {
        node *l = pq.top();
        pq.pop();
        node *r = pq.top();
        pq.pop();

        

        node *t = new node('$',l->freq+r->freq);
        t->left=l;
        t->right=r;
        pq.push(t);

    }

   display(pq.top(),"");
}