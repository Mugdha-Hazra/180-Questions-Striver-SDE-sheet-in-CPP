# Absolute difference divisible by K
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of integers&nbsp;of size <strong>n</strong> and an integer&nbsp;<strong>k</strong>, find all the pairs in the array&nbsp;whose absolute difference is divisible by k.</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 3
arr[] = {3, 7, 11}
k = 4
<strong>Output:
</strong>3
<strong>Explanation:</strong>
(11-3) = 8 is divisible by 4
(11-7) = 4 is divisible by 4
(7-3) = 4 is divisible by 4</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 4
arr[] = {1, 2, 3, 4}
k = 2
<strong>Output :</strong>
2
<strong>Explanation:</strong>
Valid pairs are (1,3), and (2,4).
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>countPairs()</strong>&nbsp;which takes integers n,&nbsp;array arr[ ], integer k as input parameters&nbsp;and returns the number of pairs whose&nbsp;absolute difference is divisible by k.<br>
<strong>Note:&nbsp;</strong>The answer may be large so use 64-bit integer.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n + k)<br>
<strong>Expected Auxiliary Space:</strong> O(k)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ n ≤ 10<sup>5</sup><br>
1 ≤ k,arr[i] ≤ 10<sup>5</sup></span></p>
</div>