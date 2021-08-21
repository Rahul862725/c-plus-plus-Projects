/*
This project is help begineer to learn the data structure by visualization things.
There are four data structure and their different types and  some important properties are discuss.
1. ARRAY
2. STACK
3. LINKED list
4. QUEUE
For each data structure, project discuss these task
1. Searching
  (i). Linear Search
  (ii). Binary Search
2. Sorting
  (i). Quick Sort
  (ii). Merge Sort
  (iii). Bubble Sort
  (iv). Insertion Sort
3. Deletion
*/


#include<iostream>
#include<iomanip>
#include<windows.h>
#include<unistd.h>
#include<queue>
#define max 20
#define null 0
#define arr for (i = 0; i < n; i++) { cin >> a[i]; }
#define arr2 for (i = 0; i < 3; i++) { cout << "\n"; for (j = 0; j < 4; j++) { cout << b[i][j] << " "; }; }
#define arrp for (k = 0; k < n; k++) { cout << a[k] << setw(2); }
#define qp  for (i = f; i <= l; i++) { cout << a[i] << " "; }
#define artoli  for (i = 0; i < n; i++) { int v = a[i]; add_data(v); }

using namespace std;

class node {
   public:
       node*next;
   int data;
   int po;

};

// This class use for collecting all important methods that use further class
// this is a parent class of all data structure ohter class
class scfunctione {
   static int co;
   node*tail=null;

   int i, j, k;

