# Problem 02 — Remove Element

**Platform:** LeetCode  
**Problem:** #27 — Remove Element  
**Topic:** Arrays  
**Language:** C  
**Difficulty:** Easy

## 🧠 Approach

1. Initialize `k = 0` to track the position for the next element to keep.
2. Traverse the array using `i`.
3. If `nums[i]` is not equal to `val`, copy it to `nums[k]`.
4. Increase `k`.
5. Return `k`, the number of elements that should remain.

The first `k` elements of the array contain the values that are not equal to `val`.

## 💡 Example

**Input:**
```text
nums = [3, 2, 2, 3]
val = 3
```

**Output:**
```text
2
```

The first two elements become `[2, 2]`.

## ⏱️ Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## 🔗 Problem

[LeetCode #27 — Remove Element](https://leetcode.com/problems/remove-element/)
