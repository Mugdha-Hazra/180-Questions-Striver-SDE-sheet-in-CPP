# Transpose of Matrix
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Write a program to find the <strong>transpose </strong>of a square matrix&nbsp;of size N*N. Transpose of a matrix is obtained by changing rows to columns and columns to rows.</span><br><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
N = 4
mat[][] = {{1, 1, 1, 1},
&nbsp;          {2, 2, 2, 2}
&nbsp;          {3, 3, 3, 3}
&nbsp;          {4, 4, 4, 4}}
<strong>Output</strong>: 
{{1, 2, 3, 4}, &nbsp;
&nbsp;{1, 2, 3, 4} &nbsp;
&nbsp;{1, 2, 3, 4}
&nbsp;{1, 2, 3, 4}} </span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
N = 2
mat[][] = {{1, 2},
&nbsp;          {-9, -2}}
<strong>Output</strong>:
{{1, -9}, 
&nbsp;{2, -2}}
</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong></span><br><span style="font-size: 18px;">You dont need to read input or print anything.&nbsp;</span><span style="font-size: 18px;">Complete the function <strong>transpose</strong>() which takes matrix[][] and N as input parameter and&nbsp;finds the transpose of the input matrix. You need to do this in-place. That is you need to update the original matrix with the transpose.&nbsp;<br><br><strong>Expected Time Complexity:</strong> O(N * N)<br><strong>Expected Auxiliary Space:</strong> O(1)<br><br><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>3</sup><br>-10<sup>9</sup> &lt;= mat[i][j] &lt;= 10<sup>9</sup></span></p></div>