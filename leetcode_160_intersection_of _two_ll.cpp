/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *listA, ListNode *listB)
    {
                ListNode* temp=headA;
                unordered_set<ListNode*>us;
                while(temp)
                {
                    us.insert(temp);
                    temp=temp->next;
                }

                ListNode* temp2=headB;
                while(temp2)
                {
                    if(us.find(temp2)!=us.end())
                        return temp2;
                    temp2=temp2->next;
                }
                return NULL;

        //     ListNode* temp1=listA;
        //         set<ListNode*>st;
        //         while(temp1!=NULL)
        //         {
        //             st.insert(temp1);
        //             temp1=temp1->next;
        //         }
        //         ListNode* ans=NULL;
        //   set<ListNode*>:: iterator itr;
        //         while(listB!=NULL)
        //         {
        //             for(itr=st.begin();itr!=st.end();itr++)
        //             {
        //                 if(listB==*itr)
        //                 {
        //                     ans=listB;
        //                     break;

        //                 }
        //             }
        //         }

        // return  ans;

        //  ListNode* h1=listA;
        //   ListNode* h2=listB;
        //   int cnt1=0;
        //   int cnt2=0;
        //   while(h1!=NULL)
        //   {
        //       cnt1++;
        //       h1=h1->next;
        //   }
        //   while(h2!=NULL)
        //   {
        //       cnt2++;
        //       h2=h2->next;
        //   }
        //   h1=listA;
        //   h2=listB;
        //   int p=abs(cnt1-cnt2);
        //   cout<<cnt1<<cnt2;
        //   if(cnt2>cnt1)
        //   {
        //       while(p--)
        //       {
        //           h2=h2->next;
        //       }
        //   }
        //   else{
        //        while(p--)
        //       {
        //           h1=h1->next;
        //       }
        //   }
        //   cout<<h1->val;
        //   cout<<h2->val;
        //   while(h1!=h2)
        //   {  if(h1!=NULL || h2!=NULL)
        //       h1=h1->next;
        //       h2=h2->next;
        //   }
        // if(h1==NULL)
        // {
        //     return NULL;
        // }
        //   else{
        //       return h1;
        //   }
    //     if (listA == NULL || listB == NULL)
    //         return NULL;
    //     ListNode *h1 = listA;
    //     ListNode *h2 = listB;
    //     while (h1 != h2)
    //     {

    //         if (h1 == NULL)
    //         {
    //             h1 = listB;
    //         }
    //         if (h2 == NULL)
    //         {
    //             h2 = listA;
    //         }
    //         h1 = h1->next;
    //         h2 = h2->next;
    //     }

    //     return h2;
    // }
};