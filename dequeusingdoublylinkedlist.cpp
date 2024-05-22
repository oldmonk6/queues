#include<iostream>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node* prev;
    node(int val)
    {
        this->val=val;
        this->next= NULL;
        this->prev=NULL;
    }
};
class deque{
    public:
    node* head;
    node* tail;
    int size;
    deque()
    {
        head=tail=NULL;
        size=0;

    }
    void pushback(int val)
    {
        node* temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
            
        }
        size++;
    }
    void pushfront(int val)
    {
        node* temp=new node(val);
        if(size==0) head=tail=temp;
        else{
           temp->next=head;
           head->prev=temp;
           head=temp;
        }
        size++;
    }
    
    

    void display()
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
    void popfront()
    {
        if(size==0)cout<<"list is empty";
        if(size>=1)
        {
            head=head->next;
            if(head!=NULL)head->prev=NULL;
            if(head==NULL)tail=NULL;
            size--;
        }
    }
    void popback()
    {
        if(size==0)
        {
            cout<<"list is empty";
        }
        else if(size==1)
        {
            popfront();
            return;
        }
        node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
    }
    int front()
    {
        if(size==0)
        {
            cout<<"queue is empty"<<endl;
            return -1;

        }
        return head->val;
    }
    int back()
    {
        if(size==0)
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }
   
};
int main()
{
    deque list;
    list.pushback(10);
    list.pushfront(20);
    list.pushfront(30);
    list.display();
    list.pushfront(50);
    list.pushback(40);
    list.display();
    list.popback();
    list.popfront();
    list.display();
    


}
    


    
    
    


