/*
Codeforces Round #672 (Div. 2)
Problem: Danik urgently needs rock and lever! Obviously, the easiest way to get these things is to ask 
Hermit Lizard for them. Hermit Lizard agreed to give Danik the lever. But to get a stone, Danik needs 
to solve the following task.
You are given a positive integer n, and an array a of positive integers. The task is to calculate 
the number of such pairs (i,j) that i<j and ai & aj≥ai⊕aj, where & denotes the bitwise AND operation, 
and ⊕ denotes the bitwise XOR operation.
Danik has solved this task. But can you solve it?

Input
Each test contains multiple test cases.
The first line contains one positive integer t(1≤t≤10) denoting the number of test cases. Description 
of the test cases follows.
The first line of each test case contains one positive integer n(1≤n≤105) — length of the array.
The second line contains n positive integers ai (1≤ai≤109) — elements of the array.
It is guaranteed that the sum of n over all test cases does not exceed 105.

Output
For every test case print one non-negative integer — the answer to the problem.

*/
    #include <iostream>
    #include <vector>
    #include <cstring>
    #include <algorithm>
    #include<math.h>
     
    using namespace std;
     
     
    void solve()
    {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      sort(arr,arr+n);
      long long itr=2;
      long long ans=0;
      long long tem=0;
      for(int i=0;i<n;i++)
      {
        if(arr[i]<itr)
        {
          tem++;
        }
        else
        {
          itr*=2;
          if(tem>=2)
          {
            ans+=(((tem-1)*tem)/2);
          }
          tem=0;
          i--;
        }
        
      }
      if(tem>=2)
          {
            ans+=(((tem-1)*tem)/2);
            
          }
      cout<<ans<<"\n";
      }
      
    int main(){
      int t;
      cin>>t;
      while(t--)
      {
         solve();
      }
      return 0;
    }