   int l, u, pi, t;
   public:
       int n;
   int a[10];
   node*head=null;
           void get()
{
   cout << "Enter the number of element in array: ";
   cin >> n;
   cout << "Enter the element: ";
   arr;
}
void bsort(int v)
{

   cout << setw(100) << "********* 2.SOTRTING ********" << endl;
   cout << "Bubble sort: It is a techniques that are work by repeatedly swapping the adjacent element if they are in wrong order." << endl << "Means For arrange in assending order If first node is greater then second consective node then swap these node. " << endl;


   if (v == 1) {

       cout << "In bubble sort the worth and average and best case time comlexity is o(n^2),o(n^2),o(n)" << endl;
       cout << "for practice " << endl;
       get();
       cout << "These are steps involve during sort an element in assending order" << endl;

       for (i = 0; i < n - 1; i++) {
           for (j = 0; j < n - i - 1; j++) {

               if (a[j] > a[j + 1]) {
                   cout << setw(5);
                   sleep(1);
                   arrp;
                   int temp = a[j];
                   a[j] = a[j + 1];
                   a[j + 1] = temp;
                   cout << setw(5);
                   sleep(1);
                   arrp;
               }

           }
           cout << endl;
       }
       cout << endl << "Finally after sorting array " << endl;
       arrp;
   }

}
void quicksor(int v)
{

   cout << setw(100) << "********* 2.SORTING ********" << endl << endl;
   cout << "Quick sort: Quick sort divide and conquaer algorithm use to sort element in array in which  a element is pick as a pivot element" << endl;
   cout << "and set pivot element position in such a way that all small element are come in left side from pivot element " << endl;
   cout << "and big element in right side finally array are break into two part. do similar task  for each partition array " << endl;
   cout << "and finally get the sorting array." << endl << "There are many different version of quick sort that pick pivot in different ways" << endl;
   cout << "The best case time complexity of quick sort is O(n*log(n)) and in worst case O(n*n) " << endl;
   if (v == 1) {


       cout << "For example: in this example pivot element is first element and quick sort is done by stack data structure." << endl << " these are step in quick sort" << endl << endl << "1. Firstly set big index as the first index and small index as the last index" << endl;
       cout << "2.Then compare big index  to the pivot. if big element index is less then or equal to the pivot element then " << endl << "increment the big index by one" << endl << endl;
       cout << "while data[big index]<=data[pivot]" << endl << setw(5) << " big index++" << endl << endl;
       cout << "3.if it is not then compare small index. If small index is greater then pivot element then decrement in small index by one." << endl;
       cout << "while data[small index]>data[pivot]" << endl << setw(5) << " --small index" << endl << endl;
       cout << "4.if it is not check if big index is less then from small index. if it is true then swap big index element to the" << endl << " small index element" << endl;
       cout << "if big index< small index" << endl << setw(5) << " swap data[big index] and data[small index]" << endl << endl;
       cout << "5.and continue these step until small index is grater then big index " << endl;
       cout << "while small index> big index" << endl << endl;
       cout << "6. Finally swap pivot element to small index element and continues these step for next partition array" << endl;
       cout << "For practice: ";

       get();
       u = n - 1;
       l = 0;
       qustack(a, l, u);
       arrp;

   }
}

int partititon(int a[], int l, int u)
{
   int pi = a[l];
   int j = u;
   int i = l + 1;
   while (i <= j) {
       while (a[i] < pi) {
           i++;
       }
       while (a[j] > pi) {
           j--;
       }
       if (i < j) {
           int temp;
           temp = a[j];
           a[j] = a[i];
           a[i] = temp;
       }

   }
   a[l] = a[j];
   a[j] = pi;
   return j;


}
void qustack(int a[], int l, int u)
{
   int st[u - l + 1];
   int top = -1, j;
   st[++top] = l;
   st[++top] = u;
   while (top != -1) {
       u = st[top--];
       l = st[top--];

       j = partititon(a, l, u);
       arrp;
       sleep(1);
       cout << "\n";
       if (l < j - 1) {
           st[++top] = l;
           st[++top] = j - 1;
       }
       if (u > j + 1) {
           st[++top] = j + 1;
           st[++top] = u;
       }

   }
}

void mergesor(int v)
{

   int r, f;

   cout << setw(100) << "********* 2.SOTRTING ********" << endl << endl;
   cout << "Merge sort: Like quick sort merge sort is a divide and conquer algorithm. It divides the input array into two halves, and then  merge the two sorted halves" << endl;
   cout << "The time complexity in best ,worst, and average case are O(n*log(n))" << endl;
   if (v == 1) {
       cout << "In merge sort queue is used for merge two partition array in efficient way in compare of stack" << endl << endl;
       cout << "To do merge sort by help of queue these are the steps of algorithm" << endl << endl;
       cout << "1. Create a merge sort function in which recrusion use for partition of array " << endl << endl << " mergesort(arr,l,r)" << endl << endl << "(1). In merge sort function Firstly find the middle element " << endl << endl;
       cout << setw(30) << " mid=(l+r)/2;  where l is first index and r is last index" << endl << endl;
       cout << "(2). Call the merge sort function for first and second  half of array " << endl << endl;
       cout << setw(30) << " call mergesort(arr,l,m)" << endl << setw(30) << "call mergesort(arr,m+1,r)" << endl << endl;
       cout << " call another merge function to merge all of partition array in sorted order " << endl << endl;
       cout << "2. create a merge function " << endl << endl;
       cout << setw(30) << "(1).Take two queue for compare two partition array element.Firstly enqueue first half of array element into one queue" << endl << " and then store second half on second queue" << endl << endl;
       cout << setw(30) << " set r1=m-l+1 and r2=r-m " << endl << setw(30) << " for(i=0;i<r1;i++) enqueue[q1]=arr[l+i]" << endl << setw(30) << "for(i=0;i<r2;i++) enqueue[q2]=arr[l+i]" << endl << endl;
       cout << "(2).compare front element of q1 to q2 untill both are not empty. if front[q1] i greater then front[q2] then dequeue front[q2] " << endl << setw(30) << "and push on array at index k=l";
       cout << "while (!q1.empty&&q2.empty)" << endl << setw(30) << " if q1.front()>q2.front()" << endl << setw(30) << "arr[k]=dequeue[q2] k++" << endl << setw(30) << "else" << endl << setw(30) << "arr[k]=dequeue[q1] k++" << endl << setw(30) << "while(!q1.empty())" << endl << setw(30) << "arr[k]=dequeue[q1] k++" << endl << setw(30) << "while(!q2.empty())" << endl << setw(30) << "arr[k]=dequeue[q2] k++" << endl << endl;
       cout << "(3).This merge function call until all the partition array are not merge in sorted order" << endl << endl;
       cout << "For practice:" << endl;
       get();
       f = 0; r = n - 1;

       mpart(a, f, r);

       r = n - 1;
       for (i = 0; i <= r; i++) {
           cout << a[i] << " ";
       }
   }

}

void mpart(int qu[], int f, int r)
{
   if (f < r) {

       int mi = (f + r) / 2;
       mpart(qu, f, mi);

       mpart(qu, mi + 1, r);

       merg(qu, f, mi, r);
       sleep(1);
       arrp;
       cout << "\n";

   }
}
void print(int d, int b)
{
   cout << "\n";
   for (i = d; i <= b; i++) {
       cout << a[i] << " ";
   }
}
void merg(int qu[], int f, int m, int r)
{
   int r1 = m - f + 1;
   int r2 = r - m;

   queue < int > q1;
   queue < int > q2;
   for (i = 0; i < r1; i++) {

       int va = qu[f + i];

       q1.push(va);
   }

   for (i = 0; i < r2; i++) {


       int v = qu[m + i + 1];

       q2.push(v);
   }
   int k = f;

   while ((!q1.empty()) && (!q2.empty())) {
       if (q1.front() > q2.front()) {
           qu[k] = q2.front();
           q2.pop();


       }
       else {
           qu[k] = q1.front();
           q1.pop();

       }
       k++;

   }
   while (!q1.empty()) {

       qu[k] = q1.front();

       q1.pop();
       k++;

   }
   while (!q2.empty()) {

       qu[k] = q2.front();
       q2.pop();
       k++;
   }

}
void add_data(int va)
{

   node * nw=new node();
   nw -> data=va;
   nw -> po=co;
   co++;
   nw -> next=null;
   if (head == null) {
       tail = nw;
       head = nw;
   }
   else {
       tail -> next=nw;
       tail = tail -> next;
   }


}
void melinkarr(int v)
{
   cout << setw(100) << "********* 2.SOTRTING ********" << endl << endl;
   cout << "Insertion sort:It is a another type of sorting techniques in which set a key index and compare this key value with its predecessor" << endl << "If key value is greater then its predecessor  then increase the key index otherwise swap the key value with its predecessor" << endl << endl;
   if (v == 1) {
       cout << "In this section Insertion sort are done by linked list" << endl;
       cout << "For doing insertion sort follow these step" << endl;
       cout << "1.Take a array from user and make a link_inserion function to store array in linked list." << endl << endl;
       cout << "2.Make a inestion_sort function by linked list." << endl << endl;
       cout << "set*c=head->next" << endl << "set*t=head" << endl << "[for key value]while(c!=null)" << endl << " set t=head" << endl << setw(12) << "while(t!=c)" << endl << "if(t->data>c->data)" << endl << "swap(t->data ,c->data)" << endl << "t=t->next" << endl << "else" << endl << "t=t->data" << endl << "c=c->next" << endl << endl;
       cout << "3.convert linked list to array and printf array then exit" << endl << endl;
       get();

       artoli;
       node * p= insertionsor();
       link_to_arr(p);
   }
}
void swape(int & s, int & t)
{
   int temp;
   temp = s;
   s = t;
   t = temp;
}
node * insertionsor()
{

   node * c,* t;
   t = head;
   c = head -> next;
   while (c != null) {
       t = head;
       while (t != c) {
           if (t -> data > c -> data) {
               swape(t -> data, c -> data);
               t = t -> next;
           }
           else {
               t = t -> next;
           }

       }
       node * tr=head;
       while (tr != null) {
           cout << tr -> data << " ";
           tr = tr -> next;
       }
       cout<<"    ";
       sleep(1);

       c = c -> next;
   }
   return head;

}
void link_to_arr(node * h)
{
   i = 0;
   while (h != null) {
       a[i] = h -> data;
       i++;
       h = h -> next;
   }

   arrp;
}

};
int scfunctione:: co = 0;


