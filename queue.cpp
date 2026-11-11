#include <iostream>
using namespace std;

int queue[5];
int front = -1, rear = -1;

void enqueue(int x)
{
    if(rear == 4)
        cout << "Queue Overflow\n";
    else
    {
        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
        cout << "Queue Underflow\n";
    else
    {
        cout << "Deleted: " << queue[front] << endl;
        front++;
    }
}

void display()
{
    if(front == -1 || front > rear)
        cout << "Queue is empty";
    else
    {
        for(int i = front; i <= rear; i++)
            cout << queue[i] << " ";
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Queue: ";
    display();

    cout << endl;
    dequeue();

    cout << "After Deletion: ";
    display();

    return 0;
}
