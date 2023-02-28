# Optimal Array
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a <strong>sorted</strong> array <strong>a</strong> of length<strong> n</strong>. For each <strong>i</strong>(0&lt;=i&lt;=n-1), you have to make all the elements of the array from index 0 till i<strong> equal</strong>, using minimum number of operations. In one operation&nbsp;you either <strong>increase </strong>or <strong>decrease</strong> the array element by <strong>1</strong>.</span></p>

<p><span style="font-size:18px">You have to return a <strong>list</strong> which contains the <strong>minimum</strong> number of operations for each i, to accomplish the above task.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong></span><br>
<span style="font-size:18px">1. 0-based indexing.<br>
2. For each index, you need to consider the same array which was given to you at the start.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=4
A={1,6,9,12}
</span>
<span style="font-size:18px"><strong>Output:</strong>
0 5 8 14

</span><strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">For i=0, We do not need to perform any 
operation, our array will be {1}-&gt;{1}.
And minimum number of operations
will be 0.</span>

<span style="font-size:18px">For i=1, We can choose to convert all 
the elements from 0&lt;=j&lt;=i to 4, our 
array will become {1,6}-&gt;{4,4}. And 
minimum number of operations will be 
|1-4|+|6-4|=5.</span>

<span style="font-size:18px">For i=2, We can choose to convert all 
the elements from 0&lt;=j&lt;=i to 6, our 
array will become {1,6,9}-&gt;{6,6,6} and 
the minimum number of operations will 
be |1-6|+|6-6|+|9-6|=8.</span>

<span style="font-size:18px">Similarly, for i=3, we can choose to 
convert all the elements to 8, 
{1,6,9,12}-&gt;{8,8,8,8}, and the 
minimum number of operations will be 14.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=7
A={1,1,1,7,7,10,19}
</span>
<span style="font-size:18px"><strong>Output:</strong>
0 0 0 6 12 21 33
</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">Possible operations could be:
{1}-&gt;{1}
{1,1}-&gt;{1,1}
{1,1,1}-&gt;{1,1,1}
{1,1,1,7}-&gt;{1,1,1,1}
{1,1,1,7,7}-&gt;{1,1,1,1,1}
{1,1,1,7,7,10}-&gt;{5,5,5,5,5,5}
{1,1,1,7,7,10,19}-&gt;{7,7,7,7,7,7,7}
</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;optimalArray() which takes N(length of array) and&nbsp;&nbsp;an&nbsp;array&nbsp;A as input and returns an&nbsp;array of size N&nbsp;&nbsp;with optimal&nbsp;answer for each index i.</span></p>

<p><strong><span style="font-size:18px">Expected Time Complexity: O(N)<br>
Expected Auxiliary Space: O(1)</span></strong></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>6</sup><br>
-10<sup>5</sup>&nbsp;&lt;= A[i] &lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">Sum of N over all test case does not exceed 10<sup>6</sup>.</span></p>
</div>