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
pct = float(input())
pot = float(input())
n = float(input())
x = (1-pct)*(pot) + ((2/n)*pct)
print('%.6f' % x)
```

[Answer Comment Expn](www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/bayes-rules-conditional-probability-chain-rule/tutorial/?scroll-id=comments-563-77&scroll-trigger=inview#c97676)
