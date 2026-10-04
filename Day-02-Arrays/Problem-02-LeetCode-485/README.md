# Problem 02 — Max Consecutive Ones

**LeetCode:** #485  
**Topic:** Arrays

## 🧠 Approach

1. Traverse the array from left to right.
2. If the current element is `1`, increase `count`.
3. If the current element is `0`, reset `count` to `0`.
4. After every `1`, compare `count` with `max`.
5. Store the larger value in `max`.
6. Return `max`.

## 💡 Example

### Input

```text
[1, 1, 0, 1, 1, 1]
