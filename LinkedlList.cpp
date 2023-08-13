
#include <bits/stdc++.h>
using namespace std ;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val = 0, ListNode* next = nullptr) : val(val), next(next) {}
};

// Helper function to create a linked list from an array
ListNode* createLinkedList(vector<int>& values) {
    ListNode* dummy = new ListNode();
    ListNode* current = dummy;
    
    for (int val : values) {
        current->next = new ListNode(val);
        current = current->next;
    }
    
    return dummy->next;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

// Your solution function for LeetCode problem (modify accordingly)
void solveLinkedListProblem(ListNode* head) {
    // Your code here
}

ListNode* reverseList(ListNode* head) {
        ListNode* nextnode;
        ListNode* prevnode = nullptr;
        
        while (head) {
            nextnode = head->next;
            head->next = prevnode;
            prevnode = head;
            head = nextnode;
        }
        
        return prevnode;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode *dummy = new ListNode() ;
         //dummy will carry head and temp will stode dummies;
         ListNode *temp = dummy;
         int carry = 0;
         while(l1!=NULL || l2 != NULL || carry!=0){
             int sum =0;
            if(l1!=NULL){
               sum=sum+l1->val;
               l1=l1->next;
            }
            if(l2!=NULL){
               sum=sum+l2->val;
               l2=l2->next;
            }
            sum = sum+carry;
            carry =sum/10;
            ListNode * node = new ListNode(sum%10);
            temp->next =node ;
            temp=temp->next;
         }   
         return dummy->next;
}

int main() {
    vector<int> values = {1,8,9};
    ListNode* linkedList = createLinkedList(values);

    printLinkedList(linkedList);

    ListNode* reverselinkedList = reverseList(linkedList);
    // ListNode *numbersAdded = addTwoNumbers(linkedList,linkedList);
    // ListNode* newList = reverseList(numbersAdded);
    printLinkedList(reverselinkedList);

    return 0;
}
