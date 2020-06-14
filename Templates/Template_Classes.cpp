#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T *stk;
    T top;
    T size;
public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    int pop();
};
template <class T>
void Stack<T>::push(T x)
{
    if(top==size)
        cout << "Stack is full";
    else
    {
        top++;
        stk[top] = x;
    }
}
template <class T>
int Stack<T>::pop()
{
    T x=0;
    if(top==-1)
        cout << "Stack is empty" << endl;
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}

int main()
{
    Stack<int> s(10);
    s.push(10);
    s.push(23);
    s.push(30);
    return 0;
}