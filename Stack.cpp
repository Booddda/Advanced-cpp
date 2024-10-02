#include<iostream>

using namespace std;

class Stack
{
private:
    int size;
    int *st;
    int tos;
public:
    Stack(int s = 10)
    {
        tos = 0;
        size = s;
        st = new int [size];
    }
    ~Stack()
    {
        delete [] st;
    }
    void push(int n)
    {
        if(tos == size)
        {
            cout << "Stack is full" << endl;
        }
        else{
            st[tos] = n;
            tos++;
        }
    };
    int pop ()
    {
        int retVal;
        if(tos == 0)
        {
            cout << "Stack is empty" << endl;
            retVal = -1;
        }
        else{
            tos--;
            retVal = st[tos];
        }
        return retVal;
    };
};

int main()
{
    Stack s1(5);
    s1.push(5);
    s1.push(7);
    cout << s1.pop() << " " << s1.pop() << " " << endl;

    return 0;
}