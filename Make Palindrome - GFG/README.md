# Make Palindrome
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array of strings <strong>arr</strong> of size<strong> n</strong>. You have to find out if it is possible to make a palindromic string by concatenating the strings in any order. Provided that all the strings given in the array are of <strong>equal length</strong>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 4
arr = {"djfh", "gadt", "hfjd", "tdag"}
<strong>Output:</strong>
YES
<strong>Explanation:</strong>
You can make the string "djfhgadttdaghfjd", by concatenating the given strings which is a palindrome.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 3
arr = {"jhjdf", "sftas", "fgsdf"}
<strong>Output:</strong>
NO
<strong>Explanation:</strong>
You can't make a palindromic string with this strings.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>makePalindrome()</strong> which takes an integer <strong>n</strong> and an&nbsp;array of strings <strong>arr</strong>&nbsp;respectively and returns&nbsp;<strong>true</strong> or <strong>false</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n * len(arr[i]))<br>
<strong>Expected Space Complexity:</strong> O(n * len(arr[i]))</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n&nbsp;&lt;= 10<sup>4</sup><br>
0 &lt;= |arr[i]| &lt;= 10<sup>4</sup><br>
The sum of n*|arr[i]| over all test cases won't exceed 10<sup>6</sup></span></p>
</div>