#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        int count;
        while(fast  && fast->next){
            slow = slow->next;
            fast = fast->next->next;

        }
        return slow;
    }
};
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    ListNode* middle = sol.middleNode(head);

    // Print the middle node value
    if (middle != NULL) {
        cout << "Middle node value: " << middle->val << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}