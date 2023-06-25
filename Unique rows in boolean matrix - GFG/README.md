# Unique rows in boolean matrix
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary matrix your task is to find all unique rows of the given matrix in the order of their appearance in the matrix. </span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>row = 3, col = 4 
M[][] = {{1 1 0 1},{1 0 0 1},{1 1 0 1}}
<strong>Output: </strong>$1 1 0 1 $1 0 0 1 $<strong>
Explanation: </strong>Above the matrix of size 3x4
looks like
1 1 0 1
1 0 0 1
1 1 0 1
The two unique rows are R<sub>1</sub>: {1 1 0 1} and R<sub>2</sub>: {1 0 0 1}. <br>As R<sub>1 </sub>first appeared at row-0 and R<sub>2</sub> appeared at row-1, in the resulting list, R<sub>1</sub> is kept before R<sub>2</sub>.</span></pre>
<p style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; font-size: medium; white-space: normal;"><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><strong>Input:
</strong>row = 2, col = 4 
M[][] = {{0 0 0 1}, {0 0 0 1}}
<strong>Output: $</strong>0 0 0 1 $<strong>
Explanation: </strong>Above the matrix of size 2x4
looks like
0 0 0 1
0 0 0 1
Only unique row is $0 0 0 1 $</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You only need to implement the given function&nbsp;<strong>uniqueRow()</strong>.&nbsp;The function takes three arguments the first argument is a matrix <strong>M</strong> and the next two arguments are <strong>row</strong>&nbsp;and <strong>col</strong>&nbsp;denoting the rows and columns&nbsp;of the matrix.&nbsp;The function should <strong>return</strong> the list of the unique row of the matrix. Do not read input, instead use the arguments given in the function.</span></p>
<p><span style="font-size: 18px;"><strong>Note:&nbsp;</strong>The driver code prints the rows "$" separated. You have to just return list of rows, you do not have to worry about printing anything.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(row * col)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(row * col)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=row,col&lt;=40<br>0&lt;=M[][]&lt;=1</span></p></div>