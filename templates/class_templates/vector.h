#ifndef VECTOR_H
#define VECTOR_H

template<typename T>
class vector {
private:
	// Dynamic array of SOMETHING and its size
	T* values = nullptr;
	int size = 0;
public:
	vector() {}

	void push_back(T value) {
		T* new_values = new T[size + 1];
		for (int i = 0; i < size; i++) {
			new_values[i] = values[i];
		}
		new_values[size] = value;
		size++;
		
		if (values != nullptr) {
			delete [] values;
		}

		values = new_values;
	}

	T& at(int index) {
		return values[index];
	}

	~vector() {
		if (values != nullptr) {
			delete [] values;
		}
	}
	// Copy constructor and AOO left out
	// for brevity, but you should
	// implement them as well, of course
};

#endif
