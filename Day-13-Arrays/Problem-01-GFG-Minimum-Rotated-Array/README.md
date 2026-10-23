# Day 13 — GFG: Minimum Number in a Sorted Rotated Array

**Platform:** GeeksforGeeks  
**Language:** Python  
**Topic:** Arrays and Binary Search

## Problem
Find the minimum element in a sorted array that has been rotated.

**Problem link:** https://www.geeksforgeeks.org/problems/minimum-number-in-a-sorted-rotated-array-1587115620/1

## Approach
1. Initialize `low` and `high`.
2. Find the middle element.
3. If the middle element is greater than the last element, search the right half.
4. Otherwise, search the left half, including the middle element.
5. Return the element at `low`.

## Complexity
- **Time:** O(log n)
- **Space:** O(1)
