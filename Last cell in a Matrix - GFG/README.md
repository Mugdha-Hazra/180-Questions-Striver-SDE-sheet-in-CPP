# Last cell in a Matrix
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary matrix&nbsp;of dimensions&nbsp;&nbsp;with <strong>R</strong>&nbsp;rows and <strong>C</strong>&nbsp;columns. Start from&nbsp;<strong>cell(0, 0)</strong>, moving in the&nbsp;<strong>right</strong> direction. Perform the following operations:&nbsp;</span></p>

<ul>
	<li><span style="font-size:18px">If the value of&nbsp;<strong>matrix[i][j]</strong>&nbsp;is&nbsp;<strong>0</strong>, then traverse in the same direction and check the next value.</span></li>
	<li><span style="font-size:18px">If the value of&nbsp;<strong>matrix[i][j]</strong>&nbsp;is&nbsp;<strong>1</strong>, then update&nbsp;<strong>matrix[i][j]</strong>&nbsp;to&nbsp;<strong>0</strong>&nbsp;and change the current direction clockwise. ie -&nbsp;<strong>up</strong>,&nbsp;<strong>right</strong>,&nbsp;<strong>down</strong>, or&nbsp;<strong>left</strong>&nbsp;directions change to&nbsp;<strong>right</strong>,&nbsp;<strong>down</strong>,&nbsp;<strong>left</strong>, and&nbsp;<strong>up</strong>&nbsp;respectively.</span></li>
</ul>

<p><span style="font-size:18px">Find the index of the cell where you will be forced to exit the matrix while performing the given traversal.&nbsp;</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
matrix[][] = {{0,1},
              {1,0}}
R=2
C=2</span>

<span style="font-size:18px"><strong>Output:</strong> (1,1)
<strong>Explanation:</strong>
<img alt="" src="https://media.geeksforgeeks.org/img-practice/endpoint1-1622886995.jpg" style="height:178px; width:300px">
<img alt="" src="https://media.geeksforgeeks.org/img-practice/endpoint2-1622887085.jpg" style="height:178px; width:500px">
<img alt="" src="https://media.geeksforgeeks.org/img-practice/endpoint3-1622887174.jpg" style="height:250px; width:500px"></span>

</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
matrix[][] = {{0, 1, 1, 1, 0},</span>
                   <span style="font-size:18px">{1, 0, 1, 0, 1},
              {1, 1, 1, 0, 0}}
R=3
C=5</span>

<span style="font-size:18px"><strong>Output:</strong> (2,0)
<strong>Explanation: </strong>We will leave the grid after visiting the index (2,0).</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>endPoints()</strong>&nbsp;which take a 2D matrix<strong>[][] </strong>, an integer <strong>R</strong> and an integer <strong>C </strong>as input parameters and returns the index of the last cell before exiting the matrix.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Space Complexity:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;= R,C&lt;=1000<br>
0&lt;= matrix[i][j] &lt;=1</span></p>
</div>