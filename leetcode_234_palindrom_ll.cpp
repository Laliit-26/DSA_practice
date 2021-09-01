/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // ListNode * temp=head;
        // stack<int>s;
        // while(temp!=NULL)
        // {
        //     s.push(temp->val);
        //     temp=temp->next;
        // }
        // while(head!=NULL)
        // {
        //     if(head->val!=s.top())
        //     {
        //         return false;
        //     }
        //     s.pop();
        //     head=head->next;
        // }
        // return true;
//         ListNode* rev=head;
//         ListNode* dummy=NULL;
//         ListNode* nxt;
//         while(rev)
//         {
//             nxt=rev->next;
//             rev->next=dummy;
//             dummy=rev;
//             rev=nxt;
//         }
      
//   while(head)
//   {
//       if(head->val!=dummy->val)
//           return false;
//       head=head->next;
//       dummy=dummy->next;
//   }
//         return true;
        
        stack<int>s;
        ListNode* temp=head;
        bool flag=true;
        while(temp!=NULL)
        {
        s.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(!s.empty())
        {
            if(temp->val!=s.top())
            {
                flag=false;
            }
            s.pop();
            temp=temp->next;
        }
        return flag;
    }
};