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
We initialise two variables(current_max and max_so_far) with the first element of the array. And then we traverse the array through each element.
The current_max will get updated with the maximum value of (j'th element,current_max+jth element) : This helps us to leave the old sub array which gives less value compared to the new sub array. At the same time, the maximum of all time will be tracked in the max_so_far variable,... compared with the current_max in every iteration.

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
