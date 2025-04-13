#include "util.h"
#include "logic.h"

int main() {
	int matrix[BUF][BUF];
	int size;

	cout << "Input size of square:";
	cin >> size;

	change_matrix(matrix, size);
	cout << "Phofagor table:\n" << convert(matrix) << endl;

	return 0;
}