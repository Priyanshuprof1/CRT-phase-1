#include<iostream>
using namespace std;
class ListNode {
    public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                ListNode *start = head;
                
                while(start != slow){
                    start = start->next;
                    slow = slow->next;
                    
                }
                return start;
            }
            
            
        }
        return NULL;
        
    }
};
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Creating a cycle for testing
    head->next->next->next->next = head->next; // Cycle: 5 -> 2

    Solution sol;
    ListNode* cycleStart = sol.detectCycle(head);

    if (cycleStart != NULL) {
        cout << "The linked list has a cycle starting at node with value: " << cycleStart->val << endl;
    } else {
        cout << "The linked list does not have a cycle." << endl;
    }

    return 0;
}