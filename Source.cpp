#include <iostream>
using namespace std;

int main() {
	int M = 4;
	int N = 5;
	int** A = new int* [M];

	for (int i = 0; i < M; i++)
	{
		A[i] = new int[N];
	}


	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			A[i][j] = rand() % 100;
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			cout << A[i][j] << " ";
		cout << std::endl;
	}

	for (int i = 0; i < M; i++)
	{
		delete[] A[i];

	}
	delete[]A;


	cout << "\n" << endl;
	
	/* SHALLOW COPY(A COPY OF REFERENCES) */
	int* ptrA = new int(30);
	int* ptrB = new int(50);
	cout << "Before Shallow Copy" << endl;
	cout << "Pointer -A: " << *ptrA << endl;
	cout << "Pointer -B: " << *ptrB << endl;
	ptrA = ptrB;
	cout << "After Shallow Copy" << endl;
	cout << "Pointer -A: " << *ptrA << endl;
	cout << "Pointer -B: " << *ptrB << endl;
	//delete ptrA;


	cout << "\n" << endl;

	/*    DEEP COPY     */
	int* ptrC = new int(30);
	int* ptrD = new int(50);
	cout << "Before Deep Copy" << endl;
	cout << "Pointer -C: " << *ptrC << endl;
	cout << "Pointer -D: " << *ptrD << endl;
	*ptrC = *ptrD;
	cout << "After Deep Copy" << endl;
	cout << "Pointer -C: " << *ptrC << endl;
	cout << "Pointer -D: " << *ptrD << endl;
	//delete prtA
	cout << "\n" << endl;



}
