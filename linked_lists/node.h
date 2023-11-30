#ifndef NODE_H
#define NODE_H

struct node {
	int val;
	node* next = nullptr;
};

void push_front(node*& head, int val) {
	node* new_node = new node;
	new_node->val = val;
	new_node->next = head;
	head = new_node;
}

void push_back(node* head, int val) {
	node* new_node = new node;
	new_node->val = val;
	new_node->next = nullptr;

	node* itr = head;
	while(itr->next != nullptr) {
		// Move itr forward by one step
		itr = itr->next;
	}

	itr->next = new_node;
}

void pop_front(node*& head) {
	node* temp = head->next;
	delete head;
	head = temp;
}

#endif
