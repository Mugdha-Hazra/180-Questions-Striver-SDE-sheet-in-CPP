# Shortest Path by Removing K walls
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a 2-D binary <strong>matrix</strong> of size <strong>n*m</strong>, where 0 represents an empty space while 1 represents a wall you cannot walk through. You are also given an integer <strong>k</strong>.<br>
You can walk up, down, left, or right. Given that you can remove up to <strong>k</strong> walls, return the minimum number of steps to walk from the top left corner (0, 0) to the bottom right corner (n-1, m-1).</span><br>
<span style="font-size:18px"><strong>Note: </strong>If there is no way to walk from the top left corner to the bottom right corner, return -1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 3, m = 3, k = 1
mat = {{0, 0, 0},
       {0, 0, 1},
       {0, 1, 0}}
<strong>Output:
</strong>4<strong>
Explanation:
</strong>We can remove any one of the walls and
reach the bottom in 4 moves. </span> 
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 2, m = 2, k = 0
mat[] = {{0, 1},
         {1, 0}}
<strong>Output:
</strong>-1<strong>
Explanation:
</strong>There's no way of reaching the bottom
corner without removing any walls.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>shotestPath</strong>() which takes three integers n, m, and k and also a matrix of size n*m as input and returns the minimum number of steps to walk from the top left corner to the bottom right corner.</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n,m ≤ 50<br>
0 ≤ k ≤ n*m<br>
Top left and bottom right corners doesn't have 1</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n*m*k).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(n*m*k).</span></p>
</div>