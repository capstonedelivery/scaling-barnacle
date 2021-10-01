class MyPriorityQueue {

 private int maxSize;
 private int[] queueArray;
 private int numberOfItems;

 //constructor
 public MyPriorityQueue(int maxSize) {
  this.maxSize = maxSize;
  queueArray = new int[maxSize];
numberOfItems = 0; }

 //insert an item to queue
 public void insert(int i) {
  //increment rear and insert item
  if(numberOfItems==0){
    queueArray[numberOfItems] = i;
  } else {
    for(int j=numberOfItems-1; j>=0; j--) {
      if(i > queueArray[j]) {        queueArray[j+1] = queueArray[j];      } else {        break;      }    }    queueArray[++rear] = i;
    nItems++;
  }
 }

 //remove an item from queue
 public int remove() {
  //return item and decrement count
  return queueArray[--numberOfItems]; }

 //view item from top of stack
 public void peek() {
  return queueArray[numberOfItems-1];
 }

 //check if stack is empty
 public void isEmpty() {
  return (numberOfItems == 0);
 }

 //check if stack is full
 public void isFull() {
  return (numberOfItems == maxSize);
 }
}
