#include <iostream>

using namespace std;

double **addMatrix(double **mat1, double **mat2, int n, int m)
{
	double **res = new double*[n];
	
	for(int i = 0; i < n; i++)
	{
		res[i] = new double[m];
		for(int j = 0; j < m; j++)
			res[i][j] = mat1[i][j] + mat2[i][j];
	}

	return res;
}


