<h2><a href="https://leetcode.com/problems/search-a-2d-matrix/">74. Search a 2D Matrix</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Write an efficient algorithm that searches for a value <code style="user-select: auto;">target</code> in an <code style="user-select: auto;">m x n</code> integer matrix <code style="user-select: auto;">matrix</code>. This matrix has the following properties:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Integers in each row are sorted from left to right.</li>
	<li style="user-select: auto;">The first integer of each row is greater than the last integer of the previous row.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/05/mat.jpg" style="width: 322px; height: 242px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/05/mat2.jpg" style="width: 322px; height: 242px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == matrix.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == matrix[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= matrix[i][j], target &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>