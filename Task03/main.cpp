#include "util.h"
#include "logic.h"

int main() {
	int matrix[BUF][BUF];
	int size;

	cout << "Input size of square:";
	cin >> size;

	init_random(matrix, size, 0, 9);
	cout << "Matrix:\n" << convert(matrixm, size) << endl;

	cout << "Sum elements of the main diagonale: "
		<< sum_elements_of_main_diagonale(matrix, size) << endl;

	cout << "Sum elements of the addition diagonale: "
		<< sum_elements_of_main_diagonale(matrix, size) << endl;

	change_matrix(matrix, size);
	cout << "Phofagor table:\n" << convert(matrix) << endl;

	return 0;
}