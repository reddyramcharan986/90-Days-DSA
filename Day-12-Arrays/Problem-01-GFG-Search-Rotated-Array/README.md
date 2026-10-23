# Problem 01 — Search in a Rotated Array

**Platform:** GeeksforGeeks  
**Topic:** Arrays / Binary Search  
**Language:** Python

## 🧠 Approach

1. Find the middle element.
2. If the middle element equals the target, return its index.
3. Identify which half of the array is sorted.
4. Check whether the target belongs in that half.
5. Continue searching in the appropriate half.
6. Return `-1` if the target is absent.

## 💡 Example

**Input:**
```text
arr = [4, 5, 6, 7, 0, 1, 2]
key = 0
```

**Output:**
```text
4
```

## ⏱️ Complexity

- **Time Complexity:** O(log n)
- **Auxiliary Space:** O(1)

## 🔗 Problem

[GeeksforGeeks — Search in a Rotated Array](https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1)
