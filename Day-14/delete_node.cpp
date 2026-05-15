#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val= node->next->val;
        node->next= node->next->next;
    }
};
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    sol.deleteNode(head->next); // Deleting the node with value 2

    // Print the modified list
    ListNode* current = head;
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}