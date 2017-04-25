#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void display(list<string> l)
{
	list<string>::iterator iter = l.begin();

	for (iter = l.begin(); iter != l.end(); iter++)
	{
		cout << *iter << endl;
	}
}

int main()
{
	list <string> vect;

	display(vect);

	vect.push_back("eggs");
	vect.push_back("milk");
	vect.push_back("sugar");
	vect.push_back("chocolate");
	vect.push_back("flour");
	display(vect);
	list<string>::iterator iter1;
	iter1 = find(vect.begin(), vect.end(), 1);
	vect.erase(iter1);
	display(vect);

	iter1 = find(vect.begin(), vect.end(), 1);
	vect.insert(iter1, "coffee");
	display(vect);

	for (iter1 = vect.begin(); iter1 != vect.end(); iter1++)
	{
		if (*iter1 == "sugar")
		{
			*iter1 = "honey";
		}
	}
	display(vect);
	int counter = 0;
	for (iter1 = vect.begin(); iter1 != vect.end(); iter1++)
	{
		counter++;
		if (*iter1 == "milk")
		{
			iter1 = find(vect.begin(), vect.end(), counter + 1);
		}

	}
	display(vect);

	cout << endl;
	system("pause");
	return 0;
}