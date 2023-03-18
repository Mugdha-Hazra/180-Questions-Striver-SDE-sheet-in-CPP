# Median of the Subarrays
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array&nbsp;<strong>A[]</strong>&nbsp;of&nbsp;<strong>N</strong>&nbsp;integers and an integer <strong>M</strong>.<strong>&nbsp;</strong>The task is to count the number of subarrays which have median <strong>M</strong>.<br>
Median of an array is defined as below:</span></p>

<p><span style="font-size:18px">1. If N is odd, the median value is the number that is in the middle after sorting the array.<br>
2. if N is even,&nbsp;the median value is the left of the two middle numbers after sorting the array.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5, M = 2
A[] = {2, 1, 3, 5, 4}
<strong>Output:</strong> 
3
<strong>Explanation: 
</strong>The subarrays which has median equal to M
are [2], [2,1,3] and [2,1,3,5]
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 1, M = 1
A[] = {1}
<strong>Output: 
</strong>1
<strong>Explanation: 
</strong>The subarrays which has median equal to M
is [1].
</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;</strong><br>
You don't need to read input or print anything. Complete the function<strong>&nbsp;countSubarray( )</strong>&nbsp;which takes the integer&nbsp;<strong>N</strong>&nbsp;, the array&nbsp;<strong>A[],</strong>&nbsp;and the integer&nbsp;<strong>M</strong>&nbsp;as input parameters and returns the number of subarays.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤&nbsp;10<sup>5</sup><br>
1 ≤ A[]&nbsp;≤ 10<sup>5</sup><br>
1 ≤ M&nbsp;≤ N</span></p>
</div>