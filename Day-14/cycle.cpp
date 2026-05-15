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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }
            
        }
        return false;
        
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
    bool result = sol.hasCycle(head);

    if (result) {
        cout << "The linked list has a cycle." << endl;
    } else {
        cout << "The linked list does not have a cycle." << endl;
    }

    return 0;
}
