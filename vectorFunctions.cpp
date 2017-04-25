#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{


	vector<int> vect;

	for (int x = 0; x < 10; x++)
	{
		vect.push_back(x);
		
	}


	cout << "The vector has " << vect.size() << " elements" << endl;

	for (int x = 0; x < vect.size(); x++)
		cout << vect[x] << " ";

	cout << endl;

	random_shuffle(vect.begin(), vect.end());


	cout << "The vector after shuffle " << vect.size() << " elements" << endl;

	for (int x = 0; x < vect.size(); x++)
		cout << vect[x] << " ";

	cout << endl;


	sort(vect.begin(), vect.end());

	cout << "The vector after sort " << vect.size() << " elements" << endl;

	for (int x = 0; x < vect.size(); x++)
		cout << vect[x] << " ";

	cout << endl;

	int val = 50;

	if (binary_search(vect.begin(), vect.end(), val))
		cout << "The value: " << val << " was found in the vector" << endl;

	else
		cout << "The value " << val << " was not found in the vector" << endl;


	cout << endl;
	system("pause");
	return 0;
}