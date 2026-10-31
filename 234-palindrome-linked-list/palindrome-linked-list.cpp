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
    
    if(head==NULL || head->next==NULL){
        return true;
    }
 
        vector<int>arr;

        
        ListNode* temp=head;
        int i=0;

        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
            
        }
        int n=arr.size();

        int s=0;
        int e=n-1;

        while(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }

        temp=head;
        i=0;

        while(temp!=NULL){
            if(arr[i]!=temp->val){
                return false;
            }
            temp=temp->next;
            i++;

        }

        return true;

    }
};