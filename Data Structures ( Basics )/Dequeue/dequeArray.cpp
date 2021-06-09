#include <iostream>
using namespace std;
struct Deque {
    int size, cap;
    int *arr;
    Deque(int c)
    {
        size = 0;
        cap = c;
        arr = new int[c];
    }
    bool isFull() { return (cap == size); }
    bool isEmpty() { return (size == 0); }

    void insertFront(int x)
    {
        if(isFull()) { return; }
        for(int i = size-1; i>=0; i++)
        {
            arr[i+1] = arr[i];
        }
        arr[0] = x;
        size++;
    }
    void deleteFront() {
        if(isEmpty()){ return ;}
        for(int i = 0; i<size;i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
    }
    int getFront()
    {
        if(isEmpty()) { return -1; }
        else return arr[0];
    }
    void insertRear(int x) {
        if(isFull()) return;
        arr[size] = x;
        size++;       
    }

    void deleteRear() {
        
        if(isEmpty()){ return; }
        size--;
    }

    int getRear() {
        if(isEmpty()) { return; }
        else return arr[size-1];
    }
};
int main()
{
    

    return 0;
}