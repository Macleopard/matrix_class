#include <iostream>
#include "matrix.h"

using std::cin;
using std::cout;

Matrix::Matrix(int a, int b)
{
	row = a;
	collumns = b;
	for (int i = 0; i < a;++i)
		for (int j = 0;j < b;++j)
		{
			cout << "Enter " << i << " " << j << " element: ";
			cin >> m[i][j];
		}
}
void Matrix::show()
{
	for (int i = 0; i < Matrix::row;++i)
	{
		for (int j = 0;j < Matrix::collumns;++j)
		{
			cout << m[i][j] << " ";
		}
		cout << "\n";
	}
}

	
