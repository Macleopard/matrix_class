#pragma once

class Matrix
{
public:
	Matrix(int a, int b);
	void show();
private:
	static const int size = 10000;
	int row, collumns;
	int m[size][size];
};