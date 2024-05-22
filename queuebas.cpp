#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q)
{
    int n=q.size();
    for(int i=1;i<=n;i++)
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x); 
    }
    cout<<endl;
}
void reverse(queue<int> & q)
{
    stack<int>st;
    while(q.size()>0)
    {
        int x=q.front();
        q.pop();
        st.push(x);

    }
    while(st.size()>0)
    {

        int x=st.top();
        st.pop();
        q.push(x);

    }

}
void removeeleeve(queue<int> & q)
{
    int n=q.size();
    for(int i=0;i<n;i++)
    {
        if(i%2==0)q.pop();
        else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }

}
void reversekelestrt(queue<int> &q,int k)
{
    int n=q.size();
     k=k%n;
    stack<int>st;
    for(int i=0;i<k;i++)
    {
        int x=q.front();
        q.pop();
        st.push(x);

    }
    while(st.size()>0)
    {
        int x=st.top();
        st.pop();
        q.push(x);
    }
     for(int i=0;i<n-k;i++)
    {
        int x=q.front();
        q.pop();
        q.push(x);

    }

}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    display(q);
  
    reversekelestrt(q,3);
    display(q);
}