#include <iostream>
using namespace std;
struct Deque {
    int *arr;
    int front, cap, size;
    Deque(int c)
    {
        front = 0;
        cap = c;
        size = 0;
        arr = new int[c];
    }
    // rear = (front+size-1)%cap;
    void insertRear(int x){
        int rear = (front+size-1)%cap;
        
    }
};
int main()
{
    

    return 0;
}