# Update Queries
## Medium
<div class="problems_problem_content__Xm_eO"><p dir="ltr"><span style="font-size:18px">You are given an array of n elements, initially all a[i] = 0. Q&nbsp;queries need to be performed. Each query contains three integers l, r, and x&nbsp; and you need to change all <strong>a[i]</strong> to <strong>(a[i] | x)</strong> for all <strong>l&nbsp;≤&nbsp;i ≤ r</strong>.</span></p>

<p dir="ltr"><span style="font-size:18px">Return the array after executing Q queries.</span></p>

<p dir="ltr"><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=3, Q=2
U=[[1, 3, 1],
   [1, 3, 2]]

<strong>Output:</strong></span>
<span style="font-size:18px">a[]={3,3,3}</span>

<span style="font-size:18px"><strong>Explanation:</strong> </span>
<span style="font-size:18px">Initially, all elements of the array are 0. After execution of the</span>
<span style="font-size:18px">first query, all elements become 1 and after execution of the </span>
<span style="font-size:18px">second query all elements become 3.</span></pre>

<p dir="ltr"><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">N=3, Q=2
U=[[1, 2, 1],
   [3, 3, 2]]

<strong>Output:</strong>
a[]={1,1,2}</span>

<strong><span style="font-size:18px">Explanantion:</span></strong>
<span style="font-size:18px">[0,0,0] =&gt; [1,1,0] =&gt; [1,1,2]</span></pre>

<p dir="ltr">&nbsp;</p>

<p dir="ltr"><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function updateQuery<strong>()</strong>&nbsp;which takes the integer N,Q, and U a&nbsp;QX3 matrix containing the Q queries where&nbsp;U[i][0] is l<sub>i</sub>, U[i][1] is r<sub>i</sub> andU[i][2] is x<sub>i</sub>.and it returns the final array a.</span></p>

<p dir="ltr"><strong><span style="font-size:18px">Expected Time Complexity: O(N)<br>
Expected Space Complexity: O(N)</span></strong></p>

<p dir="ltr"><strong><span style="font-size:18px">Constraints:</span></strong></p>

<p dir="ltr"><span style="font-size:18px">1&lt;=N&lt;=10<sup>5</sup></span></p>

<p dir="ltr"><span style="font-size:18px">1&lt;=Q&lt;=10<sup>5</sup></span></p>

<p dir="ltr"><span style="font-size:18px">1&lt;=U[i][0] &lt;= U[i][1]&lt;=N</span></p>

<p dir="ltr"><span style="font-size:18px">1&lt;= U[i][2] &lt;=10<sup>5</sup></span></p>
</div>