#include<iostream>

using namespace std;

class Stack
{
private:
    int size;
    int *st;
    int tos;
    static int count;

public:
    friend void viewContent(Stack s); 
    Stack (Stack &z);
    Stack(int s = 10)
    {
        tos = 0;
        size = s;
        count++;
        st = new int [size];
    }
    ~Stack()
    {
        delete [] st;
        count--;
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
    static int getCounter()
    {
        return count;
        
    }
};
int Stack::count = 0;
// copy constructor implementation
Stack :: Stack (Stack &x)
    {
        tos = x.tos;
        size = x.size;
        st = new int [size]; // new allocation instead of copying to avoid changing the main array content
        for(int i = 0; i < tos; i++)
        {
            st[i] = x.st[i];
        }
        count++; 
    };

void viewContent(Stack s)
{
    int t = s.tos; 
    while(t != 0)
    {
        cout << s.st[--t] << endl;
    }
}

int main()
{
    Stack s1(5);
    s1.push(5);
    s1.push(7);
    viewContent(s1);
    cout << s1.pop() << " " << s1.pop() << " " << Stack::getCounter() << endl;

    return 0;
}