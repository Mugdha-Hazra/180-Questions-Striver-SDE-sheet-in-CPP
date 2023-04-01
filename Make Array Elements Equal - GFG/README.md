# Make Array Elements Equal
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an integer <strong>N</strong>. Consider an array <strong>arr </strong>having <strong>N</strong> elements where <strong>arr[i]</strong> = <strong>2*i+1</strong>. (The array&nbsp;is 0-indexed)</span></p>

<p><span style="font-size:18px">You are allowed to perform the given operation on the array any number of times:</span></p>

<p><span style="font-size:18px">1) Select two indices <strong>i</strong> and <strong>j </strong>and increase <strong>arr[i]</strong> by 1 and decrease <strong>arr[j]</strong> by 1.</span></p>

<p><span style="font-size:18px">Your task is to find the minimum number of such operations required to make all the elements of the array equal.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
<strong>Output:</strong>
2
<strong>Explanation:</strong>
Initially the array is {1, 3, 5}. If we perform
the operation once on the indices 0 and 2, the 
resulting array will be {2, 3, 4}. If we again 
perform the operation once on the indices 0
and 2, the resulting array will be {3, 3, 3}.
Hence, the minimum operations required is 2
in this case.</span> </pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 2
<strong>Output:</strong>
1
<strong>Explanation: </strong>
The array initially is {1, 3}. After performing </span>
<span style="font-size:18px">an operation the array will be {2, 2}. Hence,
the answer is 1 in this case.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>minOperations</strong><strong>() </strong>which takes the integer&nbsp;<strong>N&nbsp;</strong>as the input parameter, and returns the minimum operations required to make all the array elements equal.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(1)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 10<sup>9</sup></span></p>
</div>