#include <iostream>
#include <fstream>
using namespace std;




struct node
{
	int data;
	node *next;
};

bool isEmpty(node *head);
void insertAsFirstElement(node *&head, node *&last, int number);
void insert(node *&head, node *&last, int data);
void remove(node *&head, node *&last);
void showList(node *current);
void insertNode(node *&head, node*&last, int data);
void getSize(node *head);
void removeNode(node *&head, node *&last, int data);



int main()
{

	node *head = NULL;
	node *last = NULL;



	insert(head, last, 2);
	insert(head, last, 4);
	insert(head, last, 6);
	showList(head);

	insertNode(head, last, 5);
	showList(head);
	getSize(head);
	removeNode(head, last, 6);


	cout << endl;
	system("pause");
	return 0;
}

void showList(node *current)
{
	if (current == NULL)
		cout << "The list is empty" << endl;

	else
	{
		cout << "The list contains" << endl;
		while (current != NULL)
		{
			cout << current->data << endl;
			current = current->next;
		}
	}

}


bool isEmpty(node *head)
{
	if (head == NULL)
		return true;

	else
		return false;
}


void insertAsFirstElement(node *&head, node *&last, int data)
{
	node *temp = new node;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	last = temp;
}

void insert(node *&head, node *&last, int data)
{
	if (isEmpty(head))
	{
		insertAsFirstElement(head, last, data);

	}

	else
	{
		node *temp = new node;
		temp->data = data;
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}


}

void remove(node *&head, node *&last)
{
	if (isEmpty)
		cout << "The list is empty" << endl;

	else if (head == last)
	{
		delete head;
		head = NULL;
		last = NULL;
	}

	else
	{
		node *temp = head;
		head = head->next;
		delete temp;
	}

}


void insertNode(node *&head, node*&last, int data)
{

	if (isEmpty(head))
		insertAsFirstElement(head, last, data);


	else
	{
		node *curr = head;
		node *trail = NULL;
		node *temp = new node;
		temp->data = data;
		temp->next = NULL;

		while (curr != NULL)
		{
			if (curr->data >= temp->data)
			{
				break;
			}

			else
			{
				trail = curr;
				curr = curr->next;
			}

		}


		if (curr == head)
		{
			temp->next = head;
			head = temp;
		}

		else
		{
			temp->next = curr;
			trail->next = temp;
		}


	}

}

void getSize(node *head)
{
	node *curr = head;
	int count = 0;
	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	cout << "The Size of the list is " << count << endl;

}

void removeNode(node *&head, node *&last, int data)
{

	if (isEmpty(head))
		insertAsFirstElement(head, last, data);


	else
	{
		node *curr = head;
		node *trail = NULL;
		node *temp = NULL;


		while (curr != NULL)
		{
		if (curr->data >= data)
		{
		break;
		}

		else
			{
				trail = curr;
				curr = curr->next;
				temp = curr->next;
			}

		}
		trail->next = temp;
		showList(head);

	}

}