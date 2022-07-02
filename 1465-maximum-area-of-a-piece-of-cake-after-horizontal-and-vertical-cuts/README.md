<h2><a href="https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/">1465. Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a rectangular cake of size <code style="user-select: auto;">h x w</code> and two arrays of integers <code style="user-select: auto;">horizontalCuts</code> and <code style="user-select: auto;">verticalCuts</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">horizontalCuts[i]</code> is the distance from the top of the rectangular cake to the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> horizontal cut and similarly, and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">verticalCuts[j]</code> is the distance from the left of the rectangular cake to the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> vertical cut.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum area of a piece of cake after you cut at each horizontal and vertical position provided in the arrays</em> <code style="user-select: auto;">horizontalCuts</code> <em style="user-select: auto;">and</em> <code style="user-select: auto;">verticalCuts</code>. Since the answer can be a large number, return this <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/05/14/leetcode_max_area_2.png" style="width: 225px; height: 240px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> h = 5, w = 4, horizontalCuts = [1,2,4], verticalCuts = [1,3]
<strong style="user-select: auto;">Output:</strong> 4 
<strong style="user-select: auto;">Explanation:</strong> The figure above represents the given rectangular cake. Red lines are the horizontal and vertical cuts. After you cut the cake, the green piece of cake has the maximum area.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/05/14/leetcode_max_area_3.png" style="width: 225px; height: 240px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> h = 5, w = 4, horizontalCuts = [3,1], verticalCuts = [1]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The figure above represents the given rectangular cake. Red lines are the horizontal and vertical cuts. After you cut the cake, the green and yellow pieces of cake have the maximum area.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> h = 5, w = 4, horizontalCuts = [3], verticalCuts = [3]
<strong style="user-select: auto;">Output:</strong> 9
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= h, w &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= horizontalCuts.length &lt;= min(h - 1, 10<sup style="user-select: auto;">5</sup>)</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= verticalCuts.length &lt;= min(w - 1, 10<sup style="user-select: auto;">5</sup>)</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= horizontalCuts[i] &lt; h</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= verticalCuts[i] &lt; w</code></li>
	<li style="user-select: auto;">All the elements in <code style="user-select: auto;">horizontalCuts</code> are distinct.</li>
	<li style="user-select: auto;">All the elements in <code style="user-select: auto;">verticalCuts</code> are distinct.</li>
</ul>
</div>