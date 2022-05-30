<h2><a href="https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/">1337. The K Weakest Rows in a Matrix</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> binary matrix <code style="user-select: auto;">mat</code> of <code style="user-select: auto;">1</code>'s (representing soldiers) and <code style="user-select: auto;">0</code>'s (representing civilians). The soldiers are positioned <strong style="user-select: auto;">in front</strong> of the civilians. That is, all the <code style="user-select: auto;">1</code>'s will appear to the <strong style="user-select: auto;">left</strong> of all the <code style="user-select: auto;">0</code>'s in each row.</p>

<p style="user-select: auto;">A row <code style="user-select: auto;">i</code> is <strong style="user-select: auto;">weaker</strong> than a row <code style="user-select: auto;">j</code> if one of the following is true:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of soldiers in row <code style="user-select: auto;">i</code> is less than the number of soldiers in row <code style="user-select: auto;">j</code>.</li>
	<li style="user-select: auto;">Both rows have the same number of soldiers and <code style="user-select: auto;">i &lt; j</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the indices of the </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> <strong style="user-select: auto;">weakest</strong> rows in the matrix ordered from weakest to strongest</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = 
[[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]], 
k = 3
<strong style="user-select: auto;">Output:</strong> [2,0,3]
<strong style="user-select: auto;">Explanation:</strong> 
The number of soldiers in each row is: 
- Row 0: 2 
- Row 1: 4 
- Row 2: 1 
- Row 3: 2 
- Row 4: 5 
The rows ordered from weakest to strongest are [2,0,3,1,4].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = 
[[1,0,0,0],
 [1,1,1,1],
 [1,0,0,0],
 [1,0,0,0]], 
k = 2
<strong style="user-select: auto;">Output:</strong> [0,2]
<strong style="user-select: auto;">Explanation:</strong> 
The number of soldiers in each row is: 
- Row 0: 1 
- Row 1: 4 
- Row 2: 1 
- Row 3: 1 
The rows ordered from weakest to strongest are [0,2,3,1].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == mat.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == mat[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n, m &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">matrix[i][j]</code> is either 0 or 1.</li>
</ul>
</div>