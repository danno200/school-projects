#include <iostream>
#include <iomanip>
using namespace std;


struct ListNode
{
	int data;
	ListNode *next;
	ListNode(int d, ListNode* p = NULL)
	{
		data = d; next = p;
	}
};


bool isEmpty(ListNode *head);
int length(ListNode *myList);
void showList(ListNode *current);
void displayList(ListNode *myList);
void reverse(ListNode *head);   //reverse function
								//void int search(ListNode *head, int x); //search function
void insertByPos(ListNode *head, int x, int pos); //inserByPos function




int main()
{




	ListNode *head = NULL;
	int nodes;
	int val;
	int counter = 1;


	cout << "how many nodes do you want in the list?: ";
	cin >> nodes;

	do
	{
		cout << "value of node " << counter << ": ";
		cin >> val;
		head = new ListNode(val, head);
		counter++;

	} while (counter <= nodes);


	cout << "***The list containts " << length(head) << " nodes.***" << endl;
	cout << "List is Reversed " << endl;
	displayList(head);
	reverse(head);
	cout << endl;



	cout << endl;
	system("pause");
	return 0;
}






int length(ListNode *myList)
{
	if (myList == NULL) return 0;
	else
		return 1 + length(myList->next);
}


bool isEmpty(ListNode *head)
{
	if (head == NULL)
		return true;

	else
		return false;
}

void showList(ListNode *current)
{
	if (isEmpty(current))
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

void displayList(ListNode *myList)
{
	if (myList != NULL)
	{
		cout << myList->data << " ";
		displayList(myList->next);
	}
}

void reverse(ListNode *head)
{
	if (head != NULL & head->next != NULL) {
		ListNode* m = head;
		ListNode* n = head->next;
		ListNode* t = NULL;
		if (n->next != NULL) t = n->next;
		head->next = NULL;
		while (t->next != NULL) {
			n->next = m;
			m = n;
			n = t;
			t = t->next;
		}
		n->next = m;
		head = t;
		t->next = n;
	}
}