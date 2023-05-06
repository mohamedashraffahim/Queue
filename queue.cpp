#include <bits/stdc++.h>
#include "singleLinkedList.h"
using namespace std;
class Queue
{
    sll a;

public:
    Queue() {}
    Queue(int n)
    {
        a.insertAtTail(n);
    }
    void enqueue(int n)
    {
        a.insertAtTail(n);
    }
    void dequeue()
    {
        a.removeAtHead();
    }
    int first()
    {
        return a.retrieveAt(1);
    }
    int QueueSize()
    {
        return a.size();
    }
    bool isEmpty()
    {
        if (a.size() == 0)
            return true;
        return false;
    }
    void clear()
    {
        a.clear();
    }
    friend ostream &operator<<(ostream &out, Queue &a)
    {
        out << a.a;
        return out;
    }
};

int main()
{
    Queue a(1);
    a.enqueue(2);
    a.enqueue(3);
    a.enqueue(4);
    a.enqueue(5);
    a.dequeue();
    cout << a.first() << endl;
    cout << a.QueueSize() << endl;
    cout << a.isEmpty() << endl;
    a.clear();
    cout << a;

    return 0;
}
