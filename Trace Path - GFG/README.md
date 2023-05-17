# Trace Path
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">There is a rectangular path for a Train to travel consisting of <strong>n&nbsp;</strong>rows and <strong>m</strong>&nbsp;columns. The train will start from one of the grid's cells and it will be given a command in the form of string <strong>s</strong>&nbsp;consisting of characters <strong>L</strong>, <strong>R</strong>,<strong> D</strong>, <strong>U</strong>. Find if it is possible to travel the train inside the grid only.<br><strong>Note: <br></strong>If the train is at position (i,j) <br>on taking 'L' it goes to (i,j-1),<br>on taking 'R' it goes to (i,j+1),<br>on taking 'D' it goes to (i-1,j),<br>on taking 'U' it goes to (i+1,j).<br></span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
n = 1, m = 1
s = "R"
<strong>Output:</strong> 0
<strong>Explaination:</strong> There is only one cell(1,1). So train can only start from (1,1). On taking right(R) train moves to (1,2), which is out of grid.<br>Therefore there is no cell from where train can start and remain inside the grid after tracing the route. </span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
n = 2, m = 3
s = "LLRU"
<strong>Output:</strong> 1
<strong>Explaination:</strong> One possible cell is (1,3)<br>(1,3) --&gt; (1,2) --&gt; (1,1) --&gt; (1,2) --&gt; (2,2). Thus there is a cell from where if train starts, it remains inside the grid throughout tracing the route.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>isPossible()</strong> which takes n, m and s as input parameters and <strong>returns 1</strong> if there is such a cell for which the train always remains inside the grid. Otherwise <strong>returns</strong> <strong>0</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(|s|)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n, m ≤ 10<sup>4</sup><br>1 ≤ |s| ≤ 10<sup>4</sup>&nbsp; &nbsp;</span></p></div>