## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Start with the first string as the prefix and compare it with the remaining strings. Remove characters when they do not match.

### Complexity
- Time: O(n × m)
- Space: O(m)

### Notes
Tested locally with strings having a common prefix and strings with no common prefix.
