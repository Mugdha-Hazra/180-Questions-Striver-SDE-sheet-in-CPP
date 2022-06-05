<h2><a href="https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/">1491. Average Salary Excluding the Minimum and Maximum Salary</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of <strong style="user-select: auto;">unique</strong> integers <code style="user-select: auto;">salary</code> where <code style="user-select: auto;">salary[i]</code> is the salary of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> employee.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the average salary of employees excluding the minimum and maximum salary</em>. Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the actual answer will be accepted.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> salary = [4000,3000,1000,2000]
<strong style="user-select: auto;">Output:</strong> 2500.00000
<strong style="user-select: auto;">Explanation:</strong> Minimum salary and maximum salary are 1000 and 4000 respectively.
Average salary excluding minimum and maximum salary is (2000+3000) / 2 = 2500
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> salary = [1000,2000,3000]
<strong style="user-select: auto;">Output:</strong> 2000.00000
<strong style="user-select: auto;">Explanation:</strong> Minimum salary and maximum salary are 1000 and 3000 respectively.
Average salary excluding minimum and maximum salary is (2000) / 1 = 2000
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= salary.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1000 &lt;= salary[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">All the integers of <code style="user-select: auto;">salary</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>