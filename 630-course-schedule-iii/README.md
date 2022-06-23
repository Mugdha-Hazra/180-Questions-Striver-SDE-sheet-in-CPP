<h2><a href="https://leetcode.com/problems/course-schedule-iii/">630. Course Schedule III</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> different online courses numbered from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>. You are given an array <code style="user-select: auto;">courses</code> where <code style="user-select: auto;">courses[i] = [duration<sub style="user-select: auto;">i</sub>, lastDay<sub style="user-select: auto;">i</sub>]</code> indicate that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> course should be taken <b style="user-select: auto;">continuously</b> for <code style="user-select: auto;">duration<sub style="user-select: auto;">i</sub></code> days and must be finished before or on <code style="user-select: auto;">lastDay<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">You will start on the <code style="user-select: auto;">1<sup style="user-select: auto;">st</sup></code> day and you cannot take two or more courses simultaneously.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum number of courses that you can take</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> courses = [[100,200],[200,1300],[1000,1250],[2000,3200]]
<strong style="user-select: auto;">Output:</strong> 3
Explanation: 
There are totally 4 courses, but you can take 3 courses at most:
First, take the 1<sup style="user-select: auto;">st</sup> course, it costs 100 days so you will finish it on the 100<sup style="user-select: auto;">th</sup> day, and ready to take the next course on the 101<sup style="user-select: auto;">st</sup> day.
Second, take the 3<sup style="user-select: auto;">rd</sup> course, it costs 1000 days so you will finish it on the 1100<sup style="user-select: auto;">th</sup> day, and ready to take the next course on the 1101<sup style="user-select: auto;">st</sup> day. 
Third, take the 2<sup style="user-select: auto;">nd</sup> course, it costs 200 days so you will finish it on the 1300<sup style="user-select: auto;">th</sup> day. 
The 4<sup style="user-select: auto;">th</sup> course cannot be taken now, since you will finish it on the 3300<sup style="user-select: auto;">th</sup> day, which exceeds the closed date.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> courses = [[1,2]]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> courses = [[3,2],[4,3]]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= courses.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= duration<sub style="user-select: auto;">i</sub>, lastDay<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>