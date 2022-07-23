<h2><a href="https://leetcode.com/problems/count-of-smaller-numbers-after-self/">315. Count of Smaller Numbers After Self</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> and you have to return a new <code style="user-select: auto;">counts</code> array. The <code style="user-select: auto;">counts</code> array has the property where <code style="user-select: auto;">counts[i]</code> is the number of smaller elements to the right of <code style="user-select: auto;">nums[i]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,2,6,1]
<strong style="user-select: auto;">Output:</strong> [2,1,1,0]
<strong style="user-select: auto;">Explanation:</strong>
To the right of 5 there are <b style="user-select: auto;">2</b> smaller elements (2 and 1).
To the right of 2 there is only <b style="user-select: auto;">1</b> smaller element (1).
To the right of 6 there is <b style="user-select: auto;">1</b> smaller element (1).
To the right of 1 there is <b style="user-select: auto;">0</b> smaller element.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-1]
<strong style="user-select: auto;">Output:</strong> [0]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-1,-1]
<strong style="user-select: auto;">Output:</strong> [0,0]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>