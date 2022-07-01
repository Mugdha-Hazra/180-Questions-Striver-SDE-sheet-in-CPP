<h2><a href="https://leetcode.com/problems/maximum-units-on-a-truck/">1710. Maximum Units on a Truck</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are assigned to put some amount of boxes onto <strong style="user-select: auto;">one truck</strong>. You are given a 2D array <code style="user-select: auto;">boxTypes</code>, where <code style="user-select: auto;">boxTypes[i] = [numberOfBoxes<sub style="user-select: auto;">i</sub>, numberOfUnitsPerBox<sub style="user-select: auto;">i</sub>]</code>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">numberOfBoxes<sub style="user-select: auto;">i</sub></code> is the number of boxes of type <code style="user-select: auto;">i</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">numberOfUnitsPerBox<sub style="user-select: auto;">i</sub></code><sub style="user-select: auto;"> </sub>is the number of units in each box of the type <code style="user-select: auto;">i</code>.</li>
</ul>

<p style="user-select: auto;">You are also given an integer <code style="user-select: auto;">truckSize</code>, which is the <strong style="user-select: auto;">maximum</strong> number of <strong style="user-select: auto;">boxes</strong> that can be put on the truck. You can choose any boxes to put on the truck as long as the number&nbsp;of boxes does not exceed <code style="user-select: auto;">truckSize</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> total number of <strong style="user-select: auto;">units</strong> that can be put on the truck.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> boxTypes = [[1,3],[2,2],[3,1]], truckSize = 4
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> There are:
- 1 box of the first type that contains 3 units.
- 2 boxes of the second type that contain 2 units each.
- 3 boxes of the third type that contain 1 unit each.
You can take all the boxes of the first and second types, and one box of the third type.
The total number of units will be = (1 * 3) + (2 * 2) + (1 * 1) = 8.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> boxTypes = [[5,10],[2,5],[4,7],[3,9]], truckSize = 10
<strong style="user-select: auto;">Output:</strong> 91
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= boxTypes.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= numberOfBoxes<sub style="user-select: auto;">i</sub>, numberOfUnitsPerBox<sub style="user-select: auto;">i</sub> &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= truckSize &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>