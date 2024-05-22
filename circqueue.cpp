#include<iostream>
#include<vector>
using namespace std;
class queue{
    public:
    vector<int> arr;
    int f;
    int b;
    int s;
    queue(int val){
        f=0;
        b=0;
        s=0;
        vector<int>v(val);
        arr=v;
    }
    void push(int x)
    {
        if(b==5){
            cout<<"queue is full"<<endl;
        }
        arr[b]=x;
        b++;
        s++;



    }
    void pop()
    {
        if(s==0)
        {
            cout<<"queue is empty"<<endl;
            return;
        }
        f++;
        s--;
    }
    int front()
    {
        if(s==0)
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back()
    {
        if(s==0)
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size()
    {
        return s;
    }
    bool empty()
    {
        if(s==0) return true;
        else return false;

    }
    void display()
    {
        for(int i=f;i<b;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    

};
int main()
{
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();

   
}