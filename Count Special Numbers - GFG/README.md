# Count Special Numbers
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>arr[ ]&nbsp;</strong>of size <strong>N&nbsp;</strong>consisting of only positive integers. Your task is to find the count&nbsp;of special numbers in the array. A number is said to be a special number&nbsp;if it is divisible by at least 1 other element of the array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
arr[] = {2, 3, 6}
<strong>Output:</strong>
1
<strong>Explanation:</strong>
The number 6 is the only special number in the
array as it is divisible by the array elements 2 
and 3. Hence, the answer is 1 in this case.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 4
arr[] = {5, 5, 5, 5}
<strong>Output:</strong>
4
<strong>Explanation: </strong>
All the array elements are special. Hence, 
the answer is 4 in this case.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.&nbsp;Complete the function <strong>count</strong><strong>SpecialNumbers() </strong>which takes the integer&nbsp;<strong>N&nbsp;</strong>and the array <strong>arr[ ]</strong> as the input parameters, and returns the count of special numbers in the array.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*root(M)) where M = max(arr[i])<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5&nbsp;</sup><br>
1 ≤ arr[i]&nbsp;≤ 10<sup>6</sup><sup>&nbsp;</sup></span></p>
</div>