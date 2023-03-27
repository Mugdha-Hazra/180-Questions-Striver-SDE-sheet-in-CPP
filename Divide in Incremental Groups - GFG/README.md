# Divide in Incremental Groups
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two integers <strong>N</strong> and <strong>K</strong>, the task is to count the number of ways to divide <strong>N</strong> into <strong>K</strong> groups of positive integers such that their sum is <strong>N</strong> and the number of elements in groups follows a non-decreasing order (i.e.&nbsp;<strong>group[i] &lt;= group[i+1])</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 8
K = 4
<strong>Output:</strong>
5
<strong>Explanation:</strong>
There are 5 groups such that their sum is 8 
and the number of positive integers in each 
group is 4.&nbsp;The 5 groups are [1, 1, 1, 5], 
[1, 1, 2, 4], [1, 1, 3, 3], [1, 2, 2, 3] and 
[2, 2, 2, 2].</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 4
K = 3
<strong>Output:</strong>
1
<strong>Explanation: </strong>
The only possible grouping is {1, 1, 2}. Hence,</span>
<span style="font-size:18px">the answer is 1 in this case.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>countWaystoDivide</strong><strong>() </strong>which takes the integers&nbsp;<strong>N</strong>&nbsp;and <strong>K&nbsp;</strong>as the input parameters, and returns the number of ways to divide the sum <strong>N </strong>into<strong> K&nbsp;</strong>groups.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N<sup>2</sup>*K)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N<sup>2</sup></span><span style="font-size:18px">*K)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ K ≤&nbsp;N ≤ 100</span></p>
</div>