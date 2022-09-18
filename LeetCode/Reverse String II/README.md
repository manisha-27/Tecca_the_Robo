# Reverse String II

```
Input: s = "abcdefg", k = 2
Output: "bacdfeg"
```

## Approach:

```
abcdefg   k=2
ab-cd  ef-g
|----| |---|
  2k     2k
k  +  k  =  2k
^     ^
|     |
even  odd  <= positions

ab-cd  ef-g
^   ^  ^  ^
|   |  |  |
0   1  2  3  <=k positions
|----| |---|
 2k     2k
 
ba-cd  fe-g
OUTPUT => bacdfeg

*reverse string at every even position, in group of every 2k length string*

loop i->i+k 
reverse
append in stringBuilder

```
