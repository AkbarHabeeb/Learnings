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
