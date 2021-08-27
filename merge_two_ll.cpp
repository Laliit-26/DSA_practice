#include <bits/stdc++.h>
using namespace std;


 Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {

        //         ListNode* l3=new ListNode(-200);
        //         ListNode* temp=l3;
        //    ListNode* temp1=l1;
        //         ListNode* temp2=l2;
        //         while(temp1!=NULL && temp2!=NULL)
        //         {
        //             if(temp1->val <= temp2->val)
        //             {
        //                 temp->next=new ListNode(temp1->val);
        //                 temp1=temp1->next;
        //             }
        //             else if(temp1->val > temp2->val)
        //             {
        //                 temp->next=new ListNode(temp2->val);
        //                 temp2=temp2->next;
        //             }
        //             temp=temp->next;

        //         }
        //         if(temp1!=NULL)
        //         {
        //             temp->next=temp1;
        //         }
        //         if(temp2!=NULL)
        //         {
        //             temp->next=temp2;
        //         }
        //         return l3->next;

        ListNode *l = new ListNode(-200);
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ;
        ListNode *dummy = l;
        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1->val >= temp2->val)
            {
                dummy->next = temp2;
                temp2 = temp2->next;
            }
            else
            {
                dummy->next = temp1;
                temp1 = temp1->next;
            }
            dummy = dummy->next;
        }
        if (temp1 != NULL)
        {
            dummy->next = temp1;
        }
        else
        {
            dummy->next = temp2;
        }

        return l->next;
    }
};

// ListNode *newnode =new ListNode(-200);
//       ListNode *newhead = newnode;
//       ListNode *ptr1 = l1;
//       ListNode *ptr2 = l2;
//       while(ptr1!=nullptr && ptr2!=nullptr){
//           if(ptr1->val <= ptr2->val){
//               newnode->next = ptr1;
//               ptr1 = ptr1->next;
//           }else if(ptr1->val > ptr2->val){
//               newnode->next = ptr2;
//               ptr2 = ptr2->next;
//           }
//           newnode = newnode->next;
//       }
//       if(ptr1==nullptr){
//           newnode->next = ptr2;
//       }else{
//           newnode->next = ptr1;
//       }
//       return newhead->next;