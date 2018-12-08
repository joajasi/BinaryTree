#include <cstddef>
typedef struct Node {
	int val;
	Node* parent;
 	Node* left;
 	Node* right;
} Node;

class BinaryTree {
	public:
	BinaryTree();
	void push(int val);
	void pop();
	Node* deleteNode(Node*);
	void whereConnect(Node*, Node*);
	void display();
	private:	
	Node* tail;
	Node* root;
};
