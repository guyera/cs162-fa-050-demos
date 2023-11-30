#include <iostream>

#include "node.h"

using namespace std;

int main() {
	node *head = new node;
	head->next = nullptr;
	head->val = 5;

	push_front(head, 10);

	cout << head->val << endl; // Prints: 10
}
