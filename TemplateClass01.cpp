#include <iostream>
#include <string>
using namespace std;

template <class T>

class Joiner
{
public:
	T combine(T x, T y)
	{
		return x + y;
	}
};



int main()
{

	Joiner<int> a;
	Joiner<string> b;

	cout << "int: " << a.combine(5, 9) << endl;
	cout << "str: " << b.combine("Nieto", "Javier") << endl;

	









	cout << endl;
	system("pause");
	return 0;
}



