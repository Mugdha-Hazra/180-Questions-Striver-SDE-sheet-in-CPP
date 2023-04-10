# Maximum Intersecting Lines
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><strong>N&nbsp;</strong>horizontal line segments are arranged on the X-axis of a 2D plane. The start and end point of each line segment is given in a <strong>Nx2</strong> matrix <strong>lines[ ][ ]</strong>. Your task is&nbsp;to find the maximum number of intersections possible of any&nbsp;vertical line with the given <strong>N </strong>line&nbsp;segments.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4</span><span style="font-size:18px">
lines[][] = {{1,3}, {2,3}, {1,2}, {4,4}}
<strong>Output:</strong>
3
<strong>Explanation:</strong>
A vertical line at X = 2 passes through 
{1,3}, {2,3}, {1,2}, ie three of the 
given horizontal lines.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 3
lines[][] = {{1, 3}, {5, 6}, {3,4}}
<strong>Output:</strong>
2
<strong>Explanation: 
</strong>A vertical line at X = 3 passes through 
two of the given horizontal lines which 
is the maximum possible.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You dont need to read input or print anything. Complete the function <strong>maxIntersections</strong><strong>() </strong>which takes&nbsp;the 2D Matrix&nbsp;<strong>lines[][]&nbsp;</strong>and the integer&nbsp;<strong>N</strong>&nbsp;as input parameters, and returns the maximum intersections possible.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*log(N))<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 10<sup>5&nbsp;</sup><br>
-10<sup>9&nbsp;</sup>≤ lines[i][0]&nbsp;≤ 10<sup>9</sup><br>
lines[i][0] ≤ lines[i][1]&nbsp;≤ 10<sup>9</sup></span></p>
</div>