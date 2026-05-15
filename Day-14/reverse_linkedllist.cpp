#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* nextNode = NULL;

    while (curr != NULL) {
        nextNode = curr->next; 
        curr->next = prev;     
        prev = curr;           
        curr = nextNode;       
    }

    return prev; 
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    ListNode* reversedHead = sol.reverseList(head);

    // Print the reversed list
    ListNode* current = reversedHead;
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}   