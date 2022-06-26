<h2><a href="https://leetcode.com/problems/unique-paths/">62. Unique Paths</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a robot on an <code style="user-select: auto;">m x n</code> grid. The robot is initially located at the <strong style="user-select: auto;">top-left corner</strong> (i.e., <code style="user-select: auto;">grid[0][0]</code>). The robot tries to move to the <strong style="user-select: auto;">bottom-right corner</strong> (i.e., <code style="user-select: auto;">grid[m - 1][n - 1]</code>). The robot can only move either down or right at any point in time.</p>

<p style="user-select: auto;">Given the two integers <code style="user-select: auto;">m</code> and <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">the number of possible unique paths that the robot can take to reach the bottom-right corner</em>.</p>

<p style="user-select: auto;">The test cases are generated so that the answer will be less than or equal to <code style="user-select: auto;">2 * 10<sup style="user-select: auto;">9</sup></code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2018/10/22/robot_maze.png" style="width: 400px; height: 183px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 3, n = 7
<strong style="user-select: auto;">Output:</strong> 28
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 3, n = 2
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -&gt; Down -&gt; Down
2. Down -&gt; Down -&gt; Right
3. Down -&gt; Right -&gt; Down
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 100</code></li>
</ul>
</div>