// Class teach array data structure
class arra:public scfunctione
{
   int b[3][4] = {{ 1, 2, 3, 4 }, { 5, 3, 6, 7 }, { 8, 9, 4, 5 }
};
int a[10] = { 2, 3, 1, 5, 8, 8};
int i, j, sv, n;
public:

void get()
{
   cout << "Enter the number of element in array: ";
   cin >> n;
   cout << "Enter the element: ";
   arr;
}
void initial()
{
   int k, t, l = 0;
   system("CLS");
   cout << endl << setw(100) << "*********** ARRAY LEARN ************" << "\n";
   cout << "Array is a linear data structure in which element are store in consective memory location. Array is a  collection of similar data structure. In array indexing are use" << endl;
   cout << "There are various type of array. In general only 1D, 2D, 3D array are use" << endl;
   cout << "1. 1D array: It is a type of linear array accessing  its element involves a  single subscript which can either represent a row and coloum index" << endl << endl;
   cout << "2. 2D array: It is a  type of array in which position of an data element is referred by two indices instead of one. so it is represent a table with raws and coloums" << endl << endl;
   cout << "3. 3D array: A three D array is an array of arrays of arrays. that has consist three dimension insted of one and two" << endl << endl;
   cout << " Array can have three, four and even ten or more dimension. the maximum dimension depend  upon compiler is being used" << endl << endl;
   cout << "Representation of 1D array : " << endl;
   cout << setw(20);
   for (i = 0; i < 6; i++) {
       cout << a[i] << " ";
   }
   cout << "syntex of 1D array is :" << endl << "data type name[ size ]" << endl;
   cout << endl << "Representation of 2D array : " << endl;
   cout << setw(20);
   arr2;
   cout << "syntex of 2D array is :" << endl << "data type name[ size of raw ][size of coloumn]" << endl;
   cout << "Representation of 3D array : " << endl;
   cout << "In 3D array first dimension represent the size of block, second dimension represent the rows of 2D array and third dimension represent the columns of 2D array" << endl << endl;
   cout << "so representation of three dimension array are representation of two 2D array" << endl << endl;
   cout << setw(20);
   arr2;
   cout << "\n";
   arr2;
   cout << endl << endl;

   cout << " There are various algorithm in array out of which three are discuss here " << endl;
   while (l != 1) {
       cout << endl;
       cout << setw(5) << "1. Searching " << endl;
       cout << setw(5) << "2. Sorting " << endl;
       cout << setw(5) << "3. Deletion " << endl;
       cout << setw(5) << "4.Exit from array";

       cout << "Enter your choice " << endl;
       cin >> t;
       switch (t) {
           case 1:
               {
                   system("CLS");
                   searchh();
                   break;
               }
           case 2:
               {
                   system("CLS");
                   sorting();
                   break;
               }
           case 3:
               {
                   system("CLS");
                   deletion();
                   break;
               }
           case 4:
               {
                   l = 1;
                   break;
               }
       }

   }
}
void searchh()
{

   int l, f, mid, co = 0, k = 0, v = 0;
   cout << setw(100) << "******** 1. Searching ********* " << endl;
   cout << "Searching is a method to find a particular element from a set of element.In data structure depend upon type of element order and time complexity" << endl;
   cout << "There are two techniques " << endl << "1. Linear search" << endl << " 2. Binary search " << endl;
   cout << "linear search generaly use in searching a element in a unsorted data elelement with time complexity O(n)" << endl << "BInary search use in searching a element in a sorted data element eith time complexity O(logn)" << endl;

   while (v != 3) {

       cout << "Enter 1: For linear search" << endl;
       cout << "Enter 2: For Binary search" << endl;
       cout << "Enter 3: For exit" << endl;

       cout << " Choose your option: " << endl;

       cin >> v;
       if (v == 1) {
           system("CLS");
           cout << setw(100) << "******** 1. Searching ********* " << endl;

           cout << "Linear search: In linear search the whole array is traverse for finding an element" << endl << setw(5) << " In this  best,worst and average case time complexity iso(1),o(n) o(n)" << endl;
           cout << "By linear search searching does from any type of order data element" << endl;
           cout << "For linear search these are the step" << endl;
           cout << "1.Take the searching element from user then follow this algorithm" << endl << endl;
           cout << "set for(int i=0;i<n;i++)[where n- is the number of element]" << endl << "if(a[i]==sea)[where sea is searching elelemnt]" << endl << "print searching is succesfull else print searching is not succesfull" << endl;
           cout << "For example: ";
           get();

           cout << "Enter the value you want to search: ";
           cin >> sv;
           for (i = 0; i < n; i++) {
               if (a[i] == sv)
                   cout << "value is find at index " << i << endl << setw(5) << "here indexing start from zero ";

           }

       }
       if (v == 2) {
           system("CLS");
           cout << setw(5) << "*********2. BINARY SEARCH **********" << endl;

           cout << setw(5) << "Binary search: Binary search used search in sorted array.In binary search to find the element" << endl << setw(5) << " firstly set first index value in front and last index value in last and then find the middle " << setw(5) << endl << " then compare the mid to the element if element is less the the mid" << endl;
           cout << setw(5) << "then  set last=mid-1 and if it is greater then the mid then set front=mid+1 or if value is equal to" << endl << setw(5) << " mid then print the value. The time complexity is log(n)that is less then linear search " << endl;
           cout << setw(5) << "for example:" << endl;
           get();
           f = 0;
           l = n - 1;
           mid = (l + f) / 2;
           cout << setw(5) << "Enter the value that you want to search: " << endl;
           cin >> sv;
           while (f <= l) {
               cout << endl;
               qp;
               cout << setw(10);
               sleep(1);
               if (a[mid] < sv) {
                   f = mid + 1;
                   mid = (f + l) / 2;
               }
               else if (a[mid] > sv) {
                   l = mid - 1;
                   mid = (l + f) / 2;
               }
               else if (a[mid] == sv) {
                   co++;
                   cout << setw(5) << endl << "indexing of array start with 0 " << endl;
                   cout << setw(5) << "the searching value is find at " << mid << " location" << endl;
                   break;
               }
           }
           if (co == 0)
               cout << setw(5) << "there are no such element is found in this array " << endl;
       }
   }



}
void sorting()
{
   int k = 0;
   cout << setw(100) << "********* 2.SOTRTING ********" << endl;
   cout << "Sorting is a technique to arrange the data in some kind of order.For example a list of words could be sorted alphabetically or by length. There are many type of soritng techniques" << endl << " That are use in programing depend upon their time complexity or sspace complexity " << endl << endl;
   cout << "In general these are some of famous sorting techniques that are use " << endl << endl;
   cout << "1.Quick sort" << endl << "2.Merge sort" << endl << "3.Bubble sort" << endl << "4.Insertion sort" << endl;
   cout << "Time complexity of these sorting techniques are: " << endl << endl;
   cout << " sorting techniques " << setw(30) << " Best case " << setw(30) << " Average case " << setw(30) << " Worst case " << endl << endl;
   cout << " 1. Quick sort      " << setw(30) << "o(nlog(n)) " << setw(30) << " o(nlog(n))   " << setw(30) << " o(n^2)     " << endl << endl;
   cout << " 2. Merge sort      " << setw(30) << "o(nlog(n)) " << setw(30) << " o(nlog(n))   " << setw(30) << " o(nlog(n))  " << endl << endl;
   cout << " 3. Bubble sort     " << setw(30) << "o(n)       " << setw(30) << " o(n^2)       " << setw(30) << " o(n^2)     " << endl << endl;
   cout << " 4. Insertion sort  " << setw(30) << "o(n) " << setw(30) << " o(n^2)   " << setw(30) << " o(n^2)     " << endl << endl;
   bsort(0);
   quicksor(0);
   mergesor(0);
   melinkarr(0);
   cout << endl << " In this module Bubble sort are discuss " << endl;
   while (k != 2) {
       cout << endl;
       cout << "Enter 1: for studying bubble sort" << endl;
       cout << "Enter 2: for exit from here" << endl;
       cout << "Enter your choice: ";
       cin >> k;
       if (k == 1)
           bsort(1);
   }
}
void deletion()
{
   int k = 0;
   system("CLS");
   cout << "******* 3.DELETION ********" << endl;
   cout << "Deletion is a method to delete a particular element from a set of data" << endl;
   while (k != 2) {

       cout << "Enter 1: For styding delete algorithm" << endl;
       cout << "Enter 2: Exit from here" << endl;
       cout << "Enter your choice: " << endl;
       cin >> k;
       if (k == 1) {

           cout << "For deletion an element first traverse the array up to  delete element." << endl << setw(5) << "Then replace this value by next value and doing this continuesly until the last element reach " << endl;
           cout << "Deletion algorithm " << endl;
           cout << "1.Take the element from user that are delete say d" << endl;
           cout << "set for(inti=0;i<n;i++)[where n is the number of element in data elements]" << endl;
           cout << "if(a[i]==d)" << endl << "set j=i" << endl << "while(j!=n-1)" << endl << "a[j]=a[j+1]" << endl << "j++" << endl << "exit";


           cout << "For practice : " << endl;
           get();
           cout << setw(5) << "Enter the element that are deleted: " << endl;
           cin >> sv;
           for (i = 0; i < n; i++) {
               if (a[i] == sv) {
                   j = i;
                   while (j < n - 1) {
                       a[j] = a[j + 1];
                       j++;
                   }
               }
           }

           for (i = 0; i < n - 1; i++)
               cout << setw(5) << a[i] << " ";

       }
   }
}


   };

