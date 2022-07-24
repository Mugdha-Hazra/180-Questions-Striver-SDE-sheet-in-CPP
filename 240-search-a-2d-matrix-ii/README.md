<h2><a href="https://leetcode.com/problems/search-a-2d-matrix-ii/">240. Search a 2D Matrix II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Write an efficient algorithm that searches for a value <code style="user-select: auto;">target</code> in an <code style="user-select: auto;">m x n</code> integer matrix <code style="user-select: auto;">matrix</code>. This matrix has the following properties:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Integers in each row are sorted in ascending from left to right.</li>
	<li style="user-select: auto;">Integers in each column are sorted in ascending from top to bottom.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/24/searchgrid2.jpg" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/24/searchgrid.jpg" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == matrix.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == matrix[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n, m &lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup> &lt;= matrix[i][j] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">All the integers in each row are <strong style="user-select: auto;">sorted</strong> in ascending order.</li>
	<li style="user-select: auto;">All the integers in each column are <strong style="user-select: auto;">sorted</strong> in ascending order.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup> &lt;= target &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>