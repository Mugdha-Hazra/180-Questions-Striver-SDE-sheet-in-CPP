<h2><a href="https://leetcode.com/problems/merge-intervals/">56. Merge Intervals</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array&nbsp;of <code style="user-select: auto;">intervals</code>&nbsp;where <code style="user-select: auto;">intervals[i] = [start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub>]</code>, merge all overlapping intervals, and return <em style="user-select: auto;">an array of the non-overlapping intervals that cover all the intervals in the input</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> intervals = [[1,3],[2,6],[8,10],[15,18]]
<strong style="user-select: auto;">Output:</strong> [[1,6],[8,10],[15,18]]
<strong style="user-select: auto;">Explanation:</strong> Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> intervals = [[1,4],[4,5]]
<strong style="user-select: auto;">Output:</strong> [[1,5]]
<strong style="user-select: auto;">Explanation:</strong> Intervals [1,4] and [4,5] are considered overlapping.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= intervals.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">intervals[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start<sub style="user-select: auto;">i</sub> &lt;= end<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>