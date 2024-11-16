
// Problem Name: Climbing Stairs
// Difficulty: Easy
// Problem ID: 70
// Tags: Math, Dynamic Programming, Memoization

// Problem Description:
// Write your solution here.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int climbStairs(int n){
            if(n <= 0){
                return 0;
            }else if(n<4){
                return n;
            }

            int first = 1;
            int second = 1;
            int next = 0;

            for(int i=0; i< n-1; i++){
                next = first+second;
                first = second;
                second = next;
            }
            return next;
        }
};

int main() {
    Solution sl;
    int result = sl.climbStairs(15);
    cout<<result<<endl;
    return 0;
}
