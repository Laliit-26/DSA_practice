#include <bits/stdc++.h>
using namespace std;

 class node
{
   public: int data;
   public: node *next;
       node(int data)
       {
           this->data = data;
           next = NULL;
    }
};

class linkedList
{
public: node *head;
    linkedList()
    {
        head = NULL;
    }

    void push(int data)
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
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

   public: void reverse()
    {
        node *prev = NULL;
        node *curr = head;
        node *nxt = NULL;

        while (curr != NULL)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }
};

int main()
{
    linkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    cout << "Given linked list";

    ll.print();

    ll.reverse();

    cout << "Reversed Linked list ";

    ll.print();
    return 0;
}