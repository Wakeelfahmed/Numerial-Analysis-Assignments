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
//	string Expression[5];
//	float Terms[n_of_expression][n_of_expression + 1] = {
//						{ 4,  1, 1,  0,   1,  6},
//						{-1, -3, 1,  1,   0,  6},
//						{ 2,  1, 5,  -1, -1,  6},
//						{-1, -1, -1,  4,  0,  6},
//						{ 0,  2, -1,  1,  4,  6}
//						/*{10, -1, 2 , 0,  6},
//						{-1, 11, -1, 3, 25},
//						{ 2, -1, 10, -1, -11},
//						{ 0,  3,  0, 8, 15},*/
//	};
//	//cout << "Enter 1st expression: ";
//	//get_Variables_from_Expression(Terms[0]);
//	//cout << "Enter 2nd expression: ";
//	//get_Variables_from_Expression(Terms[1]);
//	//cout << "Enter 3rd expression: ";
//	//get_Variables_from_Expression(Terms[2]);
//	//cout << "Enter 4th expression: ";
//	//get_Variables_from_Expression(Terms[3]);
//	/*Terms[0][0] = 0.0000;			Terms[0][1] = -1.0000 / 4.0000;	Terms[0][2] = +1.0000 / 4.0000;	Terms[0][3] = 5.0000 / 4.0000;
//	Terms[1][0] = 1.0000 / 3.0000;	Terms[1][1] = 0.0000;			Terms[1][1] = -1.0000 / 3.0000;	Terms[1][2] = -4.0000 / 3.0000;
//	Terms[2][0] = -2.0000 / 5.0000;	Terms[2][1] = -2.0000 / 5.0000;	Terms[2][2] = 0.0000;			Terms[2][3] = 1.0000 / 5.0000;*/
//
//	
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
//		for (int j = 0; j < n_of_expression + 1; j++) {
//			//float original = Terms[i][j] / Leading_Var;
//			//int tmp = original * 10000; // 44.8 truncated to 44
//			//float truncated = tmp / 10000.0; // 4.4
//			//Terms[i][j] = truncated;
//			//Terms[i][j] = floorf(Terms[i][j] * 10000) / 10000;
//
//			Terms[i][j] = Terms[i][j] / Leading_Var;
//
//		}
//	}
//	cout << "Resulting Expressions Divided by Leading Variable" << endl;
//	for (int i = 0; i < n_of_expression; i++) {
//		for (size_t j = 0; j < n_of_expression + 1; j++)
//			//cout << Terms[i][j] << "\t";
//			cout << fixed << setprecision(4) << Terms[i][j] << "\t";
//		cout << endl;
//	}
//	for (int i = 0; i < n_of_expression; i++) {
//		for (int j = 0; j < n_of_expression; j++)
//			if (i != j)
//				Terms[i][j] = Terms[i][j] * -1;
//	}
//	cout << "Resulting Expressions after keeps X at left side and remaining eq at right" << endl;
//	////Terms[1][1] = 1.0000 / 10.0000;	Terms[1][2] = -1.0000 / 5.0000;	Terms[1][3] = 0.0000;
//					//Terms[0][1] = 1.0000 / 10.0000;	Terms[0][2] = -1.0000 / 5.0000;	Terms[0][3] = 0.0000;
//	//Terms[2][3] = 1.0000 / 10.0000;	//Terms[2][2] = -1.0000 / 5.0000;	Terms[2][3] = 0.0000;
//	//Terms[3][0] = 0; Terms[3][1] = -3.0000 / 8.0000;	Terms[3][2] = +1.0000 / 8.0000;	Terms[3][3] = 15.0000 / 8.0000;
//
//
//	//Terms[0][0] = 0.0000;			Terms[0][1] = -1.0000 / 4.0000;	Terms[0][2] = +1.0000 / 4.0000;	Terms[0][3] = 5.0000 / 4.0000;
//	//Terms[1][0] = 1.0000 / 3.0000;	Terms[1][1] = 0.0000;			Terms[1][2] = -1.0000 / 3.0000;	Terms[1][3] = -4.0000 / 3.0000;
//	//Terms[2][0] = -2.0000 / 5.0000;	Terms[2][1] = -2.0000 / 5.0000;	Terms[2][2] = 0.0000;			Terms[2][3] = 1.0000 / 5.0000;
//
//	for (int i = 0; i < n_of_expression; i++) {
//		//cout << "X" << i << " =\t";
//		for (int j = 0; j < n_of_expression + 1; j++)
//			if (i == j)
//				cout << "\t";
//			else
//				cout << Terms[i][j] << "\t";
//				//cout << fixed << setprecision(4) << Terms[i][j] << "\t";
//		cout << endl;
//	}
//	float Results[n_of_expression][20]{ 0 };
//	float Result_Temp = 0;
//	/*for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 10; j++)
//			Results[i][j] = 0;
//	}*/
//	Results[0][0] = Results[0][1] = Results[0][2] = Results[0][3] = 0;
//	for (int K = 1; K < 15; K++)
//	{
//		cout << "\nK is: " << K << "\t\tK-1: " << K - 1 << endl;
//		for (int Exp = 0; Exp < n_of_expression; Exp++) {
//			cout << "\nExpression: ";
//			cout << "X" << Exp << " : ";
//			for (int z = 0; z < n_of_expression + 1; z++)
//			{
//				if (Exp == z)
//					cout << "\t";
//				else
//					cout << Terms[Exp][z] << "\t";
//			}
//			cout << endl;
//			for (int j = 0; j < n_of_expression + 1; j++)
//			{
//				if (Exp == j)
//					cout << "LV" << endl;
//				else if (j == n_of_expression) {
//					Result_Temp = Result_Temp + Terms[Exp][j];
//					//cout << "The constant term: " << Terms[Exp][j] << endl;
//				}
//				else {
//					//cout << "Terms[" << Exp << "][j]: " << Terms[Exp][j] << "\tResults[" << j << "][" << K - 1 << "]: " << Results[j][K - 1] << "\tj is: " << j << endl;
//					Result_Temp = Result_Temp + (Terms[Exp][j] * Results[j][K - 1]);
//				}
//			}
//			//cout << "Result_Temp = " << Result_Temp << endl;
//			//float original = Result_Temp;
//			//int tmp = original * 10000; // 44.8 truncated to 44
//			//float truncated = tmp / 10000.0; // 4.4
//			//Results[Exp][K] = truncated;
//			Results[Exp][K] = Result_Temp;
//
//			Result_Temp = 0;
//		}
//	}
//
//	cout << "Resulting Table" << endl;
//	for (int i = 0; i < n_of_expression; i++) {
//		for (int j = 0; j < 15; j++)
//			cout << Results[i][j] << "\t";
//		cout << endl;
//	}
//}