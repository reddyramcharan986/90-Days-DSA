# Day 14 — GFG: Peak Element

- **Platform:** GeeksforGeeks
- **Language:** Python
- **Topic:** Binary Search

## Problem
Find a peak element and return its index.

**Problem link:** https://www.geeksforgeeks.org/problems/peak-element/1

## Approach
1. Initialize `low` and `high`.
2. Find the middle index.
3. If the next element is greater, move right.
4. Otherwise, move left, including `mid`.
5. Return the peak index.

## Complexity
- Time: O(log n)
- Space: O(1)
