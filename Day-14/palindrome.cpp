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

    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL)
        {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        if(head == NULL || head->next == NULL)
        {
            return true;
        }

        
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

       
        ListNode* secondHalf = reverse(slow);
        ListNode* firstHalf = head;

       
        while(secondHalf != NULL)
        {
            if(firstHalf->val != secondHalf->val)
            {
                return false;
            }

            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    Solution sol;
    bool result = sol.isPalindrome(head);

    if (result) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}