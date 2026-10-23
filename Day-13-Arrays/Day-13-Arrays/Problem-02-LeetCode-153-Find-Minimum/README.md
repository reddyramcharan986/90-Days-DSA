# Day 13 — LeetCode 153: Find Minimum in Rotated Sorted Array

**Platform:** LeetCode  
**Language:** C  
**Topic:** Arrays and Binary Search

## Problem
Find the minimum element in a rotated sorted array containing unique elements.

**Problem link:** https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

## Approach
1. Set `low = 0` and `high = numsSize - 1`.
2. Find the middle index.
3. If `nums[mid] > nums[high]`, the minimum is in the right half.
4. Otherwise, the minimum is at `mid` or in the left half.
5. Continue until `low == high`.

## Complexity
- **Time:** O(log n)
- **Space:** O(1)

## Example
Input: `[3,4,5,1,2]`  
Output: `1`