// Class teach stack data structure
class stacke:public scfunctione
{
   int st[max], i, top = -1, n;
   public:
   void stlr()
   {
       int k, t, l = 0;
       system("CLS");
       cout << setw(100) << "********* STACK LEARN ********* " << endl;
       cout << "Stack is a linear data structure which store data in ordered manner. " << endl;
       cout << "That are work in LIFO(Last in first out) termonology " << endl;
       cout << "Every stack has a variable top which store the address of topmost element." << endl << setw(5) << " In stack  element delete and added only at top, if top =null then stack is empty" << endl;
       cout << "and if top==max-1 then stack is full, where max is the maximum size of stack " << endl;
       cout << "stack can be implemented by array and linked list here we learn by array " << endl << endl;
       cout << "There are many operation in stack. from which some three are discuss here " << endl;


       while (l != 1) {
           cout << endl;
           cout << "1. Searching " << endl;
           cout << "2. Sorting " << endl;
           cout << "3. Deletion " << endl;
           cout << "4. for exit from here " << endl;

           cout << "Enter your choice: " << endl;
           cin >> t;
           switch (t) {
               case 1:
                   {
                       system("CLS");
                       searchh();
                       break;
                   }
               case 2:
                   {
                       system("CLS");
                       sorting();
                       break;
                   }
               case 3:
                   {
                       system("CLS");
                       deletion();
                       break;
                   }
               case 4:
                   {
                       l = 1;
                       break;
                   }
           }

       }

   }
   int pop(int st[])
   {
       int val;
       if (top == -1)
           cout << setw(5) << "stack is underflow " << endl;
       else {
           val = st[top];
           top--;
       }
       return val;
   }
   void push(int st[], int val)
   {
       if (top == max - 1)
           cout << setw(5) << "stack is overflaow " << endl;
       else {
           top++;
           st[top] = val;
       }
   }
   void gets()
   {
       cout << "Enter the number of element in stack: " << endl;
       cin >> n;
       top = n - 1;
       cout << "Enter the element: " << endl;
       for (i = 0; i < n; i++) {
           cin >> st[i];
       }
   }
   void searchh()
   {
       int k;
       system("CLS");
       int n, va, val;
       cout << setw(100) << "******** 1. Searching ********* " << endl;
       cout << "Searching is a method to find a particular element from a set of element.In data structure depend upon type of element order and time complexity" << endl;
       cout << "There are two techniques " << endl << "1. Linear search" << endl << " 2. Binary search " << endl;
       cout << "Linear search generaly use in searching a element in a unsorted data elelement with time complexity O(n)" << endl << "In stack linear search are do but binary search can not do";
       while (k != 2) {
           cout << endl;
           cout << "Enter 1: For styding searching algorithm" << endl;
           cout << "Enter 2: Exit from here" << endl;
           cout << "Enter your choice: " << endl;
           cin >> k;
           if (k == 1) {

               cout << "For searching a element in stack pop operation do in stack until the element is not found " << endl << endl;
               cout << "Searching algorithm" << endl;
               cout << "1.Take the searching value say s from user and then search the element" << endl;
               cout << "set for(i=0;i<=top;i++)" << endl << "set val=pop(st)" << endl << "if(val==s)" << endl << "searhing is sucesfull" << "else searching is not succesfull" << endl;
               cout << "For practice in searching:" << endl;
               gets();
               cout << "Enter the element that are search: " << endl;
               cin >> va;
               for (i = 0; i < n; i++) {
                   val = pop(st);
                   if (val == va) {
                       cout << " value is find at index " << top + 1 << endl;
                       top = n - 1;
                       break;
                   }
               }
               cout << "In this example the desired element index find " << endl;
           }
       }
   }
   void sorting()
   {

       int k;
       cout << setw(100) << "********* 2.SOTRTING ********" << endl;
       cout << "Sorting is a technique to arrange the data in some kind of order.For example a list of words could be sorted alphabetically or by length. There are many type of soritng techniques" << endl << " That are use in programing depend upon their time complexity or sspace complexity " << endl << endl;
       cout << "In general these are some of famous sorting techniques that are use " << endl << endl;
       cout << "1.Quick sort" << endl << "2.Merge sort" << endl << "3.Bubble sort" << endl << "4.Insertion sort" << endl;
       cout << "Time complexity of these sorting techniques are: " << endl << endl;
       cout << " sorting techniques " << setw(30) << " Best case " << setw(30) << " Average case " << setw(30) << " Worst case " << endl << endl;
       cout << " 1. Quick sort      " << setw(30) << "o(nlog(n)) " << setw(30) << " o(nlog(n))   " << setw(30) << " o(n^2)     " << endl << endl;
       cout << " 2. Merge sort      " << setw(30) << "o(nlog(n)) " << setw(30) << " o(nlog(n))   " << setw(30) << " o(nlog(n))  " << endl << endl;
       cout << " 3. Bubble sort     " << setw(30) << "o(n)       " << setw(30) << " o(n^2)       " << setw(30) << " o(n^2)     " << endl << endl;
       cout << " 4. Insertion sort  " << setw(30) << "o(n) " << setw(30) << " o(n^2)   " << setw(30) << " o(n^2)     " << endl << endl;
       quicksor(0);
       mergesor(0);
       bsort(0);
       melinkarr(0);
       cout << endl << "In this module Quick sort are discuss " << endl;
       while (k != 2) {
           cout << endl;

           cout << "Enter 1: For studying Quick sort algorithm" << endl;
           cout << "Enter 2: For exit from here" << endl;
           cout << "Enter your choice: " << endl;
           cin >> k;


           if (k == 1)
               quicksor(1);
       }

   }

