# Problem 01 — Find Smallest Letter Greater Than Target

**LeetCode:** #744

## Approach

1. Traverse the sorted array.
2. Find the first letter greater than `target`.
3. Return that letter.
4. If no letter is greater, return the first letter.

## Example

Input:
`letters = ["c", "f", "j"], target = "a"`

Output:
`"c"`

## Complexity

- Time: O(n)
- Space: O(1)

## Language

C
