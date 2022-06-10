#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
/* Given a reference (pointer to pointer)
to the head of a list and an int,
inserts a new node on the front of the list. */
void push(Node** head_ref, int new_data)
{
	/* 1. allocate node */
	Node* new_node = new Node();

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. Make next of new node as head */
	new_node->next = (*head_ref);

	/* 4. move the head to point to the new node */
	(*head_ref) = new_node;
}

// This code is contributed by rathbhupendra

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	head = new Node();
	second = new Node();
	third = new Node();
	head->data = 1;
	head->next = second; 
	second->data = 2;
	second->next = third;
	third->data = 3; 
	third->next = NULL;
    cout<<head->data<<endl;
    cout<<second->data<<endl;
    cout<<third->data<<endl;
    printList(head);
	return 0;
}