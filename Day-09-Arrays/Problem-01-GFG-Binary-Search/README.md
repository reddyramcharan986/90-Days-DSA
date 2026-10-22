# Problem 01 — Binary Search

**Platform:** GeeksforGeeks  
**Topic:** Arrays / Searching  
**Language:** Python

## 🧠 Approach

1. Initialize `low` to `0` and `high` to the last index.
2. Calculate the middle index.
3. If the middle element equals the target, save its index and continue searching the left half.
4. If the middle element is smaller, search the right half.
5. Otherwise, search the left half.
6. Return the first matching index, or `-1` if the target is absent.

## 💡 Example

**Input:**
```text
arr = [1, 2, 3, 4, 5]
k = 4
```

**Output:**
```text
3
```

## ⏱️ Complexity

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

## 🔗 Problem

[GeeksforGeeks — Binary Search](https://www.geeksforgeeks.org/problems/binary-search-1587115620/1)
