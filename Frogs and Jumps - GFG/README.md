# Frogs and Jumps
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><strong>N</strong>&nbsp;frogs are positioned at one end of the pond. All frogs want to reach the other end of the pond as soon as possible. The pond has some<strong>&nbsp;</strong>leaves arranged in a straight line. Each frog has the strength to jump exactly&nbsp;<strong>K&nbsp;</strong>leaves. For example, a&nbsp; frog having strength 2 will visit the leaves 2, 4, 6, ...&nbsp; etc. while crossing the pond. </span></p>

<p><span style="font-size:18px">Given the strength of each frog and the number of leaves, your task is to find the number of leaves that not be visited by any of the frogs when all frogs have reached the other end of the pond.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
leaves = 4
frogs[] = {3, 2, 4}&nbsp;
<strong>Output: </strong>1
<strong>Explanation:</strong>
Leaf 1 will not be visited by any frog.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 3
leaves = 6
frogs[] = {1, 3, 5}&nbsp;
<strong>Output: </strong>0
<strong>Explanation: </strong>
First frog will visit all the leaves so no 
leaf is left unvisited.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>unvisitedLeaves</strong><strong>()</strong> which takes the integers <strong>N</strong>, <strong>leaves</strong>&nbsp;and the array <strong>frogs</strong><strong>&nbsp;</strong>as the input parameters, and returns the number of unvisited leaves.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*log(leaves))<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(leaves)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, leaves, frogs[i] ≤ 10<sup>5</sup></span></p>
</div>