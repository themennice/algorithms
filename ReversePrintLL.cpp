/* https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem?isFullScreen=true
 *
 * A recursive implementation of reverse-printing a singly-linked list in C++
 *
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {

    if(head->next == NULL)
        {cout << head->data << endl; return;}
    reversePrint(head->next);
    cout << head->data << endl;
    return;
}