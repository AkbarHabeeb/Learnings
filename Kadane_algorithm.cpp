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
