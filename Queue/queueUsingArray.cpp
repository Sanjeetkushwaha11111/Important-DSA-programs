#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 5

class Queue{
public:
  int front=-1;
  int rear=-1;
  int arr[MAXSIZE];
  int data;

void enqueue(int data){
  if (rear==MAXSIZE-1) {
    std::cout << "Queue Overflow:" << '\n';
  }
  else{
    if (front==-1) front=0;
    rear++;
    arr[rear]=data;
    std::cout << "enqueued "<<data<<'\n';
  }
  return;
}

void dequeue() {
  if (rear==front) {
    front=-1;
    rear--;
    return;
  }else{
    std::cout << "dequeued "<<arr[rear]<<'\n';
    rear--;
  }
  return;
}
void getFront() {
  if (front ==-1 && rear==-1) {
    std::cout << "Queue is empty.";
  }else
  std::cout << "Front is: "<<arr[front] << '\n';
  return;
}

void getRear() {
  if (front ==-1 && rear==-1) {
    return;
  }else
  std::cout << "Rear is :" <<arr[rear] << '\n';
  return;
}
};
int main(int argc, char const *argv[]) {
  Queue Q;
  Q.enqueue(1);
  Q.enqueue(2);
  Q.enqueue(3);
  Q.dequeue();
  Q.getFront();
  Q.getRear();




  return 0;
}
