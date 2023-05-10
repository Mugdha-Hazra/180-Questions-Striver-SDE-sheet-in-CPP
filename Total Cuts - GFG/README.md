# Total Cuts
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>A</strong> of <strong>N</strong> integers and an integer <strong>K</strong>, and your task is to find the total number of cuts that you can make such that for each cut these two conditions are satisfied<br>
1. A cut divides an array into two parts equal or unequal length (non-zero).<br>
2. Sum of the largest element in the left part and the smallest element in the right part is greater than or equal to K.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=3
K=3
A[]={1,2,3}</span>
<span style="font-size:18px"><strong>Output:</strong>
2</span>
<span style="font-size:18px"><strong>Explanation:</strong>
Two ways in which array is divided to satisfy above conditions are:
{1} and {2,3} -&gt; 1+2&gt;=3(satisfies the condition)
{1,2} and {3} -&gt; 2+3&gt;=3(satisfies the condition)</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=5
K=5
A[]={1,2,3,4,5}</span>
<span style="font-size:18px"><strong>Output:</strong>
3</span>
<span style="font-size:18px"><strong>Explanation:</strong>
{1,2} and {3,4,5} -&gt; 2+3&gt;=5
{1,2,3} and {4,5} -&gt; 3+4&gt;=5
{1,2,3,4} and {5} -&gt; 4+5&gt;=5</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function totalCuts() which takes two integers N, K, and an array A of size N as input parameters, and returns an integer representing the total number of cuts that satisfy both conditions.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10^6<br>
0 &lt;= K &lt;= 10^6<br>
0 &lt;= A[i] &lt;= 10^6</span></p>
</div>