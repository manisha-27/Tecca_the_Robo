## 1. Brute Force- Two Pointer method

### Two Pointer Method
`removing element: val=2`<br>
`0 1 2 3 4 5 6 7 <= Index`<br>
`0 1 2 2 3 0 4 2 <= Elements`<br>

```
Case 1: left=val and right!=0
Swap
left++ and right--

Case 2: left=val and right=val
right--

Case 3: left!=val and right=val OR left!=val and right!=val
left++
```
### Dry Code Run
```
left!=val and right==val
0 1 2 2 3 0 4 2 <= Elements
^             ^
left(p)      right(q)
p++

left!=val and right==val
0 1 2 2 3 0 4 2 <= Elements
  ^           ^
  p           q
p++

left==val and right==val
0 1 2 2 3 0 4 2 <= Elements
    ^         ^
    p         q
p++, q--

left==val and right!=val
0 1 2 2 3 0 4 2 <= Elements
    ^       ^
    p       q
Swap
p++, q--

left==val and right!=val
0 1 4 2 3 0 2 2 <= Elements
      ^   ^
      p   q
Swap
p++, q--

left==val and right!=val
0 1 4 0 3 2 2 2 <= Elements
        ^
       p,q
END
```
