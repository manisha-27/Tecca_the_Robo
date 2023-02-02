# GCD (Greatest Common Divisor) algorithm

This algorithm is known as the greatest common divisor of strings algorithm. The algorithm is used to find the largest common string (substring) that divides both given strings str1 and str2.

Here's an example to explain the algorithm:

Example:
Let str1 = "ABCABC" and str2 = "ABC". The idea is to concatenate both strings and check if they are equal or not.

- Step 1: Concatenate str1 and str2: (str1 + str2) = "ABCABCABC"
- Step 2: Concatenate str2 and str1: (str2 + str1) = "ABCABCABC"
- Step 3: Compare (str1 + str2) with (str2 + str1). If they are equal, then we have found the largest common string that divides both str1 and str2.
- Step 4: In this case, (str1 + str2) = (str2 + str1), so the largest common string is "ABC".

This algorithm is helpful when the length of the strings str1 and str2 is very large, and we want to find the largest common string that divides both strings.
If want to learn more briefly on GCD algorithm, then visit [this site](https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/).
