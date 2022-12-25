# Missing number in matrix
## Easy
<div class="problems_problem_content__Xm_eO"><p>Given a matrix of size <strong>n x n</strong>&nbsp;such that it has only <strong>one</strong> <strong>0</strong>, Find the <strong>positive&nbsp;number</strong>&nbsp;(greater than zero) to be placed in place of the 0&nbsp;such that sum of the numbers in every row, column and two diagonals become equal. If no such number exists, return -1.</p>

<p><strong>Note:</strong>&nbsp;Diagonals should be only of the form matrix[i][i]&nbsp;and matrix[i][n-i-1]. <strong>n</strong> is always greater than 1.<br>
&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong>matrix = {{5, 5}, {5, 0}}
<strong>Output: </strong>5
<strong>Explanation: </strong>The matrix is
5 5
5 0
Therefore If we place 5 instead of 0, all
the element of matrix will become 5. 
Therefore row 5+5=10, column 5+5=10 and 
diagonal 5+5=10, all are equal.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong>matrix = {{1, 2, 0}, {3, 1, 2}, 
{2, 3, 1}}
<strong>Output: </strong>-1
<strong>Explanation: </strong>It is not possible to insert 
an element in place of 0 so that the 
condition is satisfied.thus result is -1.&nbsp;

</pre>

<p><strong>Your Task:</strong><br>
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong>MissingNo()&nbsp;</strong>which takes the matrix as input parameter and returns the number which should be placed in place of 0 such that the condition gets satisfied. If not possible return -1.<br>
&nbsp;</p>

<p><strong>Expected Time Complexity:&nbsp;</strong>O(n * n)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(2 * n)<br>
&nbsp;</p>

<p><strong>Constraints:</strong><br>
2 &lt;= n &lt;= 1000<br>
1 &lt;= elements in the matrix &lt;= 10^9</p>
</div>