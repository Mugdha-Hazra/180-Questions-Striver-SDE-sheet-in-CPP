# Smaller Sum
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>arr</strong> of <strong>n</strong> integers. For each index i, you have to find the sum of all integers present in the array with a value <strong>less</strong> than arr[i].</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 3
arr = {1, 2, 3}
<strong>Output:</strong>
0 1 3
<strong>Explanation:</strong>
For 1, there are no elements lesser than itself.
For 2, only 1 is lesser than 2.
And for 3, 1 and 2 are lesser than 3, so the sum is 3.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 2
arr = {4, 4}
<strong>Output:</strong>
0 0
<strong>Explanation:
</strong>For 4, there are no elements lesser than itself. 
For 4, there are no elements lesser than itself.
There are no smaller elements than 4.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>smallerSum()</strong> which takes an integer&nbsp;<strong>n</strong>&nbsp;and an array <strong>arr</strong>&nbsp;and returns&nbsp;an array of length <strong>n</strong> , the answer for every index.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>:O(n log n)</span><br>
<span style="font-size:18px"><strong>Expected Space Complexity</strong>:O(n)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10<sup>5</sup><br>
0 &lt;= arr[i] &lt;= 10<sup>9</sup></span></p>
</div>