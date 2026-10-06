# Problem 01 — Third Maximum Number

**LeetCode:** #414  
**Topic:** Arrays

## 🧠 Approach

1. Traverse the array and find the three largest distinct numbers.
2. Keep track of the largest, second largest, and third largest values.
3. Ignore duplicate values.
4. If three distinct maximum values exist, return the third maximum.
5. Otherwise, return the largest number.

## 💡 Example

### Input

```text
[3, 2, 1]
