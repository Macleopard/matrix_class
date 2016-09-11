#include <iostream>
#include "matrix.h"
using std::cin;
using std::cout;

int main(int argc, char **argv[])
{
	int row, collumns;
	cout << "Enter row and collumns: ";
	cin >> row >> collumns;
	Matrix *a = new Matrix(row,collumns);
	a->show();
	
	system("pause");
	return 0;
}
