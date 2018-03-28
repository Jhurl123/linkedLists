//============================================================================
// Name        : newLinkedLists.cpp
// Author      : Justin Hurley
// Version     :
// Description : Demonstration of understanding of different data structures including linked lists
//============================================================================

#include <iostream>
#include <list>

using namespace std;


struct node{
	int data;
	node *next;
};


class list
{
private:

	node *head, *tail;

public:

	list(){

		head = NULL;
		tail = NULL;

	}



void createNode(int value)
{

	node *temp = new node;
	temp->data=value;
	temp->next = NULL; // creates the node next to tail because tail is null;

	if(head == NULL)
	{
		head = temp;
		tail = temp;
	}

	else
	{
		tail->next = temp;
		tail=temp;

	}


}


void display()
{

w
node *temp = new node;
temp = head;

while(temp != NULL)
{
	cout << temp->data << "\t";
	(*temp).next;


}}

int main() {


	list linklist;
	int value = 0;

	cout << "This is Justin Hurley working with linked lists.";
		cin >> value;
	linklist.createNode(value);


	linklist.display();

}};
