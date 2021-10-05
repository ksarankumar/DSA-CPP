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
	Node* curr = head;

	if (pos == 1) //inser at head sample text
	{
		temp->next = head;
		return temp;
	}

	for (int i = 0; i < pos - 2 && curr!=nullptr ;i++)
	{
		curr = curr->next;

	}

	if (curr == nullptr)  //To handle pos > size_LL+1
		return head;

	temp->next = curr->next;
	curr->next = temp;

	return head;

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

int search_LL(Node* head, int searchData)
{
	Node* curr = head;
	int pos = 1;

	while (curr != nullptr)
	{
		if (curr->data == searchData)
			return pos;
		else
		{
			curr = curr->next;
			pos++;
		}
			
	}

	if (curr == nullptr)
		return -1;

	return pos;
}

int recursiveSearch_LL(Node* head, int searchData, int counter)
{
	if (head == nullptr)
		return -1;

	if (head->data == searchData)
		return counter;
	counter = counter + 1;
	recursiveSearch_LL(head->next, searchData, counter);
}

int recursiveSearch2_LL(Node* head, int searchData)
{
	if (head == NULL)
		return -1;

	if (head->data == searchData)
		return 1;
	else
	{
		int res = recursiveSearch2_LL(head->next, searchData);

		if (res == -1) return -1;
		else
			return res + 1;

	}

}