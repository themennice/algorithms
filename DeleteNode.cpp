// https://leetcode.com/problems/delete-node-in-a-linked-list
// O(1) for space and time

void deleteNode(ListNode* node) {
    node->val = node->next->val;
    if(node->next->next)
        node->next = node->next->next;
    else
        node->next = NULL;
}