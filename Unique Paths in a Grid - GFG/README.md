# Unique Paths in a Grid
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a matrix <strong>grid</strong> of&nbsp;<strong>n</strong> x&nbsp; <strong>m</strong> size consisting of values <strong>0</strong> and <strong>1</strong>. A value of <strong>1</strong> means that you can enter that cell and <strong>0</strong> implies that entry to that cell is not allowed. </span></p>

<p><span style="font-size:18px">You start at the upper-left corner of the grid <strong>(1, 1)</strong> and you have to reach the bottom-right corner <strong>(n, m)</strong> such that you can only move in the right or down direction from every cell. </span></p>

<p><span style="font-size:18px">Your task is to calculate the total number of ways of reaching the target <strong>modulo (10<sup>9</sup>+7)</strong>.<br>
<strong>Note:</strong> The <strong>first (1, 1)</strong> and <strong>last cell (n, m)</strong> of the grid can also be <strong>0</strong></span></p>

<p><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 3, m = 3
grid[][] = {{1, 1, 1};
&nbsp;           {1, 0, 1};
&nbsp;           {1, 1, 1}}
<strong>Output:
</strong>2
<strong>Explanation:</strong>
<strong>1</strong> 1 1
<strong>1</strong> 0 1
<strong>1 1 1
</strong>This is one possible path.
<strong>1</strong> <strong>1 1</strong>
1 0 <strong>1</strong>
1<strong> </strong>1 <strong>1
</strong>This is another possible path.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 1, m = 3
grid = {{1, 0, 1}}
<strong>Output :</strong>
0
<strong>Explanation:</strong>
There is no possible path to reach the end.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>uniquePaths()</strong>&nbsp;which takes 2&nbsp;integers n,&nbsp;and m, and a matrix of size n*m as input and returns the number of unique paths from cell (1,1) to (n,m) modulo (10<sup>9</sup>+7)</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n*m)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(n*m)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n*m ≤ 10</span><sup><span style="font-size:15px">6</span></sup></p>
</div>