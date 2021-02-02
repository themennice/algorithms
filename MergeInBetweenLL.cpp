// https://leetcode.com/problems/merge-in-between-linked-lists/
// Time Complexity: O(n + m) as the most possible passes completed would be to iterate list1 and list2
// Space: O(1) as only constants were created

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* curr = list1;
    int toSkip = b - a + 1;
    while(a > 1)
    {
        curr = curr->next;
        a--;
    }
    ListNode* old_next = curr;
    
    while(toSkip >= 0)
    {
        old_next = old_next->next;
        toSkip--;
    }
    
    curr->next = list2;
    
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = old_next;
    
    return list1;
}