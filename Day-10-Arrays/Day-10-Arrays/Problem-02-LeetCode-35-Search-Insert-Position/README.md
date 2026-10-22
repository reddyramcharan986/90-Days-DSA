# Problem 02 — Search Insert Position

**Platform:** LeetCode  
**Problem:** #35  
**Topic:** Arrays / Binary Search  
**Language:** C

## 🧠 Approach

1. Initialize `low` to `0` and `high` to the last index.
2. Calculate the middle index.
3. If the middle element equals the target, return its index.
4. If the middle element is smaller than the target, search the right half.
5. Otherwise, search the left half.
6. If the target is absent, return `low`, which is its correct insertion position.

## 💡 Example

**Input:**
```text
nums = [1, 3, 5, 6]
target = 2
```

**Output:**
```text
1
```

## ⏱️ Complexity

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

## 🔗 Problem

[LeetCode #35 — Search Insert Position](https://leetcode.com/problems/search-insert-position/)
