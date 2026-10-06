# Problem 02 — Second Largest

**Platform:** GeeksforGeeks  
**Problem:** Second Largest  
**Topic:** Arrays  
**Difficulty:** Easy

## Problem Statement

Given an array of positive integers, find the second largest distinct element in the array.

If the second largest element does not exist, return `-1`.

## Approach

1. Initialize `largest` and `second` as `-1`.
2. Traverse the array.
3. If the current element is greater than `largest`:
   - Store `largest` in `second`.
   - Update `largest`.
4. Otherwise, if the current element is greater than `second` and different from `largest`, update `second`.
5. Return `second`.

## Example

**Input:**
```text
[12, 35, 1, 10, 34, 1]