   void deletion()
   {
       int k = 0;
       cout << setw(100) << "********* DELETION *********" << endl;
       cout << "In stack deletion an element is done only from top element. so firstly top element are deleted after that other" << endl;
       while (k != 2) {
           cout << endl;
           cout << "Enter 1: For styding delete algorithm" << endl;
           cout << "Enter 2: Exit from here" << endl;
           cout << "Enter your choice: " << endl;
           cin >> k;
           if (k == 1) {

               cout << "To delete a element from stack firstly check stack is empty or not. if stack is empty then write underflow condition otherwise " << endl;
               cout << "store the top element in  a variable for future use and then decrement top by one " << endl << endl;
               cout << "if top==-1" << endl << setw(5) << " print stack underflow" << endl << setw(5) << "else" << endl << setw(5) << "set val=st[top]" << endl << setw(5) << "top--" << endl;
               cout << "for example: ";
               gets();
               int va;
               va = pop(st);
               cout << "stack after pop the " << va << " is" << endl;
               displays();
           }
       }


   }
   void displaya(int a[], int n)
   {
       int i;
       cout << "final array: ";
       for (i = 0; i < n; i++) {
           cout << a[i] << " ";
       }
   }
   void displays()
   {

       for (i = 0; i <= top; i++) {
           cout << st[i] << " ";
       }
   }

};


// Class teach queue data structure
class queueue: public scfunctione
{
   int qu[max] = { 4, 3, 5, 2, 9, 0};
   int i, n, f, r;
   public:

