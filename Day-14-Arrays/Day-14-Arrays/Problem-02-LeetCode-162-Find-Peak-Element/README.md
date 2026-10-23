# Day 14 — LeetCode 162: Find Peak Element

- **Platform:** LeetCode
- **Language:** C
- **Topic:** Binary Search

## Problem
Find any peak element and return its index.

**Problem link:** https://leetcode.com/problems/find-peak-element/

## Approach
1. Initialize `low` and `high`.
2. Find the middle index.
3. If `nums[mid] < nums[mid + 1]`, search the right half.
4. Otherwise, search the left half, including `mid`.
5. Return `low` when the search ends.

## Complexity
- Time: O(log n)
- Space: O(1)
