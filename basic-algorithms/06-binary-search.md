## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
Use two pointers to define the search range. Check the middle element and eliminate half of the range after each comparison.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Tested locally with a target that exists and a target that does not exist.
