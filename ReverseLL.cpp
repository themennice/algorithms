/* https://www.hackerrank.com/challenges/reverse-a-linked-list/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
 *
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* prev = NULL;
    SinglyLinkedListNode* next = NULL;
    SinglyLinkedListNode* current = head;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;  
        prev = current; 
        current = next;
    }
    head = prev;
    return head;
}