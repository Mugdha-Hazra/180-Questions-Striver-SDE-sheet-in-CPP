# Subtree In N-ary Tree
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given the root of a&nbsp;n-ary tree find the number of duplicate subtrees in the&nbsp;n-ary tree. Two trees are&nbsp;<strong>duplicates</strong>&nbsp;if they have the&nbsp;<strong>same structure</strong>&nbsp;with the&nbsp;<strong>same node values</strong>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
1 N 2 2 3 N 4 N 4 4 3 N N N N N
<img alt="" src="https://media.geeksforgeeks.org/img-practice/n-ary-1-1668854978.PNG" style="height:241px; width:400px">
<strong>Output:</strong> 
2
<strong>Explanation:</strong> 
[4], [3] are duplicate subtree.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">1 N 2 3 N 4 5 6 N N N N
<img alt="" src="https://media.geeksforgeeks.org/img-practice/Duplicaten-arytree-1-1668674633.png">
<strong>Output:</strong> 
0
<strong>Explanation:</strong> 
No duplicate subtree found.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function duplicateSubtreeNaryTree</span><span style="font-size:18px">() which takes the root of the n-ary tree as input and returns an integer value as a number of duplicate subtrees.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n), n is the total no of nodes<br>
<strong>Expected Space Complexity:</strong> O(n<sup>2</sup>)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
&nbsp;&nbsp;&nbsp;1 &lt;= n &lt;&nbsp;10<sup>3</sup><br>
&nbsp;&nbsp;&nbsp;1 &lt;= node.key&lt;&nbsp;10<sup>3</sup></span></p>
</div>