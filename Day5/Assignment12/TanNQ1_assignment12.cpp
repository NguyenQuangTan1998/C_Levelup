#include <iostream>
#include "MyStack.h"

using namespace std;

int main()
{
    MyStack<int>mystack(6);
    for (int i = 1; i < 5; i++) {
        mystack.push(i);
    }
    while (!mystack.isEmpty()) {
        std::cout << "Top of Stack: " << mystack.peek() << " ";
        mystack.pop();
    }
}
