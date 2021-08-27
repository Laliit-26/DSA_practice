#include<bits/stdc++.h>
using namespace std;

class node{
    public: int data;

    public:
        node *next;
        node(int data)
        {
            this->data = data;
            next = NULL;
    }
};

class linkedList{
public:
    node *head;
    linkedList()
    {
        head = NULL;
    }

    void push(int data){
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }

    void middle()
    {
        node *slow = head;
        node *fast = head;
        int p = 0;
        while(fast!=NULL || fast->next!=NULL)
        {
            cout << slow->data<<" ";
            slow = slow->next;
            fast = fast->next->next;
            p = slow->data;
        }
        cout<<p;
        cout <<slow->data;
    }
    void print()
    {
        node *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
    }
};

int main()
{
    linkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(8);
    ll.push(40);
    ll.push(25);
    ll.push(89);
    ll.print();

   ll.middle();
  
}