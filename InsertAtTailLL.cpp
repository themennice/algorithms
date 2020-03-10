/*
Insert at tail of a linked list.
https://www.hackerrank.com/challenges/30-linked-list/problem
*/

#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head, int data)
      {
        // Create a node with data to insert
        Node* inserted = new Node(data);
        // Make the node the new head if the list is empty
        if(head == NULL)
           head = inserted;
        // Otherwise, go to the end of the list and append the new node at the end
        else {
          Node* currHead = head;
          while(currHead->next != NULL)
              currHead = currHead->next;
          currHead->next = inserted;
        }
        return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}