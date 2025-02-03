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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;

        ListNode* temp=head;
        
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
            
        }

        if(k%size==0) return head;
        k=k%size;

        ListNode* front=head;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }

        temp->next=front;
        int rotateList=size-k;

        while(temp!=NULL && rotateList>0){
            temp=temp->next;
            rotateList--;
        }
        
        if(temp->next!=NULL) head=temp->next;
        temp->next=NULL;
        
        return head;
       
    }

    
};