# Recursion-in-cpp-
# C++ Recursion and String Reversal Programs  

This repository contains two simple C++ programs that demonstrate **recursion** and **string manipulation**.  

---

## What is Recursion?  
Recursion is a programming technique where a function calls itself to solve a smaller instance of the same problem. It is commonly used for problems that can be broken down into repetitive, smaller subproblems, such as factorial, summation, and Fibonacci sequences. The key components of recursion are:  
- **Base Case**: The condition where the recursion stops.  
- **Recursive Case**: The part where the function calls itself.  

---

## Programs Overview  

| File | Objective | Description |
|------|-----------|-------------|
| `sum.cpp` | Summation using Recursion | Calculates the sum of numbers from 1 to n using a recursive function. Demonstrates breaking the problem into smaller subproblems until the base case is reached. |
| `reverse.cpp` | String Reversal | Reverses a given string without using built-in reverse functions. Uses a loop to traverse the string from end to start and constructs the reversed string. |

---

## Algorithms  

### 1. `sum.cpp` – Summation using Recursion  
- **Step 1:** Define function `sum(n)`  
  - If `n <= 1`, return 1 (base case)  
  - Else return `n + sum(n-1)` (recursive case)  
- **Step 2:** In `main()`, take input `n` from user  
- **Step 3:** Call `sum(n)` and print result  

---

### 2. `reverse.cpp` – String Reversal  
- **Step 1:** Define function `reves(string n)`  
  - Initialize an empty string `st1`  
  - Loop from end of `n` to start, appending each character to `st1`  
  - Return `st1`  
- **Step 2:** In `main()`, take input string `n` from user  
- **Step 3:** Call `reves(n)` and print the reversed string  

---

## Concepts Demonstrated  
- Recursion in C++ (`sum.cpp`)  
- String manipulation using loops (`reverse.cpp`)  
- Basic input/output using `cin` and `cout`  
