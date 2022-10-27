<h2><a href="https://leetcode.com/problems/image-overlap/">835. Image Overlap</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two images, <code style="user-select: auto;">img1</code> and <code style="user-select: auto;">img2</code>, represented as binary, square matrices of size <code style="user-select: auto;">n x n</code>. A binary matrix has only <code style="user-select: auto;">0</code>s and <code style="user-select: auto;">1</code>s as values.</p>

<p style="user-select: auto;">We <strong style="user-select: auto;">translate</strong> one image however we choose by sliding all the <code style="user-select: auto;">1</code> bits left, right, up, and/or down any number of units. We then place it on top of the other image. We can then calculate the <strong style="user-select: auto;">overlap</strong> by counting the number of positions that have a <code style="user-select: auto;">1</code> in <strong style="user-select: auto;">both</strong> images.</p>

<p style="user-select: auto;">Note also that a translation does <strong style="user-select: auto;">not</strong> include any kind of rotation. Any <code style="user-select: auto;">1</code> bits that are translated outside of the matrix borders are erased.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the largest possible overlap</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/overlap1.jpg" style="width: 450px; height: 231px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> img1 = [[1,1,0],[0,1,0],[0,1,0]], img2 = [[0,0,0],[0,1,1],[0,0,1]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> We translate img1 to right by 1 unit and down by 1 unit.
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/overlap_step1.jpg" style="width: 450px; height: 105px; user-select: auto;">
The number of positions that have a 1 in both images is 3 (shown in red).
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/overlap_step2.jpg" style="width: 450px; height: 231px; user-select: auto;">
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> img1 = [[1]], img2 = [[1]]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> img1 = [[0]], img2 = [[0]]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == img1.length == img1[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == img2.length == img2[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">img1[i][j]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">img2[i][j]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>