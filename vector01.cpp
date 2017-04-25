#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{


	vector<int> vect;

	for (int x = 0; x < 10; x++)
	{
		vect.push_back(x);
		

	}

	

	vector<int>::iterator iter = vect.begin();
	iterator iter = vect.begin();
	while (iter != vect.end())
	{
		cout << *iter << " ";
		iter++;
	}




	cout << endl;
	system("pause");
	return 0;
}