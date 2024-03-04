#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
	cout << "Gauss Sedial Method\n";
	const int n_of_expression = 5;
	float Terms[n_of_expression][n_of_expression + 1] = {
						{ 4,  1, 1,  0,   1,  6},
						{-1, -3, 1,  1,   0,  6},
						{ 2,  1, 5,  -1, -1,  6},
						{-1, -1, -1,  4,  0,  6},
						{ 0,  2, -1,  1,  4,  6}
	};

	for (int i = 0; i < n_of_expression; i++) {
		for (int j = 0; j < n_of_expression + 1; j++) {
			if (j == n_of_expression)
				cout << " = ";
			cout << Terms[i][j] << "  ";
		}
		cout << endl;
	}
	float Leading_Var;
	for (int i = 0; i < n_of_expression; i++) {
		Leading_Var = Terms[i][i];
		for (int j = 0; j < n_of_expression + 1; j++)
			Terms[i][j] = Terms[i][j] / Leading_Var;
	}
	cout << "\nResulting Expressions Divided by Leading Variable" << endl;
	for (int i = 0; i < n_of_expression; i++) {
		for (int j = 0; j < n_of_expression + 1; j++)
			cout << fixed << setprecision(4) << Terms[i][j] << "\t";
		cout << endl;
	}
	for (int i = 0; i < n_of_expression; i++) {
		for (int j = 0; j < n_of_expression; j++)
			if (i != j)
				Terms[i][j] = Terms[i][j] * -1;
	}
	cout << "\nResulting Expressions after keeps X at left side and remaining eq at right" << endl;

	for (int i = 0; i < n_of_expression; i++) {
		cout << "X" << i << " =\t";
		for (int j = 0; j < n_of_expression + 1; j++)
			if (i == j)
				cout << "\t";
			else
				cout << fixed << setprecision(4) << Terms[i][j] << "\t";
		cout << endl;
	}

	vector <vector<float>> Results(n_of_expression);

	for (int i = 0; i < n_of_expression; i++)
		Results[i].push_back(0);
	float Result_Temp = 0;

	for (int K = 1; K < 10; K++)
	{
		for (int Exp = 0; Exp < n_of_expression; Exp++) {
			for (int z = 0; z < n_of_expression + 1; z++)
			{
				/*if (Exp == z)
					cout << "\t";
				else
					cout << Terms[Exp][z] << "\t";*/
			}
			//cout << endl;
			for (int j = 0; j < n_of_expression + 1; j++)
			{
				if (Exp == j){}
					//cout << "LV" << endl;
				else if (j == n_of_expression) {
					Result_Temp += Terms[Exp][j];
					//cout << "The constant term: " << Terms[Exp][j] << endl;
				}
				else {
					//cout << "Terms[" << Exp << "][j]: " << Terms[Exp][j] << "\tResults[" << j << "][" << K - 1 << "]: " << Results[j][K - 1] << "\tj is: " << j << endl;
					Result_Temp = Result_Temp + (Terms[Exp][j] * Results[j].back());
				}
			}
			//cout << "Result_Temp = " << Result_Temp << endl;
			//float original = Result_Temp;
			//int tmp = original * 10000; // 44.8 truncated to 44
			//float truncated = tmp / 10000.0; // 4.4
			//Results[Exp][K] = truncated;
			Results[Exp].push_back(Result_Temp);
			//Results[Exp][K] = Result_Temp;

			Result_Temp = 0;
		}
	}

	cout << "\nResulting Table" << endl;
	for (int i = 0; i < n_of_expression; i++) {
		for (int j = 0; j < 10; j++)
			cout << Results[i][j] << "\t";
		cout << endl;
	}
}