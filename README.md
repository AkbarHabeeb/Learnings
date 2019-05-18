## Day 1
#### Kadane Algorithm :
This algorithm helps us to find the largest sum of contiguous elements. It falls under dynamic programming category.
Running time : O(n)

```c++
/**
 * 
 * Kadane Algorithm
 * 
**/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int curr_max,max_so_far;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];   
    }
    curr_max = a[0];
    max_so_far = a[0];
    for(int j=1;j<n;j++)
    {
        curr_max = max(a[j],curr_max+a[j]);
        cout<<"Current_max of iteration "<<j<<" : "<<curr_max<<endl;
        max_so_far = max(curr_max,max_so_far);
        cout<<"Max_so_far of iteration "<<j<<" : "<<max_so_far<<endl;
    }
    cout<<"\nAnswer :"<<max_so_far;
    return 0;
}
```

##### Explanation :
We initialise two variables(current_max and max_so_far) with the first element of the array. And then we traverse the array through each element. The current_max will get updated with the maximum value of (j'th element,current_max+jth element) : This helps us to leave the old sub array which gives less value compared to the new sub array. At the same time, the maximum of all time will be tracked in the max_so_far variable,... compared with the current_max in every iteration.

```
Input:
10
-2 2 3 -7 -8 5 5 5 5 -1
```


```Expln_output
Current_max of iteration 1 : 2
Max_so_far of iteration 1 : 2
Current_max of iteration 2 : 5
Max_so_far of iteration 2 : 5
Current_max of iteration 3 : -2
Max_so_far of iteration 3 : 5
Current_max of iteration 4 : -8
Max_so_far of iteration 4 : 5
Current_max of iteration 5 : 5
Max_so_far of iteration 5 : 5
Current_max of iteration 6 : 10
Max_so_far of iteration 6 : 10
Current_max of iteration 7 : 15
Max_so_far of iteration 7 : 15
Current_max of iteration 8 : 20
Max_so_far of iteration 8 : 20
Current_max of iteration 9 : 19
Max_so_far of iteration 9 : 20

Answer :20
```

[Link - Question](https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0)

[Link - Video](https://www.youtube.com/watch?v=OexQs_cYgAQ)


## Day 2
#### Machine Learning (1)

Trial or Experiment : The act that leads to a result with certain possibility.
Sample space        : The set of all possible outcomes of an experiment.
Event               : Non empty subset of sample space is known as event.

**Complement** of a probabilty(P(a)) will be given by : (1 - P(a))

**Mutually exclusive**  : Any two events are mutually exclusive when they have non-overlapping outcomes. if A and B are two mutually exclusive events then intersection of a and b will be zero.

Eg : Prob. of getting a queen from a deck of cards and prob. of getting a king.

**Independent**         : Any two events are independent of each other if one has zero effect on the other i.e. the occurrence of one event doe not affect the occurrence of the other. If A and B are two independent events then, the intersection two events will be _product of probability of two events_. 

Eg : prob. of getting a red ball from bag 1 and prob. of gettig a black ball from bag 2.

#### Marginal Probability 
The probability of an event occurring (p(A)), it may be thought of as an unconditional probability. It is not conditioned on another event. Exapmle : The probability that a card drawn is red (p(red) = 0.5).  Another example:  the probability that a card drawn is a 4  (p(four)=1/13).

#### Joint Probability
The probability of event A **and** event B occurring.  It is the probability of the intersection of two or more events.  The probability of the intersection of A and B may be written p(A ∩ B). Example: The probability that a card is a four and red =p(four and red) = 2/52 = 1/26.

#### Conditional Probability
P(A|B) is the probability of event A occurring, given that event B occurs. Example:  given that you drew a red card, what’s the probability that it’s a four (p(four|red))=2/26=1/13.  So out of the 26 red cards (given a red card), there are two fours so 2/26=1/13.


[Question Link](https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/basic-probability-models-and-rules/tutorial/)

```python
#Output
pmb = float(input())
pab = float(input())
pr  = float(input())
a = (pr * (pab *(1-pmb) + pmb*(1-pab))) 
print('%.6f'%a)
```


Probability of intersection of two events can be written as product of prob. of event a occurs and prob. of event b occurs while event a already occured.

[Question](https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/bayes-rules-conditional-probability-chain-rule/tutorial/)

```python
#output
pct = float(input())
pot = float(input())
n = float(input())
x = (1-pct)*(pot) + ((2/n)*pct)
print('%.6f' % x)
```

[Answer Explanation](www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/bayes-rules-conditional-probability-chain-rule/tutorial/?scroll-id=comments-563-77&scroll-trigger=inview#c97676)


[Discrete Random Variables](https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/discrete-random-variables/tutorial/)
```python
#output
n = float(input())
ans = (n/((1-n)**2))
print('%.6f' %ans)
```

### Numpy Tutorial
Go through the code along with the comments
```python
#15-Jan-2019
#Spyder_IDE [numpy]

#Importing the library. 'as np' was a short form to use, similiar to alias.
import numpy as np

#It creates a list wgich contains 0 to n-1 
# A list can have data of different type
l = list(range(5))
print(l)
#output (o/p)
# [0, 1, 2, 3, 4]

#List Comprehension
# We can do any operation on each element of the list, using the below structure. 
[print(i,end=" ") for i in l]
#(o/p) : 0 1 2 3 4 
#Equivalent of :
#for i in l:
#    print(i,end=" ")
#It is a kind of for each loop

#Creating an array of size 2*2 with all values as 1.54
a = np.full((2,2),1.54)
print(a)
# o/p
#[[ 1.54  1.54]
# [ 1.54  1.54]]

#Creating an array of size 2*2 of type int with all values as 0
a = np.zeros((2,2),dtype=int)
print(a)
# o/p : 
# [[0 0],
#  [0 0]]

#Creating an array of size 3*3 of type int with all values as 1
a = np.ones((3,3),dtype=int)
print(a)
# o/p
#[[1 1 1]
# [1 1 1]
# [1 1 1]]

#Creating an array which has elements in equal interval of 1.5
a = np.arange(10,20,1.5,dtype=float)
print(a)
# o/p
# [ 10.   11.5  13.   14.5  16.   17.5  19. ]

#To create an array which holds data between any interval. Here between 0 and 1. Dividing it into 5 intervals
a = np.linspace(0, 1, 5)
print(a)
# o/p : [ 0.    0.25  0.5   0.75  1.  ]

#To create a 2*2 array with mean 0 and standard deviation 1 in a given dimension
a = np.random.normal(0, 1, (2,2))
print(a)
# o/p
#[[-0.80851921  2.15236423]
# [-2.6210142  -0.34512231]]


#To create an identity matrix
a = np.eye(2,dtype=int)
print(a)
# o/p :
# [[1 0]
# [0 1]]

#self_explanatory
a = np.random.randint(100,200)
b = np.random.randint(10,20,size=(3,3))
print(a,b)
# o/p:
# 112 [[11 16 17]
# [17 18 11]
# [15 19 18]]


print(b.ndim) # Gives the dimension of b
print(b.size) 
print(b.shape)
# o/p :
# 2
# 9
# (3, 3)

#Creating an array
a = np.array([1, 2, 3, 4])
print(a)
# o/p : [1 2 3 4]
#Indexing starts at 0
print(a[0],a[-4],a[1],a[-3],a[2],a[-2],a[3],a[-1])
#a[-1] will give the last element from the array. a[-2] gives second last

a = np.array([[1,2],[3,4]])
print(a[1][1],a[1,1])
# o/p : 4 4
# Both a[1][1] and a[1,1] is valid
# Negative nos works the same way in python



#Array Slicing
a = np.arange(10)
print(a)        #Entire array  (a[:])       [0 1 2 3 4 5 6 7 8 9]
print(a[:6])    #Starting to 5th position   [0 1 2 3 4 5]
print(a[3:])    #3rd to last position       [3 4 5 6 7 8 9]
print(a[2:8])   #2nd to 7th position        [2 3 4 5 6 7]
print(a[::-1])  #reversing the array        [9 8 7 6 5 4 3 2 1 0] 
# Above method was costiler because, the shallow(duplicate) copy of array will be used, 
# which will be using the reference from the original array
print(a[::3])   #Printing only the every third element [0 3 6 9]
print(a[2::3])  #Hop by 3                   [2 5 8]

b = np.concatenate([a,a])
print(b) #o/p : [0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9]

a = np.array([[1,2,3],[4,5,6]])
print(np.concatenate([a,a]))       
# [[1 2 3]
# [4 5 6]
# [1 2 3]
# [4 5 6]]                 
print(np.concatenate([a,a],axis=1))       
#[[1 2 3 1 2 3]
# [4 5 6 4 5 6]]
# Axis can be used only for 2 or more dim matrix
# concatenate will work fine only for same dim matrix
print(np.hstack([a,    [ [10], [10] ]    ]))
# o/p:
#[[ 1  2  3 10]
# [ 4  5  6 10]]
print(np.vstack([a,    [ [10,10,10] ]    ]))
# o/p:
#[[ 1  2  3]
# [ 4  5  6]
# [10 10 10]]
```
Here is the wonderful source for getting started with pandas and numpy. Thanks a lot to HackerEarth. 

[Link to HacerEarth](https://www.hackerearth.com/practice/machine-learning/data-manipulation-visualisation-r-python/tutorial-data-manipulation-numpy-pandas-python/tutorial/)


## Day 3

- Today, I gone through the **Bishop book for Pattern Recognition and Machine Learning**. Pg No : 137 - 141
- Networked with LLVM people
- Started implementing a Caculator Interpreter (Using Lex and Yacc)


## Day 4
Linked List
Arrays will have the great advantage of spatial locality. This will benifit them from the easy fast access.(Good caching methods) 
- Wasted memory in Dynamic array will be O(n) - In worst case
- Wasted memory in array will be 0
- Wasted memory in list will be O(n)

**Linked List**
```c++
struct ListNode
{
    int data;
    struct ListNode *next;
}
```
**Basic Operations in the list**
- Insertion
- Deletion

**auxillary operations in the list**
- Traversing
- Deleting the entire list
- Length of the list

#### Insertion
- Insertion at the beginning
- Insertion at middle
- Insertion at end of the list

we need to update the first element pointer(head) in the entire program not just in the called function. So it will be passed using double pointer (pointer to pointer). It helps to maintain the changes in the original location.

**Linked List program for insertion**
```c++
#include <bits/stdc++.h> 
using namespace std; 
struct ListNode
{
    int data;
    struct ListNode *next;
};

void insert(struct ListNode **head, int data, int position)
{
    int k = 1;
    struct ListNode *p,*q,*newNode;
    newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(!newNode)
    {
        cout<<"Error";
        return;
    }
    p = *head;  //We need it, while insert at the middle
    newNode->data = data;
    if(position==1)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        while(p!=NULL && k < position)
        {
            k++;
            q = p;
            p = p->next;
        }
        q->next = newNode;
        newNode->next = p;
    }
    return;
}

void printList(struct ListNode *head)
{
    if(head == NULL)    
    {
        cout<<"Empty List";
    }
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    struct ListNode *head = NULL;
    insert(&head,1,1);
    insert(&head,2,2);
    insert(&head,3,3);
    insert(&head,4,4);
    printList(head);
    return 0;
}
```

## Day 5

**Deletion in a linked list**
#### Deletion
- Delete the beginning node
- Delete the final node
- Delete the specified position node

```c++
//It needs the position of the list to be deleted
void deleteNode(struct ListNode **head, int position)
{
    int k = 1;
    struct ListNode *p,*q;
    if(*head == NULL)
    {
        cout<<"Empty List";
        return;
    }
    p = *head;  //We need it for pointing it after edleting in the middle.
    if(position==1)
    {
        *head = (*head)->next;  
        //We use (*head)->next bcoz we are trying to access the List, which is passed as a double pointer.
        free(p);
    }
    else
    {
        while(p!=NULL && k < position)
        {
            k++;
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);
    }
    return;
}
```

**Deleting the entire list**
```c++
void deleteList(struct ListNode **head)
{
    struct ListNode *iterator = *head;
    while(iterator != NULL)
    {
        *head = (*head)->next;
        free(iterator);
        iterator = *head;
    }
    *head = NULL;
}
```
**Length of a Linked List**
```c++
int ListLength(struct ListNode *head)
{
    int count = 0;
    while(head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}
```

**searching an element in singly list : Iterative**
```c++
bool search(struct ListNode *head, int data)
{
    if(head == NULL)
    {
        return false;
    }
    while(head != NULL)
    {
        if(head->data == data)
            return true;
        else
        {
            head = head->next;
        }
    }
    return false;
}
```
**searching an element in singly list : Recursive**
```c++
bool searchRecursive(struct ListNode *head, int data)
{
    if(head == NULL)
    {
        return false;
    }
    if(head->data == data)
        return true;
    else
        searchRecursive(head->next,data);
    //In searchRecursive there shld be recursion elimination condition
    //and No return at the end.
}
```

#### Difference between C and C++ in list implementation
List structure _C_
```c
struct ListNode
{
    int data;
    struct ListNode *next;
};
```
List structure _C++_
```c++
class ListNode
{
    public:
    int data;
    ListNode *next;
};
```
Initialising the node structure:
```c++
//C
struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
//c++
ListNode *p = new ListNode();
```
**Getting the Nth node from beginning**
Indexing starts at 1
If we are choosing recursive method, then the index value should get decremented everytime
```c++
int getNthElement(struct ListNode *head, int index)
{
    int count = 1;
    while(head != NULL)
    {
        if(count == index)
            return head->data;
        count++;
        head = head->next;
    }
    assert(0); //It will abort the program assert.h
    //return '$';   Bad idea
}
```
**Getting the Nth node from last** (Using the length of the liked List)
Indexing starts at 1
```c++
int NthNodefromEnd(struct ListNode *head,int index)
{
    int length = ListLength(head);
    length = length - index + 1; //Indexing starts from 1 
    int count = 1 ;
    while(head != NULL)
    {
        if(count == length)
            return head->data;
        count++;
        head = head->next;
    }
    assert(0);
}

//Function call will be 
cout<<NthNodefromEnd(head,6)<<endl;  
cout<<NthNodefromEnd(head,1)<<endl;
//We cant give the position as 0 since index starts at 1, and for index greater the the available the program will abort.
```

(Using 2 pointers)
- point1 will be moved to N node from start
- Then, both point1 and point2 will be moved one by one until the point1 reaches the end.
- Now the data will be there in the point2's data
```c++
int NthNodefromEnd(struct ListNode *head , int index)
{
    struct ListNode *point1 = head;
    struct ListNode *point2 = head;
    int count = 1;
    while(point1 != NULL)
    {
        if(count == index)
            break;
        point1 = point1->next;
        count++;
    }
    while(point2 != NULL)
    {
        if(point1->next == NULL)  
        //Rather than using the next == NULL, we can make the previous while loop to run 
        //one time lesser. ie. count < index ...
        {
            return point2->data;
        }
        point1 = point1->next;
        point2 = point2->next;
    }
    assert(0);
}
```
**Middle node of the List**
We can find th emiddle Node using the following ways
1. Find the length of the node and return the count/2 th node
2. Use two pointers to traverse the node (1 Jump and 2 Jump)
3.Traverse the list, move to the next node only for odd number node's. So that, when hed reaches the end, we would have moved just the half distance.
Method 3:
```c++
int middleNode(struct ListNode *head)
{
    int count = 0;
    struct ListNode *mid = head;
    while(head != NULL)
    {
        if(count%2 == 1)
        {
            mid = mid->next;
            head = head->next;
            count++;
        }
        else
        {
            head = head->next;
            count++;
        }
    }
    return mid->data;
}
```

**Doubly Linked List**
Insertion
```c++
#include <bits/stdc++.h>
using namespace std;

struct DListNode
{
    int data;
    struct DListNode *prev;
    struct DListNode *next;
};

void insert(struct DListNode **head, int data, int position)
{
    int k = 1;
    struct DListNode *temp, *newNode;
    newNode = (struct DListNode *)malloc(sizeof(struct DListNode));
    if(!newNode)
    {
        cout<<"Error";
        return;
    }
    newNode->data = data;
    if(position == 1)
    {
        newNode->next = *head;
        newNode->prev = NULL;
        if(*head)
            (*head)->prev = newNode;            //Used when there is already nodes in the list
        *head = newNode;
        return;
    }
    temp = *head;
    while(k < (position -1) && temp->next != NULL)  
    //position -1 is important bcoz, it helps us to handle the 
    //insertion at the end
    {
        k++;
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if(temp->next)                              //Used when we are not inserting at the end of the list
        temp->next->prev = newNode;
    temp->next = newNode;
    return;
}

void printDList(struct DListNode *head)
{
    if(head == NULL)
    {
        cout<<"Empty List";
    }
    while(head != NULL)
    {
        cout<<head->data;
        head = head->next;
    }
    return;
}

int main() 
{
    struct DListNode *head = NULL;
    insert(&head,1,1);
    insert(&head,2,2);
    insert(&head,3,3);
    insert(&head,4,4);
    insert(&head,5,5);
    insert(&head,6,6);
    printDList(head);
    return 1;
}
```

**Deletion in Doubly linked List**
```c++
void deleteList(struct DListNode **head, int position)
{
    int k = 1;
    struct DListNode *temp,*temp2;
    if(*head == NULL)
    {
        cout<<"Empty List";
        return;
    }
    temp = *head;
    if(position == 1)
    {
        *head = (*head)->next;
        if(*head != NULL)
        {
            (*head)->prev = NULL;
        }
        free(temp);
        return;
    }
    while(k < position && temp->next != NULL)
    {
        k++;
        temp = temp->next;
    }
    temp2 = temp->prev;  //Storing the value
    temp2->next = temp->next;
    if(temp->next)
        temp->next->prev = temp2;
    free(temp);
    return;
}
```

## Day 6
Completed the interactive course on Kaggle.
(Introduction to ML, Seaborn, Intermediate Machine Learning)

## Day 7
Read 45 pages about Web scraping using python. (BeautifulSoap library)
I did this, since I am need of web scraping technology to get data for my cricket world cup predictor model.
