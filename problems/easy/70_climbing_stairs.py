
# Problem Name: Climbing Stairs
# Difficulty: Easy
# Problem ID: 70
# Tags: Math, Dynamic Programming, Memoization

# Problem Description:
# Write your solution here.

# Solution Implementation Here

class Solution:
    def climbStairs(self, n: int) -> int:
        if(n<=0):
            return 0;
        elif(n<4):
            return n;

        first, second, next = 1, 1, 0;

        for i in range(0, n-1):
            next = first + second;
            first =second;
            second = next;

        return next;

# MAIN
sl = Solution();
result = sl.climbStairs(15);
print(result);
