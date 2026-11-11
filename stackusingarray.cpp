#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int x)
{
    if(top == 4)
        cout << "Stack Overflow\n";
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if(top == -1)
        cout << "Stack Underflow\n";
    else
    {
        cout << "Deleted: " << stack[top] << endl;
        top--;
    }
}

void display()
{
    for(int i = top; i >= 0; i--)
        cout << stack[i] << " ";
}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << "Stack: ";
    display();

    cout << endl;
    pop();

    cout << "After Pop: ";
    display();

    return 0;
}
