# Problem 02 — Largest Number At Least Twice of Others

**LeetCode:** #747

## Approach

1. Find the largest element and its index.
2. Traverse the array again.
3. Check whether the largest element is at least twice every other element.
4. Return the index if the condition is satisfied.
5. Otherwise, return `-1`.

## Example

```text
Input:
[3, 6, 1, 0]

Output:
1
