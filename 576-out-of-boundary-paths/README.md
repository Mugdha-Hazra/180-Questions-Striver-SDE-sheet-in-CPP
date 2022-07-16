<h2><a href="https://leetcode.com/problems/out-of-boundary-paths/">576. Out of Boundary Paths</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is an <code style="user-select: auto;">m x n</code> grid with a ball. The ball is initially at the position <code style="user-select: auto;">[startRow, startColumn]</code>. You are allowed to move the ball to one of the four adjacent cells in the grid (possibly out of the grid crossing the grid boundary). You can apply <strong style="user-select: auto;">at most</strong> <code style="user-select: auto;">maxMove</code> moves to the ball.</p>

<p style="user-select: auto;">Given the five integers <code style="user-select: auto;">m</code>, <code style="user-select: auto;">n</code>, <code style="user-select: auto;">maxMove</code>, <code style="user-select: auto;">startRow</code>, <code style="user-select: auto;">startColumn</code>, return the number of paths to move the ball out of the grid boundary. Since the answer can be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/28/out_of_boundary_paths_1.png" style="width: 500px; height: 296px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 2, n = 2, maxMove = 2, startRow = 0, startColumn = 0
<strong style="user-select: auto;">Output:</strong> 6
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/28/out_of_boundary_paths_2.png" style="width: 500px; height: 293px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 1, n = 3, maxMove = 3, startRow = 0, startColumn = 1
<strong style="user-select: auto;">Output:</strong> 12
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= maxMove &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= startRow &lt; m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= startColumn &lt; n</code></li>
</ul>
</div>