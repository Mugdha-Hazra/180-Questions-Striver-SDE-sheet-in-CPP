<h2><a href="https://leetcode.com/problems/minimum-number-of-refueling-stops/">871. Minimum Number of Refueling Stops</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A car travels from a starting position to a destination which is <code style="user-select: auto;">target</code> miles east of the starting position.</p>

<p style="user-select: auto;">There are gas stations along the way. The gas stations are represented as an array <code style="user-select: auto;">stations</code> where <code style="user-select: auto;">stations[i] = [position<sub style="user-select: auto;">i</sub>, fuel<sub style="user-select: auto;">i</sub>]</code> indicates that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> gas station is <code style="user-select: auto;">position<sub style="user-select: auto;">i</sub></code> miles east of the starting position and has <code style="user-select: auto;">fuel<sub style="user-select: auto;">i</sub></code> liters of gas.</p>

<p style="user-select: auto;">The car starts with an infinite tank of gas, which initially has <code style="user-select: auto;">startFuel</code> liters of fuel in it. It uses one liter of gas per one mile that it drives. When the car reaches a gas station, it may stop and refuel, transferring all the gas from the station into the car.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of refueling stops the car must make in order to reach its destination</em>. If it cannot reach the destination, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">Note that if the car reaches a gas station with <code style="user-select: auto;">0</code> fuel left, the car can still refuel there. If the car reaches the destination with <code style="user-select: auto;">0</code> fuel left, it is still considered to have arrived.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 1, startFuel = 1, stations = []
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> We can reach the target without refueling.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 100, startFuel = 1, stations = [[10,100]]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> We can not reach the target (or even the first gas station).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 100, startFuel = 10, stations = [[10,60],[20,30],[30,30],[60,40]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> We start with 10 liters of fuel.
We drive to position 10, expending 10 liters of fuel.  We refuel from 0 liters to 60 liters of gas.
Then, we drive from position 10 to position 60 (expending 50 liters of fuel),
and refuel from 10 liters to 50 liters of gas.  We then drive to and reach the target.
We made 2 refueling stops along the way, so we return 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target, startFuel &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= stations.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= position<sub style="user-select: auto;">i</sub> &lt;= position<sub style="user-select: auto;">i+1</sub> &lt; target</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= fuel<sub style="user-select: auto;">i</sub> &lt; 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>