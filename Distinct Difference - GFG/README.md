# Distinct Difference
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array A[] of length N. For each index i (1&lt;=i&lt;=N), find the diffference between the number of distinct element in it's left and right side in the array.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 3
arr[] = {4, 3, 3}
<strong>Output:</strong> {-1, 0, 2}
<strong>Explanation</strong>: For index i=1, there are 0 distinct element in the left side of it, and 1 distinct element(3) in it's right side. So difference is 0-1 = -1. </span>

<span style="font-size:18px">Similarly for index i=2, there is 1 distinct element (4) in left side of it, and 1 distinct element(3) in it's right side. So difference is 1-1 = 0.</span>

<span style="font-size:18px">Similarly for index i=3, there are 2 distinct elements (4 and 3) in left side of it, and 0 distinct elements in it's left side. So difference is 2-0 = 2.</span>

</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
arr[] = {4, 4, 3, 3}
<strong>Output: </strong>{-2, 0, 0, 2}
<strong>Explanation</strong>: For index i=1, there are 0 distinct element in the left side of it, and 2 distinct element(4 and 3) in it's right side. So difference is 0-2 = -2.

</span><span style="font-size:18px">Similarly for index i=2, there is 1 distinct element (4) in left side of it, and 1 distinct element(3) in it's right side. So difference is 1-1 = 0.</span>

<span style="font-size:18px">Similarly for index i=4, there are 2 distinct elements (4 and 3) in left side of it, and 0 distinct element in it's right side. So difference is 2-0 = 2.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp; </strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>getDistinctDifference()</strong> which takes the array A[] and its size N as input parameters and returns an array containing the difference between number of ditinct elements in left and right side for each 1&lt;=i&lt;=N.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N)</span><br>
<span style="font-size:18px"><strong>Expected Space Complexity</strong>:O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= A[i] &lt;= 10<sup>9</sup><br>
Array may contain duplicate elements.</span></p>
</div>