# Unequal Arrays
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given two arrays <strong>A </strong>and <strong>B </strong>each of length <strong>N</strong>.&nbsp;You can perform the following operation on array<em> A</em> zero or more times.&nbsp;</span></p>

<ul>
	<li><span style="font-size:18px">Select any two indices <strong>i</strong> and <strong>j</strong>, <strong>1 &lt;= i , j &lt;= N </strong>and <strong>i != j</strong></span></li>
	<li><span style="font-size:18px">Set <strong>A[i]&nbsp;</strong>= <strong>A[i]&nbsp;</strong>+ <strong>2 </strong>and <strong>A[j] = A[j]-2 </strong></span></li>
</ul>

<p><span style="font-size:18px">Find the <strong>minimum </strong>number of operations required to make A and B <strong>equal</strong>.</span></p>

<p><em><span style="font-size:18px">Note :</span></em></p>

<ul>
	<li><span style="font-size:18px">Two arrays are said to be equal if the frequency of each element is equal in both of them.</span></li>
	<li><span style="font-size:18px">Arrays may contain duplicate elements.</span></li>
</ul>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 3
A[] = {2, 5, 6}
B[] = {1, 2, 10}
<strong>Output:</strong> 2
<strong>Explanation</strong>: </span>
<span style="font-size:18px">Select i = 3, j = 2, A[3] = 6 + 2 = 8 and A[2] = 5 - 2 = 3</span>
<span style="font-size:18px">Select i = 3, j = 2, A[3] = 8 + 2 = 10 and A[2] = 3 - 2 = 1</span>
<span style="font-size:18px">Now A = {2, 1, 10} and B = {1, 2, 10}</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 2
A[] = {3, 3}
B[] = {9, 8}
<strong>Output:</strong> -1
<strong>Explanation</strong>: </span>
<span style="font-size:18px">It can be shown that <strong>A </strong>cannot be made equal to <strong>B</strong>.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp; </strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>solve()</strong> which takes the 2 arrays <strong>A[]</strong>, <strong>B[]</strong>&nbsp;and their&nbsp;size <strong>N </strong>as input parameters and returns the <strong>minimum </strong>number of moves to make A and B equal if possible else return <strong>-1</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NlogN)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
-10<sup>9</sup> &lt;= A[i] &lt;= 10<sup>9</sup><br>
-10<sup>9</sup> &lt;= B[i] &lt;= 10<sup>9</sup></span></p>

<p>&nbsp;</p>
</div>