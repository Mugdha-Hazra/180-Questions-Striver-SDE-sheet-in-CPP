# Binary matrix having maximum number of 1s
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary matrix (containing only <strong>0</strong> and <strong>1</strong>) of order NxN. <strong>All rows are sorted already</strong>, We need to find the row number with the <strong>maximum number of 1s</strong>. Also, find the number of 1s in that row.<br>
<strong>Note:</strong></span></p>

<p><span style="font-size:18px">1.<strong>&nbsp;</strong>In case of a tie, print the smaller row number.<br>
2. Row number should start from 0<sup>th</sup> index.</span></p>

<p><strong><span style="font-size:18px">Example 1</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N=3
mat[3][3] = {0, 0, 1, 
&nbsp;             0, 1, 1, 
&nbsp;             0, 0, 0}
<strong>Output:</strong>
Row number = 1
MaxCount = 2</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">Here, max number of 1s is in row number 1
and its count is 2.</span></pre>

<p><span style="font-size:18px"><strong>Example 2</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N=3
mat[3][3] = {1, 1, 1, 
&nbsp;             1, 1, 1, 
&nbsp;             0, 0, 0}
<strong>Output:</strong>
Row number = 0
MaxCount = 3</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. The task is to complete the function <strong>findMaxRow()</strong> which takes mat[][] as the 2D matrix and&nbsp;N as the size of matrix. Your task is to find the row number with the <strong>maximum number of 1s </strong>and&nbsp;find the number of 1s in that row and return the answer in a vector of size 2 where at 0<sup>th&nbsp;</sup>index will be&nbsp;the row number and at 1<sup>th&nbsp;</sup>index will be MaxCount.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;= 10</span><sup><span style="font-size:15px">3</span></sup><br>
<span style="font-size:18px">0 &lt;= mat[][]&lt;= 1</span></p>
</div>