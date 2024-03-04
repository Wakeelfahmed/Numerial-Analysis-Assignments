//#include <iostream>
//#include <sstream>
//#include <vector>
//#include <string>
//#include <iomanip>
//#include <math.h>       /* round, floor, ceil, trunc */
//
////int main() {
////    // Get the expression as input
////    string expression;
////    cout << "Enter the expression: ";
////    getline(cin, expression);
////}
//
//
//using namespace std;
////void get_Variables_from_Expression(float Term[]) {
////	string expression;
////	getline(cin, expression);
////	// Assuming the expression contains four variables, you can use a stringstream to parse them
////	istringstream iss(expression);
////	vector<string> variables;
////
////	int i = 0;
////	while (iss >> expression) {
////		if (expression != "=") {
////			variables.push_back(expression);
////			Term[i] = stoi(expression);
////			i++;
////		}
////	}
////	cout << "Separated Variables:" << endl;
////	for (const string& variable : variables)
////		cout << variable << endl;
////
////	for (int i = 0; i < 4; i++)
////		cout << Term[i] << "  ";
////
////}
//int main() {
//	const int n_of_expression = 5;
// 	cout << "Jacobi's Method\n";
//	string Expression[5];
//	float Terms[n_of_expression][n_of_expression + 1] = {
//						{ 4,  1, 1,  0,   1,  6},
//						{-1, -3, 1,  1,   0,  6},
//						{ 2,  1, 5,  -1, -1,  6},
//						{-1, -1, -1,  4,  0,  6},
//						{ 0,  2, -1,  1,  4,  6}
//	};	
//	for (int i = 0; i < n_of_expression; i++) {
//		for (int j = 0; j < n_of_expression + 1; j++) {
//			if (j == n_of_expression)
//				cout << " = ";
//			cout << Terms[i][j] << "  ";
//		}
//		cout << endl;
//	}
//	float Leading_Var;
//	for (int i = 0; i < n_of_expression; i++) {
//		Leading_Var = Terms[i][i];
//		for (int j = 0; j < n_of_expression + 1; j++)
//			Terms[i][j] = Terms[i][j] / Leading_Var;
//	}
//	cout << "\nResulting Expressions Divided by Leading Variable" << endl;
//	for (int i = 0; i < n_of_expression; i++) {
//		for (int j = 0; j < n_of_expression + 1; j++)
//			cout << fixed << setprecision(4) << Terms[i][j] << "\t";
//		cout << endl;
//	}
//	for (int i = 0; i < n_of_expression; i++) {
//		for (int j = 0; j < n_of_expression; j++)
//			if (i != j)
//				Terms[i][j] = Terms[i][j] * -1;
//	}
//	cout << "\nResulting Expressions after keeps X at left side and remaining eq at right" << endl;
//	for (int i = 0; i < n_of_expression; i++) {
//		cout << "X" << i << " =\t";
//		for (int j = 0; j < n_of_expression + 1; j++)
//			if (i == j)
//				cout << "\t";
//			else
//				cout << fixed << setprecision(4) << Terms[i][j] << "\t";
//		cout << endl;
//	}
//	float Results[n_of_expression][20]{ 0 };
//	float Result_Temp = 0;
//
//	Results[0][0] = Results[0][1] = Results[0][2] = Results[0][3] = 0;
//	for (int K = 1; K < 15; K++)
//	{
//		for (int Exp = 0; Exp < n_of_expression; Exp++) {
//			for (int j = 0; j < n_of_expression + 1; j++)
//			{
//				if (Exp == j){}  //Skip LV Term
//				else if (j == n_of_expression)
//					Result_Temp += Terms[Exp][j];   //Constant Term
//				else
//					Result_Temp = Result_Temp + (Terms[Exp][j] * Results[j][K - 1]);
//			}
//			Results[Exp][K] = Result_Temp;
//			Result_Temp = 0;
//		}
//	}
//
//	cout << "\nResulting Table" << endl;
//	for (int i = 0; i < n_of_expression; i++) {
//		for (int j = 0; j < 15; j++)
//			cout << Results[i][j] << "\t";
//		cout << endl;
//	}
//}