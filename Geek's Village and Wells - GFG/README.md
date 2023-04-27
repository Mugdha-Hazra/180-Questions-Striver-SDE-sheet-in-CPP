# Geek's Village and Wells
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek's village is represented by a 2-D matrix of characters of size n*m, where</span></p>

<p><span style="font-size:18px">H - Represents a house<br>
W - Represents a well<br>
. - Represents an open ground<br>
N - Prohibited area(Not allowed to enter this area)</span></p>

<p><span style="font-size:18px">Every house in the village needs to take the water from the well, as the family members are so busy with their work, so every family wants to take the water from the well in minimum time, which is possible only if they have to cover as less distance as possible. Your task is to determine the minimum distance that a person in the house should travel to take out the water and carry it back to the house.</span></p>

<p><span style="font-size:18px">A person is allowed to move only in four directions left, right, up, and down. That means if he/she is the cell (i,j), then the possible cells he/she can reach in one move are (i,j-1),(i,j+1),(i-1,j),(i+1,j), and the person is not allowed to move out of the grid.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> For all the cells containing 'N', 'W' and '.' our answer should be 0, and for all the houses where there is no possibility of taking water our answer should be -1.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 3
m = 3
c[][]: H H H
       H W H
&nbsp;      H H H</span>
<span style="font-size:18px"><strong>Output:</strong>
4 2 4 
2 0 2 
4 2 4</span>
<span style="font-size:18px"><strong>Explanation:</strong>
There is only one well hence all the houses present
in the corner of matrix will have to travel a minimum
distance of 4, 2 is for house to well and other two is
for well to house. And rest of the houses have to travel
a minimum distance of 2 (House -&gt; Well -&gt; House).</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 5
m = 5
c[][]: H N H H H
&nbsp;      N N H H W
&nbsp;      W H H H H
&nbsp;      H H H H H
&nbsp;      H H H H H</span>
<span style="font-size:18px"><strong>Output:</strong>
-1 0 6 4 2 
0 0 4 2 0 
0 2 4 4 2 
2 4 6 6 4 
4 6 8 8 6</span>
<span style="font-size:18px"><strong>Explanation:</strong>
There is no way any person from the house in
cell (0,0) can take the water from any well, and
for rest of the houses there is same type of
strategy we have to follow as followed in example 1. </span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function geekAndWells() which takes n and m, dimensions of the grid, and a 2-D grid of size n*m and returns a 2-D array containing the minimum distance for all the houses as explained above.</span></p>

<p><strong><span style="font-size:18px">Expected Time Complexity: O(n*m)<br>
Expected Space Complexity: O(n*m)</span></strong></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10^3<br>
1 &lt;= m &lt;= 10^3</span></p>
</div>