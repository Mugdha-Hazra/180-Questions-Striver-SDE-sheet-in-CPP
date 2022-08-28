<h2><a href="https://leetcode.com/problems/sort-the-matrix-diagonally/">1329. Sort the Matrix Diagonally</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">matrix diagonal</strong> is a diagonal line of cells starting from some cell in either the topmost row or leftmost column and going in the bottom-right direction until reaching the matrix's end. For example, the <strong style="user-select: auto;">matrix diagonal</strong> starting from <code style="user-select: auto;">mat[2][0]</code>, where <code style="user-select: auto;">mat</code> is a <code style="user-select: auto;">6 x 3</code> matrix, includes cells <code style="user-select: auto;">mat[2][0]</code>, <code style="user-select: auto;">mat[3][1]</code>, and <code style="user-select: auto;">mat[4][2]</code>.</p>

<p style="user-select: auto;">Given an <code style="user-select: auto;">m x n</code> matrix <code style="user-select: auto;">mat</code> of integers, sort each <strong style="user-select: auto;">matrix diagonal</strong> in ascending order and return <em style="user-select: auto;">the resulting matrix</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/21/1482_example_1_2.png" style="width: 500px; height: 198px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]
<strong style="user-select: auto;">Output:</strong> [[1,1,1,1],[1,2,2,2],[1,2,3,3]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[11,25,66,1,69,7],[23,55,17,45,15,52],[75,31,36,44,58,8],[22,27,33,25,68,4],[84,28,14,11,5,50]]
<strong style="user-select: auto;">Output:</strong> [[5,17,4,1,52,7],[11,11,25,45,8,69],[14,23,25,44,58,15],[22,27,31,36,50,66],[84,28,75,33,55,68]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == mat.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == mat[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= mat[i][j] &lt;= 100</code></li>
</ul>
</div>