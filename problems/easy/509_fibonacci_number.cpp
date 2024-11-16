
// Problem Name: Fibonacci Number
// Difficulty: Easy
// Problem ID: 509
// Tags: Math, Dynamic Programming, Recursion

// Problem Description:
// Write your solution here.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
    public:
        int fib(int n){
            int first =1;
            int second = 1;
            int temp = 0;

            if(n==1 || n==2)return 1;
            for(int i = 0; i<n-2; i++){
                temp = first + second;
                first = second;
                second = temp;
            }
            return temp;
        }
}

int main() {
    // Your code implementation here

    Solution sl;
    int result = sl.fib(10);

    cout << result << endl;
    return 0;
}
