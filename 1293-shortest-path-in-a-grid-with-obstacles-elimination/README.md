<h2><a href="https://leetcode.com/problems/shortest-path-in-a-grid-with-obstacles-elimination/">1293. Shortest Path in a Grid with Obstacles Elimination</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> integer matrix <code style="user-select: auto;">grid</code> where each cell is either <code style="user-select: auto;">0</code> (empty) or <code style="user-select: auto;">1</code> (obstacle). You can move up, down, left, or right from and to an empty cell in <strong style="user-select: auto;">one step</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of <strong style="user-select: auto;">steps</strong> to walk from the upper left corner </em><code style="user-select: auto;">(0, 0)</code><em style="user-select: auto;"> to the lower right corner </em><code style="user-select: auto;">(m - 1, n - 1)</code><em style="user-select: auto;"> given that you can eliminate <strong style="user-select: auto;">at most</strong> </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> obstacles</em>. If it is not possible to find such walk return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/30/short1-grid.jpg" style="width: 244px; height: 405px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,0,0],[1,1,0],[0,0,0],[0,1,1],[0,0,0]], k = 1
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> 
The shortest path without eliminating any obstacle is 10.
The shortest path with one obstacle elimination at position (3,2) is 6. Such path is (0,0) -&gt; (0,1) -&gt; (0,2) -&gt; (1,2) -&gt; (2,2) -&gt; <strong style="user-select: auto;">(3,2)</strong> -&gt; (4,2).
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/30/short2-grid.jpg" style="width: 244px; height: 245px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,1,1],[1,1,1],[1,0,0]], k = 1
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> We need to eliminate at least two obstacles to find such a walk.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 40</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= m * n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">0</code> <strong style="user-select: auto;">or</strong> <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[0][0] == grid[m - 1][n - 1] == 0</code></li>
</ul>
</div>