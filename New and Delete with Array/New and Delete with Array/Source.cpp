#include <iostream>

using namespace std;

int main() {

	cout << "New and Delete with arrays\n" << endl;

	int length;

	cout << "Please enter the length: ";
	cin >> length;

	int* intPtr = new int[length];

	//giving an end value. If this was not here, it would only give an address
	for (int i = 0; i < length; i++) {
		intPtr[i] = i + 1;
	}

	for (int i = 0; i < length; i++) {
		cout << "intPtr[" << i << "]; " << intPtr[i] << endl;
	}
	//make sure that the pointer([]) is there or else its only going to delete the first variable
	delete[]intPtr;

	return 0;
}