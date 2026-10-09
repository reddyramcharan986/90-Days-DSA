# Problem 02 — Find Numbers with Even Number of Digits

**Platform:** LeetCode  
**Problem:** #1295  
**Topic:** Arrays  
**Language:** C

## 🧠 Approach

1. Initialize `count` to zero.
2. Traverse every number in the array.
3. Count its digits using a `while` loop.
4. If the number of digits is even, increase `count`.
5. Return the final count.

## 💡 Example

**Input:**
```text
[12, 345, 2, 6, 7896]
```

**Output:**
```text
2
```

The numbers `12` and `7896` have an even number of digits.

## ⏱️ Complexity

- **Time Complexity:** O(n × d), where `d` is the maximum number of digits in a number.
- **Space Complexity:** O(1)

## 🔗 Problem

[LeetCode #1295 — Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/)
