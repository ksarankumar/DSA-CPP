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

Node* sortedInsert_LL(Node* head, int dataToInsert)
{
	Node* temp = new Node(dataToInsert);

	if (head == nullptr)
	{   
		return temp;
	}

	if (head->data > dataToInsert)
	{
		temp->next = head;
		return temp;
	}


	Node* curr = head;

	while (curr->next != nullptr && curr->next->data < dataToInsert)
	{
		curr = curr->next;
	}

	temp->next = curr->next;
	curr->next = temp;

	return head;
}

void sort012ByChangingData_LL(Node* head)
{
	if (head == nullptr)
		return;

	int zero_count = 0, one_count = 0, two_count = 0;

	Node* curr1 = head;

	while (curr1 != nullptr)
	{
		if (curr1->data == 0) zero_count++;
		else if (curr1->data == 1) one_count++;
		else two_count++;

		curr1 = curr1->next;
	}

	Node* curr = head;
	
		for (int i = zero_count; i > 0; i--)
		{
			curr->data = 0;
			curr = curr->next;
		}

		for (int i = one_count; i > 0; i--)
		{
			curr->data = 1;
			curr = curr->next;
		}

		for (int i = two_count; i > 0; i--)
		{
			curr->data = 2;
			curr = curr->next;
		}
	

}

Node* sort012ByChangingLink_LL(Node* head)
{
	if (head == nullptr || head->next == nullptr) // if LL is null or having one node
		return head;

	int zero_count = 0, one_count = 0,two_count = 0;

	Node* zero_head = new Node(0); //dummy nodes
	Node* curr_zero = zero_head;

	Node* one_head = new Node(0); //dummy nodes
	Node* curr_one = one_head;

	Node* two_head = new Node(0); //dummy nodes
	Node* curr_two = two_head;

	Node* curr = head;

	while (curr != nullptr)
	{
		if (curr->data == 0)
		{
			curr_zero->next = curr;
			curr_zero = curr_zero->next;
			zero_count++;
		}	
		else if (curr->data == 1)
		{
			curr_one->next = curr;
			curr_one = curr_one->next;
			one_count++;
		}			
		else
		{
			curr_two->next = curr;
			curr_two = curr_two->next;
			two_count++;
		}
			

		curr = curr->next;
	}


	curr_zero->next = (one_head->next) ? (one_head->next) : (two_head->next);
	curr_one->next = two_head->next;
	curr_two->next = NULL;

	// Updated head
	head = zero_head->next;

	return head;
}