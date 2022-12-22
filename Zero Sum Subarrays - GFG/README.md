# Zero Sum Subarrays
## Medium
<div class="problems_problem_content__Xm_eO"><p>You are given an array arr[] of size n. Find&nbsp;the total count of sub-arrays having their sum equal to 0.</p>

<p><br>
<strong>Example 1:</strong></p>

<pre><strong>Input:
</strong>n = 6
arr[] = {0,0,5,5,0,0}
<strong>Output: </strong>6<strong>
Explanation: </strong>The 6 subarrays are 
[0], [0], [0], [0], [0,0], and [0,0].</pre>

<p><br>
<strong>Example 2:</strong></p>

<pre><strong>Input:
</strong>n = 10
arr[] = {6,-1,-3,4,-2,2,4,6,-12,-7}
<strong>Output: </strong>4<strong>
Explanation: </strong>The 4 subarrays are [-1&nbsp;-3&nbsp;4]
[-2&nbsp;2], [2&nbsp;4&nbsp;6&nbsp;-12], and [-1&nbsp;-3&nbsp;4&nbsp;-2&nbsp;2]
</pre>

<p><br>
<strong>Your Task:</strong><br>
You don't need to read input or print anything.&nbsp;Complete the<strong> </strong>function <strong>findSubarray()</strong>&nbsp;that takes the&nbsp;array arr&nbsp;and its size n&nbsp;as input parameters<strong>&nbsp;</strong>and returns the total number of sub-arrays with 0 sum.&nbsp;<br>
&nbsp;</p>

<p><strong>Expected Time Complexity</strong>: O(n*log(n))<br>
<strong>Expected Auxilliary Space</strong>: O(n)<br>
&nbsp;</p>

<p><strong>Constraints: &nbsp; &nbsp;</strong><br>
1 &lt;= n &lt;= 10^6<br>
-10^9&nbsp;&lt;= arr[ i ] &lt;= 10^9</p>
</div>