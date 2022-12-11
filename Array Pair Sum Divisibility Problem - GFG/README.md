# Array Pair Sum Divisibility Problem
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1 :</strong></span></p>

<pre><span style="font-size:18px"><strong>Input : </strong>arr = [9, 5, 7, 3], k = 6
<strong>Output: </strong>True
<strong>Explanation: </strong>{(9, 3), (5, 7)} is a 
possible solution. 9 + 3 = 12 is divisible
by 6 and 7 + 5 = 12 is also divisible by 6.

</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input : </strong>arr = [2, 4, 1, 3], k = 4
<strong>Output: </strong>False
<strong>Explanation: </strong>There is no possible solution.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>canPair()</strong>&nbsp;which takes array and k as input parameter and returns true if array can be divided into pairs such that sum of every pair is divisible by k otherwise returns false.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br>
<strong>Expected Space Complexity :&nbsp;</strong>O(n)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= length of array &lt;= 10^5<br>
1 &lt;= elements of array &lt;= 10^5<br>
1 &lt;= k &lt;= 10^5</span></p>
</div>