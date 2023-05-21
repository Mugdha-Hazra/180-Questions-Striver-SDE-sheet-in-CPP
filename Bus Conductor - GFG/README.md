# Bus Conductor
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are&nbsp;conductor of a bus .There are&nbsp;<strong><code>n</code></strong>&nbsp;chairs&nbsp;and&nbsp;<strong><code>n</code></strong>&nbsp;passengers in the bus. You are given an array&nbsp;<strong><code>chairs</code></strong>&nbsp;of length&nbsp;<code>n</code>, where&nbsp;<code>chairs[i]</code>&nbsp;is the position of the&nbsp;<code>i<sup>th</sup></code>&nbsp;chair. You are also given the array&nbsp;<strong><code>passengers</code></strong>&nbsp;of length&nbsp;<code>n</code>, where&nbsp;<code>passengers[j]</code>&nbsp;is the position of the&nbsp;<code>j<sup>th</sup></code>&nbsp;passenger.</span></p>
<p><span style="font-size: 18px;">You may perform the following move any number of times:</span></p>
<ul>
<li><span style="font-size: 18px;">Increase or decrease the position of the&nbsp;<code>i<sup>th</sup></code>&nbsp;passenger&nbsp;by&nbsp;<code>1</code>&nbsp;(i.e., moving the&nbsp;<code>i<sup>th</sup></code>&nbsp;passenger from position&nbsp;<code>x</code>&nbsp;to&nbsp;<code>x + 1</code>&nbsp;or&nbsp;<code>x - 1</code>)</span></li>
</ul>
<p><span style="font-size: 18px;">Return&nbsp;<em>the&nbsp;<strong>minimum number of moves</strong> required to move each passenger to a chair such that no two passengers are in the same chair and every&nbsp;</em></span><em style="font-size: 18px;">passenger gets a chair</em><em style="font-size: 18px;">.</em></p>
<p><span style="font-size: 18px;">Note that there may be&nbsp;<strong>multiple</strong>&nbsp;chairs or passengers in the&nbsp;<strong>same&nbsp;</strong>position at the beginning.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
chairs = [3,1,5] 
passengers = [2,7,4]
<strong>Output:</strong> 4
<strong>Explanation:</strong> 
The passengers are moved as follows:
- The first passenger is moved from position 2 to position 1 using 1 move.
- The second passenger is moved from position 7 to position 5 using 2 moves.
- The third passenger is moved from position 4 to position 3 using 1 move.
In total, 1 + 2 + 1 = 4 moves were used.
</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
chairs = [2,2,6,6] 
passengers = [1,3,2,6]
<strong>Output:</strong> 4
<strong>Explanation:</strong> 
Note that there are two chairs at position 2 and two chairs at position 6.
The passangers are moved as follows:
- The first passenger is moved from position 1 to position 2 using 1 move.
- The second passenger is moved from position 3 to position 6 using 3 moves.
- The third passenger is not moved.
- The fourth passenger is not moved.
In total, 1 + 3 + 0 + 0 = 4 moves were used.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>findMoves()</strong> which take length of array, and two arrays chairs and passengers as input, and return an interger value as described above.</span><br><br><strong><span style="font-size: 18px;">Expected Time Complexity:</span></strong><span style="font-size: 18px;"> O(nlogn)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;"><code>&nbsp; &nbsp;n == chairs.length == passengers.length</code></span><br><span style="font-size: 18px;"><code>&nbsp; &nbsp;1 &lt;= n &lt;= 10^5</code></span><br><span style="font-size: 18px;"><code>&nbsp; &nbsp;1 &lt;= chairs[i], passengers[j] &lt;= 100</code></span></p>
<p>&nbsp;</p></div>