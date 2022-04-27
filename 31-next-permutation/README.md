<h2><a href="https://leetcode.com/problems/next-permutation/">31. Next Permutation</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">permutation</strong> of an array of integers is an arrangement of its members into a sequence or linear order.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, for <code style="user-select: auto;">arr = [1,2,3]</code>, the following are considered permutations of <code style="user-select: auto;">arr</code>: <code style="user-select: auto;">[1,2,3]</code>, <code style="user-select: auto;">[1,3,2]</code>, <code style="user-select: auto;">[3,1,2]</code>, <code style="user-select: auto;">[2,3,1]</code>.</li>
</ul>

<p style="user-select: auto;">The <strong style="user-select: auto;">next permutation</strong> of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the <strong style="user-select: auto;">next permutation</strong> of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, the next permutation of <code style="user-select: auto;">arr = [1,2,3]</code> is <code style="user-select: auto;">[1,3,2]</code>.</li>
	<li style="user-select: auto;">Similarly, the next permutation of <code style="user-select: auto;">arr = [2,3,1]</code> is <code style="user-select: auto;">[3,1,2]</code>.</li>
	<li style="user-select: auto;">While the next permutation of <code style="user-select: auto;">arr = [3,2,1]</code> is <code style="user-select: auto;">[1,2,3]</code> because <code style="user-select: auto;">[3,2,1]</code> does not have a lexicographical larger rearrangement.</li>
</ul>

<p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">nums</code>, <em style="user-select: auto;">find the next permutation of</em> <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">The replacement must be <strong style="user-select: auto;"><a href="http://en.wikipedia.org/wiki/In-place_algorithm" target="_blank" style="user-select: auto;">in place</a></strong> and use only constant extra memory.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3]
<strong style="user-select: auto;">Output:</strong> [1,3,2]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,2,1]
<strong style="user-select: auto;">Output:</strong> [1,2,3]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,5]
<strong style="user-select: auto;">Output:</strong> [1,5,1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>