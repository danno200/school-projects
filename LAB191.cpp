#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(vector<string> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{
	vector<string> vect;

	display(vect);

	vect.push_back("Eggs");
	vect.push_back("Milk");
	vect.push_back("Sugar");
	vect.push_back("Chocolate");
	vect.push_back("Flour");
	display(vect);

	vect.erase(vect.begin() + 4);
	display(vect);

	vect.push_back("Coffee");
	display(vect);

	for (int i = 0; i < vect.size(); i++)
	{
		if (vect[i] == "sugar")
		{
			vect[i] = "Ham";
		}
	}
	display(vect);

	for (int i = 0; i < vect.size(); i++)
	{
		if (vect[i] == "milk")
		{
			vect.erase(vect.begin() + i);
		}
	}
	display(vect);


	cout << endl;
	system("pause");
	return 0;
}
