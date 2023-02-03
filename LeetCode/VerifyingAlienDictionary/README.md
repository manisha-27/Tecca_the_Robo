### "Verifying an Alien Dictionary"
Following algorithms can be used:

```
- Comparison Based Sorting Algorithm
- Hashmap based Algorithm
- Greedy Algorithm
- Trie Data Structure based Algorithm
```

#### => Comparing Characters Directly(Comparison Based Sorting Algorithm): 
This method involves comparing the characters in the words directly, without using a hash map or sorting. Time complexity: O(n), where n is the total number of characters in the words. Space complexity: O(1), since only a few variables are needed to store the current position in the words and the order of the characters.

The code checks if an array of words is sorted lexicographically in a given alien language order.

The algorithm used in the code is the comparison of the characters of each word in the array.

Here's how it works:

- Initialize the variable i as i = 0.
- Start a while loop with the condition `i < words.length - 1`.
- Within the while loop, initialize a variable n to count the number of characters of each word. Initialize two variables w1 and w2 to store the length of the words[i] and words[i+1] respectively.
- Start another while loop with the condition `n < (w1 > w2 ? w2 : w1)`, where (w1 > w2 ? w2 : w1) is used to compare the length of the two words and pick the smaller one to loop through its characters.
- Within the inner while loop, compare the position of `words[i].charAt(n)` and `words[i+1].charAt(n)` in the order string using the indexOf() method.
- If the position of `words[i].charAt(n)` is greater than words[i+1].charAt(n), then the words are not sorted lexicographically, return false.
- If the position of `words[i].charAt(n)` is less than words[i+1].charAt(n), break the inner while loop.
- If `n + 1 > w2 - 1` and `w2 < w1`, meaning if the second word is shorter than the first and all its characters have been compared, return false.
- Increment n by 1 in each iteration of the inner while loop.
- Increment i by 1 in each iteration of the outer while loop.
- Return true outside the while loop.

Example:

```
Input: words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
Output: true
```
In this example, the words array is sorted lexicographically in the given order string "hlabcdefgijkmnopqrstuvwxyz". The algorithm compares the characters of each word and returns true.
