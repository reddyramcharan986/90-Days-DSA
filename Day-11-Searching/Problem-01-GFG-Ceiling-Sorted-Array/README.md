# Problem 01 — Ceiling in a Sorted Array

**Platform:** GeeksforGeeks  
**Topic:** Arrays / Binary Search  
**Language:** Python

## 🧠 Approach

1. Initialize `low` to `0` and `high` to the last index.
2. Calculate the middle index.
3. If `arr[mid] >= x`, save the index and search the left half for a smaller valid index.
4. Otherwise, search the right half.
5. Return the saved index, or `-1` if no valid element exists.

## 💡 Example

**Input:**
```text
arr = [1, 2, 8, 10, 11, 12, 19]
x = 5
```

**Output:**
```text
2
```

## ⏱️ Complexity

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

## 🔗 Problem

[GeeksforGeeks — Ceiling in a Sorted Array](https://www.geeksforgeeks.org/dsa/ceiling-in-a-sorted-array/)
