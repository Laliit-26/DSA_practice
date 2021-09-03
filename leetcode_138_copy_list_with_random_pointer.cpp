/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        Node *hd = head;

        map<Node *, Node *> mp;
        while (hd != NULL)
        {
            mp[hd] = new Node(hd->val);
            hd = hd->next;
        }
        hd = head;
        while (hd != NULL)
        {
            mp[hd]->next = mp[hd->next];
            mp[hd]->random = mp[hd->random];
            hd = hd->next;
        }
        return mp[head];
    }
};