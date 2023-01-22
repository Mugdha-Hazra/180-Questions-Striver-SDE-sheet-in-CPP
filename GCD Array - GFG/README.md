# GCD Array
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array, <strong>arr&nbsp;</strong>of length&nbsp;<strong>N</strong>,&nbsp;and also a single integer&nbsp;<strong>K&nbsp;</strong>. Your task is to split the array arr&nbsp;into&nbsp;<strong>K&nbsp;</strong>non-overlapping, non-empty subarrays. For each of the subarrays, you calculate the sum of the elements in it. Let us denote these sums as <strong>S<sub>1</sub>,<sub> </sub>S<sub>2</sub>,&nbsp;S<sub>3</sub>, ...,&nbsp;S<sub>K</sub></strong>. Where <strong>S<sub>i </sub></strong>denotes the sum of the elements in the i<sup>th&nbsp;</sup>subarray from left.</span></p>

<p><span style="font-size:18px">Let <strong>G = GCD( S<sub>1</sub>,<sub> </sub>S<sub>2&nbsp;</sub>,S<sub>3 </sub>, ...,<sub> </sub>S<sub>K</sub>)</strong>.</span></p>

<p><span style="font-size:18px">Find the <strong>maximum </strong>value of G that can be obtained.&nbsp;<br>
The array may contain duplicate elements.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 5
K = 4
arr[] = {6, 7, 5, 27, 3}
<strong>Output:</strong> 3
<strong>Explanation</strong>: </span>
<span style="font-size:18px">Since K = 4, you have to split the array into 4 subarrays.
For optimal splitting, split the array into
4 subarrays as follows: [[6], [7, 5], [27], [3]]
Therefore, S<sub>1</sub> = 6, S<sub>2</sub> = 7 + 5 = 12, S<sub>3</sub> = 27, S<sub>4</sub> = 3
Hence, G = GCD(S<sub>1</sub>, S<sub>2</sub>, S<sub>3</sub>, S<sub>4</sub>) = GCD(6, 12, 27, 3) = 3
It can be shown that 3 is the maximum value of G that can be obtained.</span>
<span style="font-size:18px">Thus, the answer is 3.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 3
K = 2
arr[] = {1, 4, 5}
<strong>Output:</strong> 5
<strong>Explanation</strong>: </span>
<span style="font-size:18px">Since K = 2, you have to split the array into 2 subarrays.
For optimal splitting, split the array into
2 subarrays as follows: [[1, 4], [5]]
Therefore, S<sub>1</sub> = 1 + 4 = 5, S<sub>2</sub> = 5
Hence, G = GCD(S<sub>1</sub>, S<sub>2</sub>) = GCD(5,5) = 5
It can be shown that 5 is the maximum value of G that can be obtained.</span>
<span style="font-size:18px">Thus, the answer is 5.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp; </strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>solve()</strong> which takes the array arr[] and its size N and an integer K as input parameters and returns the required maximum GCD value.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N * x)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(x), x is the number of factors of the sum of all elements.<br>
<br>
<strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 &lt;= N &lt;= 10<sup>4</sup><br>
1 &lt;= K &lt;= N<br>
1 &lt;= arr[i] &lt;= 10<sup>5</sup></span></p>
</div>