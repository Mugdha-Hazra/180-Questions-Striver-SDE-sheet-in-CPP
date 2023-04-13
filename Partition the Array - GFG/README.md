# Partition the Array
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array&nbsp;<strong>A[]&nbsp;</strong>of&nbsp;<strong>N&nbsp;</strong>integers. The task is to partition the array into four non-empty contiguous subarrays&nbsp;<strong>P, Q, R, and S </strong>such that each element of the array <strong>A[]</strong> should be present in any subarray.<br>
Let&nbsp;<strong>W, X, Y, and Z</strong> be the sum of the elements in&nbsp;<strong>P, Q, R, and S</strong> respectively.<br>
Find the smallest absolute difference between the maximum and the minimum among<strong> W, X, Y, and Z</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
A[] = [4,2,2,5,1]
<strong>Output: </strong>4
<strong>Explanation: </strong>let partition the array 
P,Q,R,S = [4],[2,2],[5],[1]
W = 4, X = 4, Y = 5, Z = 1 
Differnce = max(W,X,Y,Z)-min(W,X,Y,Z)= 5-1 = 4 </span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
A[] = {4,4,4,4}
<strong>Output: </strong>0
<strong>Explanation: 
</strong>There is only one way to partition 
the array. P,Q,R,S = [4],[4],[4],[4]</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.&nbsp;</span><span style="font-size:18px">The task is to complete the function&nbsp;<strong>minDifference</strong>() which takes the integer&nbsp;<strong>N&nbsp;</strong>and the array&nbsp;<strong>A[]&nbsp;</strong>as inputs and returns the smallest absolute difference.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(NLogN)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
4&nbsp;<u>&lt;&nbsp;</u>N&nbsp;<u>&lt;&nbsp;</u>10<sup>5</sup><br>
1&nbsp;<u>&lt;&nbsp;</u>A[i]&nbsp;<u>&lt;&nbsp;</u>10<sup>9</sup></span></p>
</div>