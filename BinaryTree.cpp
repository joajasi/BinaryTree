#include "BinaryTree.h"

BinaryTree::BinaryTree() {
	root = new Node();
	root->parent = NULL;
	root->left = NULL;
	root->right = NULL;
	tail = NULL;
}

void BinaryTree::push(int val) {
	if (!tail) {
		tail = root;
		root->val = val;
		return;	
	}
	else { 
		tail = new Node();
		tail->val = val;
		tail->parent = NULL;
		tail->left = NULL;
		tail->right = NULL;
	}
	whereConnect(root, tail);
}

void BinaryTree::pop() {
	if (!tail)
		return;
	if (tail == root) {
		tail = NULL;
	}
	else {
		Node* parent = tail->parent;
		if (parent->val > tail->val)
			parent->right = NULL;
		else 
			parent->left =NULL;
		delete tail;
	}
}

void BinaryTree::display() {
	if (!tail)
		return;

}

void BinaryTree::whereConnect(Node* toCheck, Node* node) {
	if (toCheck->val > node->val) {
		if (toCheck->left)
			whereConnect(toCheck->left, node);
		else {
			toCheck->left = node;
			node->parent = toCheck;
		}
	}
	else 
		if (toCheck->right)
			whereConnect(toCheck->right, node);
		else {
			toCheck->right = node;
			node->parent = toCheck;
		}
}


