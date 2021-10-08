#pragma once
#include<iostream>
struct Node* insertAtBeginning_LL(struct Node* head, int data);
struct Node* insertAtEnd_LL(struct Node* head, int data);
void traverse_LL(struct Node* head);
void recursiveTraversal_LL(Node* head);
Node* insertAtGivenPos_LL(Node* head, int data, int pos);
Node* sortedInsert_LL(Node* head, int dataToInsert);
void sort012ByChangingData_LL(Node* head);
Node* sort012ByChangingLink_LL(Node* head);
int search_LL(Node* head, int searchData);
int recursiveSearch_LL(Node* head, int searchData, int counter);
int recursiveSearch2_LL(Node* head, int searchData);
