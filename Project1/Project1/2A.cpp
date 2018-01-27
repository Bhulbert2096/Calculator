#include <iostream>

using namespace std;

class myArray
{
public:
	myArray(int initSize = 0)
	{
		numElts = initSize;
		if (initSize > 0)
		{
			elts = new int[numElts];
		}
	}

	myArray(const myArray& rhs)
	{
		numElts = rhs.numElts;
		if (numElts > 0)
		{
			elts = new int[numElts];
			for (int i = 0; i < numElts; i++)
			{
				elts[i] = rhs.elts[i];
			}
		}
	}

	int& operator[](int pos)
	{
		return elts[pos];
	}

	~myArray()
	{
		delete[] elts;
	}

private:
	int numElts;
	int* elts;
};

int stuff()
{
	myArray a(5);

	a[0] = 10;
	a[1] = 20;

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}