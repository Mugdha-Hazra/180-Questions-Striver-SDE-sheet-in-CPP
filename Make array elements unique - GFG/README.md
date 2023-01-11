# Make array elements unique
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr[ ]&nbsp;</strong>of <strong>N&nbsp;</strong>elements, your task is to find the minimum number of increment operations required to make all the elements of the array unique. ie- no value in the array should occur more than once. In an operation a value can be incremented by 1 only.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
arr[] = {1, 2, 2}
<strong>Output:</strong>
1
<strong>Explanation:</strong>
If we increase arr[2] by 1 then the resulting 
array becomes {1, 2, 3} and has all unique values.
Hence, the answer is 1 in this case.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 4
arr[] = {1, 1, 2, 3}
<strong>Output:</strong>
3
<strong>Explanation: </strong>
If we increase arr[0] by 3, then all array
elements will be unique. Hence, the answer 
is 3 in this case.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You dont need to read input or print anything.&nbsp;Complete the function <strong>minIncrements() </strong>which takes the array <strong>arr[ ]</strong>&nbsp;and its size&nbsp;<strong>N&nbsp;</strong>as the input parameters, and returns the minimum increment operations required to make all elements of the array unique.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*log(N))<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 10<sup>5&nbsp;</sup><br>
1 ≤ arr[i] ≤ 10<sup>9</sup></span></p>
</div>