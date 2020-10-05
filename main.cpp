#include <iostream>
#include "SqStack.h"
using namespace std;
int main() {
	SqStack<int> S1;
	S1.Push(100);
	S1.Push(200);
	S1.Push(300);
	int a;
	S1.Pop(a);
	cout << a << endl;
	S1.Top(a);
	cout << a;
	return 0;
}