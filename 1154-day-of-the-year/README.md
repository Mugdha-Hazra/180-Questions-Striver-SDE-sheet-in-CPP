<h2><a href="https://leetcode.com/problems/day-of-the-year/">1154. Day of the Year</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">date</code> representing a <a href="https://en.wikipedia.org/wiki/Gregorian_calendar" target="_blank" style="user-select: auto;">Gregorian calendar</a> date formatted as <code style="user-select: auto;">YYYY-MM-DD</code>, return <em style="user-select: auto;">the day number of the year</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> date = "2019-01-09"
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong> Given date is the 9th day of the year in 2019.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> date = "2019-02-10"
<strong style="user-select: auto;">Output:</strong> 41
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">date.length == 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">date[4] == date[7] == '-'</code>, and all other <code style="user-select: auto;">date[i]</code>'s are digits</li>
	<li style="user-select: auto;"><code style="user-select: auto;">date</code> represents a calendar date between Jan 1<sup style="user-select: auto;">st</sup>, 1900 and Dec 31<sup style="user-select: auto;">th</sup>, 2019.</li>
</ul>
</div>