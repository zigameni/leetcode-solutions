# LeetCode Solutions

A collection of my solutions to LeetCode problems, categorized by difficulty and topic. This repository includes problems I have solved as well as problems I plan to solve. Solutions are implemented in **C++** using various techniques, including dynamic programming, recursion, and greedy algorithms.

## Table of Contents

- [Categories](#categories)
- [Folder Structure](#folder-structure)
- [How to Use](#how-to-use)
- [Contributing](#contributing)
- [License](#license)

## Categories

The problems are categorized into several groups based on their type and complexity. The main categories are:

1. **Fibonacci Style Problems**: Includes problems like `Climbing Stairs`, `Fibonacci Number`, and more.
2. **Matrix Style Problems**: Problems related to matrices, such as `Unique Paths`, `Minimum Path Sum`, and others.
3. **On Strings Style Problems**: Solutions to string manipulation problems, such as `Longest Palindromic Substring` and `Word Break`.
4. **Longest Increasing Subsequence**: Problems that require finding the longest increasing subsequence.
5. **Longest Common Subsequence**: Problems related to finding the longest common subsequence between strings or arrays.
6. **Best Time to Buy & Sell Stock**: Problems that deal with stock market analysis and finding optimal solutions.
7. **On Trees Style Problems**: Includes problems related to binary trees and tree-based dynamic programming.
8. **Knapsack Style Problems**: Includes problems that use dynamic programming to solve knapsack-like problems.
9. **General 1D Style Problems**: Miscellaneous dynamic programming problems that don't fit other categories.

## Folder Structure

The repository follows this structure:

```
leetcode-solutions/
├── README.md                 # This file
├── LICENSE                   # License information
├── problems/                 # Folder containing solutions to problems
│   ├── easy/                 # Easy problems
│   ├── medium/               # Medium problems
│   ├── hard/                 # Hard problems
├── topics/                   # Folder containing various topic-based notes (if applicable)
├── tests/                    # Folder for unit tests (if applicable)
└── requirements.txt          # Dependencies for running the code (if needed)
```

### Problem Folders

- The `problems/` directory is organized by difficulty:
  - `easy/` – Contains easy level problems.
  - `medium/` – Contains medium level problems.
  - `hard/` – Contains hard level problems.

Each file within these folders is named using the following format: 
`<problem_id>_<problem_name>.cpp`

For example:
```
problems/easy/70_climbing_stairs.cpp
problems/medium/198_house_robber.cpp
```

## How to Use

1. **Clone the Repository**:
   ```
   git clone https://github.com/yourusername/leetcode-solutions.git
   ```

2. **Navigate to the Problem Folder**:
   For example, to solve a medium-level problem like "House Robber", navigate to:
   ```
   cd leetcode-solutions/problems/medium
   ```

3. **Compile and Run the Solution**:
   Compile the C++ solution using `g++`:
   ```
   g++ 198_house_robber.cpp -o house_robber
   ```

   Then run the program:
   ```
   ./house_robber
   ```


## License

This repository is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.
