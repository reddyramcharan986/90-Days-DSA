# Problem 01 — Array Insert at Index

**Platform:** GeeksforGeeks  
**Topic:** Arrays  
**Language:** Python  
**Difficulty:** Basic

## 🧠 Approach

1. Use Python's built-in `insert()` method.
2. Pass the given index and value.
3. The value is inserted at the specified index, and the remaining elements shift right.
4. Return the updated array.

## 💡 Example

**Input:**
```text
arr = [1, 2, 3, 4, 5]
index = 2
val = 90
```

**Output:**
```text
[1, 2, 90, 3, 4, 5]
```

## ⏱️ Complexity

- **Time Complexity:** O(n) in the worst case
- **Space Complexity:** O(n) in the worst case for Python's list insertion

## 🔗 Problem

[GeeksforGeeks — Array Insert at Index](https://www.geeksforgeeks.org/problems/array-insert-at-index/1)
