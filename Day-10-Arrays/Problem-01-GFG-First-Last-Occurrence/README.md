# Problem 01 — First and Last Occurrences of X

**Platform:** GeeksforGeeks  
**Topic:** Arrays / Searching  
**Language:** Python

## 🧠 Approach

1. Initialize `first` and `last` to `-1`.
2. Traverse the array.
3. When the target `x` is found for the first time, save its index in `first`.
4. Every time `x` appears, update `last`.
5. Return `[first, last]`. If the target is absent, both values remain `-1`.

## 💡 Example

**Input:**
```text
arr = [1, 2, 2, 2, 4]
x = 2
```

**Output:**
```text
[1, 3]
```

## ⏱️ Complexity

- **Time Complexity:** O(n)
- **Auxiliary Space Complexity:** O(1)

## 🔗 Problem

[GeeksforGeeks — First and Last Occurrences of X](https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x/1)
