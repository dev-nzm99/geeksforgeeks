class myQueue {
  int* arr;
  int capacity;
  int currSize;
  public:
    myQueue(int n) {
        this->capacity = n;
        arr = new int[this->capacity];
        currSize = 0;
    }

    bool isEmpty() {
        return currSize == 0;
    }

    bool isFull() {
        return currSize == capacity;
    }

    void enqueue(int x) {
        if(isFull())return;
        arr[currSize++] = x;
    }

    void dequeue() {
        if(isEmpty())return;
        for(int i =1; i<currSize; i++) arr[i-1] = arr[i];
        currSize--;
    }

    int getFront() {
        if(isEmpty()) return -1;
        return arr[0];
    }

    int getRear() {
        if(isEmpty())return -1;
        return arr[currSize-1];
    }
};