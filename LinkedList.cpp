#include<iostream>

using namespace std;

struct Node
{
	int data;
	struct Node* next;

	Node(int x)
	{
		data = x;
		next = nullptr;
	}
};

struct Node* insertAtBeginning_LL(struct Node* head, int data)
{
	struct Node* temp = new Node(data);
	if (head == nullptr)
	{
		return temp;
	}

	temp = new Node(data);
	temp->next = head;
	return temp;

}

struct Node* insertAtEnd_LL(struct Node* head, int data)
{
	Node* curr = head; 
	Node* temp = new Node(data);

	if (head == nullptr)
	{
		return temp;
	}

	while (curr->next != nullptr)
	{
		curr = curr->next;
	}

	curr->next = temp;
	return head;
}

Node* insertAtGivenPos_LL(Node* head, int data,int pos)  // we can insert up to sizeOf_LL + 1 , pos <= sizeOf_LL+1
{
	Node* temp = new Node(data);
	if (pos == 1) //inser at head sample text
	{
		head = NULL;

	}

}

void traverse_LL(struct Node* head)
{
	if (head == nullptr)
		return;

	struct Node* temp = head;

	while (temp != nullptr)
	{
		cout << temp->data<<endl;
		temp = temp->next;
	}
}

void recursiveTraversal_LL(Node* head)
{
	if (head == NULL)
		return;
	cout << head->data << endl;
	recursiveTraversal_LL(head->next);
}