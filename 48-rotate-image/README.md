<h2><a href="https://leetcode.com/problems/rotate-image/">48. Rotate Image</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">n x n</code> 2D <code style="user-select: auto;">matrix</code> representing an image, rotate the image by <strong style="user-select: auto;">90</strong> degrees (clockwise).</p>

<p style="user-select: auto;">You have to rotate the image <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank" style="user-select: auto;"><strong style="user-select: auto;">in-place</strong></a>, which means you have to modify the input 2D matrix directly. <strong style="user-select: auto;">DO NOT</strong> allocate another 2D matrix and do the rotation.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/28/mat1.jpg" style="width: 500px; height: 188px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[1,2,3],[4,5,6],[7,8,9]]
<strong style="user-select: auto;">Output:</strong> [[7,4,1],[8,5,2],[9,6,3]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/28/mat2.jpg" style="width: 500px; height: 201px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
<strong style="user-select: auto;">Output:</strong> [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == matrix.length == matrix[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= matrix[i][j] &lt;= 1000</code></li>
</ul>
</div>