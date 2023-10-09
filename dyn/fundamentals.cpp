int main() {
	int arr[10]; // This will always be an array of 10 ints

	// dyn_arr is a pointer to the base address of
	// an array on the heap of size 10
	int *dyn_arr = new int[10];
	for (int i = 0; i < 10; i++) {
		dyn_arr[i] = i;
	}

	int n;
	cout << "How many elements do you want to add?" << endl;
	cin >> n;
	int *new_dyn_arr = new int[10 + n];
	// Copy the elements from dyn_arr to new_dyn_arr
	for (int i = 0; i < 10; i++) {
		new_dyn_arr[i] = dyn_arr[i];
	}
	// Delete the old dyn array
	delete [] dyn_arr;

	// Reassign pointers
	dyn_arr = new_dyn_arr;
	

	// MAKE SURE TO DELETE IT WHEN YOU'RE DONE
	delete [] dyn_arr;
}
