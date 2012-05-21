#include <iostream>
#include <stack>

using namespace std;

#define TYPE_NUMBER 0
#define TYPE_OPERATOR 1

typedef struct Node {
	int type; // operator or number
	int number;
	char operatorSign;
} StackNode;

int computePolish (string str) {
	if (str == NULL) return -1;

	int idx = -1;
	StackNode node;
	stack<StackNode> polishStack;
	while (1) {
		idx = getNextValidWord(str, idx+1, &node);
		if (node.type == TYPE_NUMBER) {

		} else {
			switch (operatorSign) {
				case '+':
					break;
				case '-':
					break;
				case '*':
					break;
				case '/':
					break;
				case '(':
					break;
				case ')':
					break;
				default:
					break;
			}

		}
		
		if (idx == str.length-1) {
			break;
		}
	}
}
