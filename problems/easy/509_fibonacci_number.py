
# Problem Name: Fibonacci Number
# Difficulty: Easy
# Problem ID: 509
# Tags: Math, Dynamic Programming, Recursion

# Problem Description:
# Write your solution here.

# Solution Implementation Here

class Solution:
    def fib(self, n :int)-> int:
        first, second, temp = 1, 1, 0
        
        if n==1 or n==2:
            return 1
            
        for i in range(n-2):
            print(i)
            temp = first+second
            first = second
            second = temp

        return temp

# Main
sl = Solution();
result = sl.fib(6)
print(result);