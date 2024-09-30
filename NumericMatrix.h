#ifndef NUMERICMATRIX_H
#define NUMERICMATRIX_H

#include <vector>

template <typename T>
class NumericMatrix {
private:
	std::vector<std::vector<T>> data;
	long rows;
	long cols;
public:
	NumericMatrix(long rows, long cols) : rows(rows), cols(cols), data(rows, std::vector<T>(cols)) {}

	T& operator()(long row, long col) {
		return data[row][col];
	}

	const T& operator()(long row, long col) const {
		return data[row][col];
	}

	long numRows() const { return rows; }
	long numCols() const { return cols; }
};

#endif
