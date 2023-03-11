# Yet another query problem
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array of <strong>N</strong> elements and <strong>num</strong>&nbsp;queries, In each query you are given three numbers L,R and K and you have to tell, how many indexes are there in between L and R(L&lt;=i&lt;=R) such that the frequency of a[i] from index i to n-1 is k.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> 0-based indexing</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=5
num=3
A={1,1,3,4,3}
Q={{0,2,2},{0,2,1},{0,4,2}}</span>
<span style="font-size:18px"><strong>Output:</strong>
2 1 2</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">For query 1: 0 2 2
L=0,R=2,K=2
let, L&lt;=i&lt;=R
For i=0: frequency of a[i] i.e. 1 from i to n-1 is 2.
For i=1: frequency of a[i] i.e. 1 from i to n-1 is 1.
For i=2: frequency of a[i] i.e. 3 from i to n-1 is 2.
Hence we have <strong>two</strong> elements from index 0 to 2 
whose frequency from i to n-1 is 2.</span>

<span style="font-size:18px">For query 2: 0 2 1
L=0,R=2,K=1
As we can see from the above query that there is 
only a single element in 0 to 2 whose frequency 
from i to n-1 is 1.</span>

<span style="font-size:18px">For query 3: 0 4 2
The answer will be 2 because of the index 0 and 2.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=5
num=2
A={1,1,1,1,1}
Q={{0,4,2},{0,4,1}}</span>
<span style="font-size:18px"><strong>Output:</strong>
1 1</span> 
<strong><span style="font-size:18px">Explanation:</span></strong> 
<span style="font-size:18px">For query 1: 0 4 4 
L=0,R=4,K=4 
let, L&lt;=i&lt;=R 
For i=0: frequency of a[i] i.e. 1 from i to n-1 is 5. 
For i=1: frequency of a[i] i.e. 1 from i to n-1 is 4. 
For i=2: frequency of a[i] i.e. 1 from i to n-1 is 3.
For i=3: frequency of a[i] i.e. 1 from i to n-1 is <strong>2</strong>.
For i=4: frequency of a[i] i.e. 1 from i to n-1 is 1. 
Hence we have <strong>one</strong> elements from index 0 to 4 whose frequency from i to n-1 is 2.</span> 

<span style="font-size:18px">Similarly For query 2: 
there is only 1 element in 0 to 4 whose frequency from i to n-1 is 1.</span>
</pre>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N<sup>2</sup></span><span style="font-size:18px">)</span><br>
<span style="font-size:18px"><strong>Expected Auxiliary Space:</strong>&nbsp;O(N<sup>2</sup>)</span></p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function solveQueries() which take two variable <strong>N</strong> and <strong>num</strong>&nbsp;representing the length of the original array and number of queries and two arrays as input, <strong>A</strong> and <strong>Q</strong> representing the original array and an array of queries(2-D array with 3 columns of<strong> L</strong>,<strong>R</strong> and <strong>K </strong>respectively), and returns the array of length <strong>num&nbsp;</strong>with the solution to each query.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>3</sup></span><br>
<span style="font-size:18px">0 &lt;= Q &lt; 10<sup>3</sup></span><br>
<span style="font-size:18px">1 &lt;= A[i] &lt;= 10<sup>5</sup></span></p>

<p><br>
<strong>&nbsp;</strong></p>
</div>