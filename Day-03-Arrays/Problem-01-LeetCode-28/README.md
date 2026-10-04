# Problem 01 — Find the Index of the First Occurrence in a String

**LeetCode:** #28  
**Topic:** Strings

## 🧠 Approach

1. Traverse the main string.
2. Check whether the substring starts at the current index.
3. Compare the characters of both strings.
4. If all characters match, return the starting index.
5. If no match is found, return `-1`.

## 💡 Example

### Input

```text
haystack = "sadbutsad"
needle = "sad"
