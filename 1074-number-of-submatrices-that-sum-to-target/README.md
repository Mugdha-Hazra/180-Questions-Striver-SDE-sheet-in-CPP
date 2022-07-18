<h2><a href="https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/">1074. Number of Submatrices That Sum to Target</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <code style="user-select: auto;">matrix</code>&nbsp;and a <code style="user-select: auto;">target</code>, return the number of non-empty submatrices that sum to <font face="monospace" style="user-select: auto;">target</font>.</p>

<p style="user-select: auto;">A submatrix <code style="user-select: auto;">x1, y1, x2, y2</code> is the set of all cells <code style="user-select: auto;">matrix[x][y]</code> with <code style="user-select: auto;">x1 &lt;= x &lt;= x2</code> and <code style="user-select: auto;">y1 &lt;= y &lt;= y2</code>.</p>

<p style="user-select: auto;">Two submatrices <code style="user-select: auto;">(x1, y1, x2, y2)</code> and <code style="user-select: auto;">(x1', y1', x2', y2')</code> are different if they have some coordinate&nbsp;that is different: for example, if <code style="user-select: auto;">x1 != x1'</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/02/mate1.jpg" style="width: 242px; height: 242px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[0,1,0],[1,1,1],[0,1,0]], target = 0
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The four 1x1 submatrices that only contain 0.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[1,-1],[-1,1]], target = 0
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The two 1x2 submatrices, plus the two 2x1 submatrices, plus the 2x2 submatrix.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[904]], target = 0
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= matrix.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= matrix[0].length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= matrix[i] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10^8 &lt;= target &lt;= 10^8</code></li>
</ul>
</div>