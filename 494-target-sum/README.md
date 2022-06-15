<h2><a href="https://leetcode.com/problems/target-sum/">494. Target Sum</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">You want to build an <strong style="user-select: auto;">expression</strong> out of nums by adding one of the symbols <code style="user-select: auto;">'+'</code> and <code style="user-select: auto;">'-'</code> before each integer in nums and then concatenate all the integers.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">nums = [2, 1]</code>, you can add a <code style="user-select: auto;">'+'</code> before <code style="user-select: auto;">2</code> and a <code style="user-select: auto;">'-'</code> before <code style="user-select: auto;">1</code> and concatenate them to build the expression <code style="user-select: auto;">"+2-1"</code>.</li>
</ul>

<p style="user-select: auto;">Return the number of different <strong style="user-select: auto;">expressions</strong> that you can build, which evaluates to <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,1,1,1], target = 3
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> There are 5 ways to assign symbols to make the sum of nums be target 3.
-1 + 1 + 1 + 1 + 1 = 3
+1 - 1 + 1 + 1 + 1 = 3
+1 + 1 - 1 + 1 + 1 = 3
+1 + 1 + 1 - 1 + 1 = 3
+1 + 1 + 1 + 1 - 1 = 3
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1], target = 1
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= sum(nums[i]) &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= target &lt;= 1000</code></li>
</ul>
</div>