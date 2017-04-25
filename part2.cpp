#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <class T>

void rotateL(vector <T> v)
{
	rotate(v.begin(), v.begin() + 1, v.end());

}
template <class T>
void output(vector <T> v)
{
	vector<T>::iterator iter = v.begin();
	iter = v.begin();
	while (iter != v.end())
	{
		cout << *iter << " ";
		iter++;
	}
}


int main()
{


	vector<int> vect;

	for (int x = 0; x < 10; x++)
	{
		vect.push_back(x);
	}

	output(vect);

	rotateL(vect);
	cout << endl;
	output(vect);







	cout << endl;
	system("pause");
	return 0;
}