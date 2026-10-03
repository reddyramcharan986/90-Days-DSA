# 🚀 Problem 02 — Largest Number At Least Twice of Others

**LeetCode:** #747  
**Topic:** Arrays

## 🧠 Approach

1. Find the largest element in the array and store its index.
2. Traverse the array again.
3. Check whether the largest element is at least twice every other element.
4. If the condition is satisfied, return the index of the largest element.
5. Otherwise, return `-1`.

## 💡 Example

### Input
```text
nums = [3, 6, 1, 0]