   void intro()
   {
       cout << setw(100) << "********* QUEUE LEARN *********" << endl;
       cout << "Queue is a linear data structure that are store element in ordered manner" << endl << "Queue is a FIFO (first in first out) data structure in which deletion occur at one end" << endl << "called  front and insertion occur at other end called from end" << endl;
       cout << "Array representation of queue is " << endl;
       for (i = 0; i < 6; i++) {

           cout << setw(5) << qu[i] << " ";
       }
       cout << "\n";
       for (i = 0; i < 6; i++) {

           if (i == 0)
               cout << "F";
           else if (i == 5)
               cout << "R";
       }
       cout << "Here F means Front and R means Rear " << endl;

       cout << "In general there are four type of queue: " << endl;
       cout << "1. Simple queue" << endl << "2. Dequeue " << endl << "3.priority queue " << endl << "4.circular queue " << endl;
       cout << "1. Simple queue: it is a type of queue in which insertion are done at rear and deletion are done at front." << endl << " If rear=max-1 then queue is overflow " << endl;
       cout << "2. Dequeue: It is a type of queue in which deletion and insertion are done in both end" << endl;
       cout << "3. Priority queue: It is a type of queue in which every element has priority and depend upon priority insertion and deletion are take place" << endl;
       cout << "4. Circular queue: It is a type of queue in which if rear=max-1 then the next element insert at front if front!=0" << endl;
   }

   void simplq()
   {
       int j = 0;
       system("CLS");
       intro();
       cout << setw(100) << "********* SIMPLE QUEUE *********" << endl;
       cout << "Simple queue is a simple type of queue in which insertion are done at rear and deletion are done at the front " << endl;
       cout << "In a simple queue overflow condition occur when rear=max-1 and underflow condition occur when front=-1" << endl;
       cout << "There are various algorithm array out of which three are discuss here with help of queue " << endl;
       int c;
       while (j != 1) {
           cout << endl;

           cout << "1. Searching " << endl;
           cout << "2. Sorting " << endl;
           cout << "3. Deletion " << endl;
           cout << " 4: For exit" << endl;

           cout << "Enter your choice: ";
           cin >> c;
           switch (c) {
               case 1:
                   {
                       system("CLS");
                       searching();
                       break;
                   }
               case 2:
                   {
                       system("CLS");
                       sorting();
                       break;
                   }
               case 3:
                   {
                       system("CLS");
                       dequeue();
                       break;
                   }
               case 4:
                   {
                       j = 1;
                       break;
                   }

           }

       }


   }

   void get()
   {
       cout << setw(5) << "Enter the number of element in queue: " << endl;
       cin >> n;
       f = 0; r = n - 1;
       cout << setw(5) << "Enter the element: " << endl;
       for (i = 0; i < n; i++) {
           cin >> qu[i];
       }
   }
   void searching()
   {


       cout << setw(100) << "********* SEARCHING **********" << endl;
       cout << "Searching is a method to find a particular element from a set of element." << endl << "In queue searching start from front and go toward rear until desired element are not found" << endl << endl;
       int k = 0;
       while (k != 2) {
           cout << endl;
           cout << "Enter 1:For go to searching algorithm" << endl;
           cout << "Enter 2:Exit from here" << endl;
           cout << "Enter your choice: " << endl;
           cin >> k;
           if (k == 1) {



               cout << "Searching algorithm: " << endl << endl;
               cout << "1.Take the element from user say s and start searching from front" << endl;
               cout << "if(fronte==-1)" << endl << "print queue is empty so no such element in the queue" << endl << "else" << endl << " for(int i=fronte;i<=rear;i++)" << endl << "if(qu[fronte]==s)" << endl << "print seaarch is sucessful" << endl << "else if(fronte==rear+1)" << endl << " print no such element are found" << endl << endl;
               cout << "For practice" << endl;
               get();
               int sv, k = 0;
               cout << "Enter the element that are search: " << "\n";
               cin >> sv;
               if (f == -1) {
                   cout << setw(5) << "queue is empty " << endl;
               }
               else {
                   for (i = f; i <= r; i++) {
                       if (qu[i] == sv) {

                           cout << setw(5) << " element are find at index " << i + 1 << endl;
                           break;
                       }
                       else if (f = r + 1) {
                           cout << "There are no such element are found" << endl;
                       }

                   }
               }

           }
       }
   }
   void sorting()
   {
       int k;
       cout << setw(100) << "********* 2.SOTRTING ********" << endl;
       cout << "Sorting is a technique to arrange the data in some kind of order.For example a list of words could be sorted alphabetically or by length. There are many type of soritng techniques" << endl << " That are use in programing depend upon their time complexity or sspace complexity " << endl << endl;
       cout << "In general these are some of famous sorting techniques that are use " << endl << endl;
       cout << "1.Quick sort" << endl << "2.Merge sort" << endl << "3.Bubble sort" << endl << "4.Insertion sort" << endl;
       cout << "Time complexity of these sorting techniques are: " << endl << endl;
       cout << " sorting techniques " << setw(30) << " Best case " << setw(30) << " Average case " << setw(30) << " Worst case " << endl << endl;
       cout << " 1. Quick sort      " << setw(30) << "o(nlog(n)) " << setw(30) << " o(nlog(n))   " << setw(30) << " o(n^2)     " << endl << endl;
       cout << " 2. Merge sort      " << setw(30) << "o(nlog(n)) " << setw(30) << " o(nlog(n))   " << setw(30) << " o(nlog(n))  " << endl << endl;
       cout << " 3. Bubble sort     " << setw(30) << "o(n)       " << setw(30) << " o(n^2)       " << setw(30) << " o(n^2)     " << endl << endl;
       cout << " 4. Insertion sort  " << setw(30) << "o(n) " << setw(30) << " o(n^2)   " << setw(30) << " o(n^2)     " << endl << endl;
       quicksor(0);

       bsort(0);
       melinkarr(0);

       cout << endl << " In this module mergesor sort are discuss " << endl;
       mergesor(0);
       while (k != 2) {
           cout << endl;
           cout << "Enter 1: For studying merge sort algorithm" << endl;
           cout << "Enter 2: For exit from here" << endl;
           cout << "Enter your choice: " << endl;
           cin >> k;


           if (k == 1)
               mergesor(1);
       }
   }
   void enqueue(int val)
   {
       if (r == max - 1)
           cout << "queue is overflow";
       else if (r == -1) {
           r = 0;
           f = 0;
           qu[r] = val;
       }
       else {
           r++;
           qu[r] = val;
       }
   }
   void dequeue()
   {
       int k = 0, d;
       cout << setw(100) << "********* DELETION *********" << endl;
       cout << " In queue deletion an element is done only from front element. so firstly front element are deleted " << endl;
       while (k != 2) {

           cout << "Enter 1: For styding delete algorithm" << endl;
           cout << "Enter 2: Exit from here" << endl;
           cout << "Enter your choice: " << endl;
           cin >> k;
           if (k == 1) {
               get();
               cout << "To delete the element follow this algorithm" << endl;
               cout << "Take the deleting element from user say d";
               cout << "fristly check that queue is empty or not. if queue is not empty then do further process otherwise go to exit" << endl;
               cout << "if(fronte==-1&& rear==-1)" << endl << "print queue is underflow" << endl << "else" << endl << "while(d!=qu[fronte])" << endl << "fronte++" << endl << "if fronte==rear+1" << endl << "item is not find in queue" << endl << "else" << endl << "print the queue" << endl;
               get();
               cout << "Enter the element that are delete: " << endl;
               cin >> d;
               if (f == -1 && r == -1)
                   cout << "queue is in underflow";
               else if (f == r + 1)
                   cout << "queue is under flow";

               else {
                   while (d != qu[f]) {


                       f++;
                   }
                   if (f == r + 1) {
                       cout << "no shuch elelemnt are find" << endl;
                   }
                   else {
                       for (i = f; i <= r; i++) {
                           cout << qu[i] << " ";
                       }
                   }

               }
           }

       }
   }
};


