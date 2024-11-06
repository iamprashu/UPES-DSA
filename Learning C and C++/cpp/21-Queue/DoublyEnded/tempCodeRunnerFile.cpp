#include<iostream>
using namespace std;

class Dequeue{
    private:
    int* data;
    int size;
    int front;
    int rear;

    public:
    Dequeue(int size){
        this->data = new int[size];
        this->size = size;
        front=-1;
        rear=-1;
    }

    bool isEmpty(){
        return (front==-1)&&(rear==-1);
    }
    
    bool isFull(){
        if( (front == 0 && rear == size-1) || rear == front - 1){
            return true;
        }else{
            return false;
        }
    }

    void PushFront(int value){
        if(isFull()){
            cout<<"Overflow"<<endl;
        }else if(isEmpty()){
            data[++front] = value;
            rear++;
        }else if(front == 0 && rear != size-1){
            front = size-1;
            data[front] = value;
        }else{
            data[--front] = value;
        }
    }

    void PushBack(int value){
        if(isFull()){
            cout<<"Overflow"<<endl;
        }else if(isEmpty()){
            data[++rear] = value;
            front++;
        }else if(front != 0 && rear == size-1){
            rear = 0;
            data[rear] = value;
        }else{
            data[++rear] = value;
        }
    }
    void Print(){
        for(int i=0; i<size; i++){
            cout<<data[i]<<"|";
        }cout<<endl;
    }

    void PopBack(){
        int temp;
        if(isEmpty()){
            cout<<"Underflow"<<endl;
            return;
        }else if(front == rear){
            temp = data[front];
            data[rear--] = -1;
        }else if(rear==0){
            temp = data[rear];
            data[rear] = -1;
            rear = size-1;
        }else{
            temp = data[rear];
            data[rear--] = -1;
        }
        cout<<"Popped Element "<<temp<<endl;
    }

    void PopFront(){
        int temp;
        if(isEmpty()){
            cout<<"Underflow"<<endl;
            return;
        }else if(front == rear){
            temp = data[front];
            data[rear--] = -1;
        }else if(front == size-1){
            temp = data[front];
            data[front] = -1;
            front = 0;
        }else{
            temp = data[front];
            data[front--] = -1;
        }
        cout<<"Popped Element "<<temp<<endl; 
    }
};

int main(){
    Dequeue q(10);
    // cout<<q.isEmpty();
    q.PushFront(1);
    q.Print();
    q.PushFront(12);
    q.Print();
    q.PushFront(13);
    q.Print();
    q.PushFront(15);
    q.Print();
    q.PushFront(16);
    q.Print();
    q.PushBack(92);
    q.Print();
    q.PopBack();
    q.Print();
    q.PushBack(92);
    q.Print();



    return 0;
}

