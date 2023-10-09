// Problem: The user wants us to create a 2D array of random values in [0, 1].
// However, that 2D array should be "jagged". This means that each row
// can have a different number of columns. Ask the user for the number of rows.
// Then, for each row, ask the user for the number of columns. Proceed to fill
// it with random floating point values in [0, 1].

#include <iostream>
#include <cstdlib> // For srand() and rand()
#include <ctime> // For seeding PRNG with time(0)

using namespace std;

// create_jagged_array
// Allocates a jagged array on the heap with the specified rows and columns.
// Post-condition: 2D array is allocated on the heap. Must be deleted later.
int** create_jagged_array(int rows, int* columns) {
	int** jagged_array;
	// TODO create the "outer" array on the heap. Use `jagged_array` int
	// double-pointer for this.
	
	for (int i = 0; i < rows; i++) {
		// TODO create "inner" array at index i on the heap. Use
		// `jagged_array[i]` pointer for this.
	}

	return jagged_array;
}

// prompt_column_counts
// Prompt the user for the number of columns in each row. Store answers in
// 		dynamic array of size M, where M is the number of rows. Return it.
int* prompt_column_counts(int rows) {
	// TODO Create dynamic array of column counts

	// TODO Ask user for column counts and initialize column counts array

	// TODO Return array of column counts
	return nullptr; // Placeholder
}

// init_jagged_array
// Initializes the values of the given jagged array to random floats in [0, 1]
void init_jagged_array(int** jagged_array, int rows, int* columns) {
	for (int i = 0; i < rows; i++) {
		int columns_in_current_row = columns[i];
		for (int j = 0; j < columns_in_current_row; j++) {
			// TODO Initialize jagged_array[i][j] to a random value in [0, 1]
		}
	}
}

// print_jagged_array
// Prints the jagged array neatly to the terminal (cout)
void print_jagged_array(int** jagged_array, int rows, int* columns) {
	// Print the array
	for (int i = 0; i < rows; i++) {
		// TODO (write and call a function) print the current row (index i)
	}
}

// delete_jagged_array
// Deletes the jagged array from the heap
void delete_jagged_array(int** jagged_array, int rows, int* columns) {
	// Delete the "inner" arrays first
	for (int i = 0; i < rows; i++) {
		// TODO Delete the current inner array (index i)
	}
	// TODO Delete the outer array
	
	// Question: Why do we have to delete the inner arrays BEFORE the outer
	// array?
}

int main() {
    // TODO seed the PRNG
	
	int rows;
	// TODO (write and call a function) Ask user for # of rows. Store in `rows`.
	
	// Prompt user for number of columns in each row. Store answers in dynamic
	// array.
	int* columns = prompt_column_counts(rows);

	// Create jagged array (array of pointers on the heap, initially
	// garbage)
	int** jagged_array = create_jagged_array(rows, columns);

	// TODO (write and call a function) initialize jagged array values
	init_jagged_array(jagged_array, rows, columns);

	// Print the jagged array
	print_jagged_array(jagged_array, rows, columns);

	// Delete jagged array
	delete_jagged_array(jagged_array, rows, columns);

	// TODO delete `columns`. Question: why do we have to delete the jagged
	// array BEFORE deleting `columns`?
}