// Class teach linked list data structure
class linkedlist: public scfunctione
{
   int i;
   public:
   void intro()
   {
       cout << setw(35) << "********* LINKED LIST *********" << endl;
       cout << setw(5) << "A linked list a linear data structure of data elements called nodes in which linear representation is given by links from one node to the next node " << endl << " In linked list a head pointer occur that consist the address of first node ";
       cout << setw(5) << "It used to implement other data structure. Linked list has not consective memory location " << endl;
       cout << setw(5) << "In general there are four type of linked list " << endl << " 1. Simple linked list " << endl << "2. Circular linked list " << endl << "3.Doubly linked list " << endl << "4. Header linked list ";
       cout << setw(5) << "Here give a brief introduction about the" << endl;
       cout << setw(5) << "1. Simple linked list: It is a type of linked list that consist two field. data field and the pointer of next node " << endl << " where head is consist the address of first node and last node contain a pointer null" << endl;
       cout << setw(5) << "2. Circular linked list: It is a type of single linked list in which last node contain the address of first node or head node" << endl;
       cout << setw(5) << "3. Doubly linked list: it is  a type of linked list that consist three field. one is data field,second is next pointer and" << endl << "third contain the pointer of previous node address" << endl;
       cout << setw(5) << "4. Header linked list: it is a type of linked list that contain a extra node that contain the extra information about" << endl << " all type of linked list " << endl;
       cout << setw(5) << "linked list represent like that " << endl;
       int j = 0, c;
       while (j != 1) {
           cout << endl;

           cout << "1. Searching " << endl;
           cout << "2. Sorting " << endl;
           cout << "3. Deletion " << endl;
           cout << " 4: For exit" << endl;

           cout << "Enter your choice: ";
           cin >> c;
           switch (c) {
               case 1:
                   {
                       system("CLS");
                       searching();
                       break;
                   }
               case 2:
                   {
                       system("CLS");
                       sorting();
                       break;
                   }
               case 3:
                   {
                       system("CLS");
                       deletion();
                       break;
                   }
               case 4:
                   {
                       j = 1;
                       break;
                   }

           }

       }

   }
   void searching()
   {
       system("CLS");
       cout << setw(100) << "********* SEARCHING **********" << endl;
       cout << "Searching is a method to find a particular element from a set of element." << endl << "In linked list for searching traverse the whole linked list from head until desired element are not found" << endl << endl;

       int k = 0;
       while (k != 2) {
           cout << "Enter 1:For go to searching algorithm" << endl;
           cout << "Enter 2:Exit from here" << endl;
           cout << "Enter your choice: " << endl;
           cin >> k;
           if (k == 1) {



               cout << "Searching algorithm: " << endl << endl;
               cout << "1.Take the element from user say s and start searching from head" << endl;
               cout << "if(head==null)" << endl << " print linked list is empty sl no such element are found" << endl << "else" << endl << "set while(head!=null)" << endl << "if(head->data==s)" << endl << "print searching is succesfull" << endl << "head=head->next" << endl << "else head=head->next" << endl << "if element are not found then print searching is unsuccesfull " << endl << endl;
               get();
               artoli;
               int s, c = 0;
               cout << "Enter the element that are search: " << endl;
               cin >> s;
               node * t=head;
               if (t == null)
                   cout << "linked list are empty so there are no such element are found" << endl;
               else {
                   while (t != null) {
                       if (t -> data == s) {
                           c++;
                           cout << "search is succesfull " << endl;
                           t = t -> next;
                       }
                       else {
                           t = t -> next;
                       }

                   }
                   if (c == 0)
                       cout << "No such element are found" << endl;
               }
           }
       }
   }
   void sorting()
   {
       int k;
       cout << setw(100) << "********* 2.SOTRTING ********" << endl;
       cout << "Sorting is a technique to arrange the data in some kind of order.For example a list of words could be sorted alphabetically or by length. There are many type of soritng techniques" << endl << " That are use in programing depend upon their time complexity or sspace complexity " << endl << endl;
       cout << "In general these are some of famous sorting techniques that are use " << endl << endl;
       cout << "1.Quick sort" << endl << "2.Merge sort" << endl << "3.Bubble sort" << endl << "4.Insertion sort" << endl;
       cout << " Time complexity of these sorting techniques are: " << endl << endl;
       cout << " sorting techniques " << setw(30) << " Best case " << setw(30) << " Average case " << setw(30) << " Worst case " << endl << endl;
       cout << " 1. Quick sort      " << setw(30) << "o(nlog(n)) " << setw(30) << " o(nlog(n))   " << setw(30) << " o(n^2)     " << endl << endl;
       cout << " 2. Merge sort      " << setw(30) << "o(nlog(n)) " << setw(30) << " o(nlog(n))   " << setw(30) << " o(nlog(n))  " << endl << endl;
       cout << " 3. Bubble sort     " << setw(30) << "o(n)       " << setw(30) << " o(n^2)       " << setw(30) << " o(n^2)     " << endl << endl;
       cout << " 4. Insertion sort  " << setw(30) << "o(n) " << setw(30) << " o(n^2)   " << setw(30) << " o(n^2)     " << endl << endl;
       quicksor(0);
       mergesor(0);
       bsort(0);
       melinkarr(0);

       cout << endl << "In this module insertion sort are discuss " << endl;

       while (k != 2) {
           cout << endl;
           cout << "Enter 1: For studying insertion sort algorithm" << endl;
           cout << "Enter 2: For exit from here" << endl;
           cout << "Enter your choice: " << endl;
           cin >> k;


           if (k == 1)
               melinkarr(1);
       }
   }
   void deletion()
   {
       system("CLS");
       int k = 0, d, p;
       cout << setw(100) << "********* DELETION *********" << endl;
       cout << "In linked list deletion an element is done from anywhere. so user give a position of element" << endl;
       while (k != 2) {
           cout << endl;

           cout << "Enter 1: For styding delete algorithm" << endl;
           cout << "Enter 2: Exit from here" << endl;
           cout << "Enter your choice: " << endl;
           cin >> k;
           if (k == 1) {
               cout << "Deletion algorithm in linked list" << endl;
               cout << "1.Take the position of delete element from user say po and follow following stps and set a previous pointer say pr=null" << endl;
               cout << "if(head==null)" << endl << "linked list are empty" << endl << "else" << endl << "set while(head!=null)" << endl << "if(head->position==po)" << endl << endl;


               cout << " after that to delete a element from linked list at position po There are three condition" << endl << endl;
               cout << "(1). If the element are in first position then" << endl << endl;
               cout << "if(t->po==0)" << endl << "set pointer temp=t" << endl << "head=t->next" << endl << "t=t->next" << endl << "free(temp)" << endl << endl;
               cout << "(2).if the element are in the last then" << endl << endl;
               cout << "else if(t->next==null)" << endl << "set temp=t" << endl << "pr->next=null" << endl << "t=t->next" << endl << "free(temp)" << endl << endl;
               cout << "else" << endl << "set temp=t" << endl << "pr->next=t->next" << endl << "t=t->next" << endl << "free(temp)" << endl << endl;
               cout << "else" << "pr=t" << endl << "t=t->next" << endl << "after complition while loop the desired elemnt has deleted" << endl << endl << "2.Exit" << endl;
               cout << "For practice: " << endl;
               get();
               artoli;
               cout << "Enter the position from which element are delete: " << endl;
               cin >> p;
               node * t=head;
               node * pr=null;
               node * temp;

               while (t != null) {
                   cout << endl;
                   if (t -> po == p) {
                       if (t -> po == 0) {
                           temp = t;
                           head = t -> next;
                           t = t -> next;
                           free(temp);
                       }
                       else if (t -> next == null) {
                           temp = t;
                           pr -> next=null;
                           t = t -> next;
                           free(temp);
                       }
                       else {


                           temp = t;
                           pr -> next=t -> next;
                           t = t -> next;
                           free(temp);
                       }
                   }
                   else {
                       pr = t;
                       t = t -> next;
                   }
               }
           }
       }
   }

};
void str(string & st, string fn)
{
   int l = st.length();
   int i;
   for (i = 0; i < l; i++) {
       st[i] = fn[i];
   }

}


void getclass()
{
   arra s;
   stacke d;
   queueue f;
   linkedlist c;
   int l = 0, k;
   while (l != 5) {

       system("CLS");
       cout << "Enter 1: Go to study the array data structure" << endl;
       cout << "Enter 2: Go to study the stack data structure" << endl;
       cout << "Enter 3: Go to study the queue data structure" << endl;
       cout << "Enter 4: Go to study the linked list data structure" << endl;
       cout << "Enter 5: Exit" << endl;
       cout << "Choose your option: " << endl;
       cin >> k;
       switch (k) {
           case 1:
               {
                   system("CLS");
                   s.initial();
                   break;
               }
           case 2:
               {
                   system("CLS");
                   d.stlr();
                   break;
               }
           case 3:
               {
                   system("CLS");
                   f.simplq();
               }
           case 4:
               {
                   system("CLS");
                   c.intro();
               }
           case 5:
               {
                   l = 5;
                   break;
               }
       }
   }
}

int main()
{
   getclass();
}
