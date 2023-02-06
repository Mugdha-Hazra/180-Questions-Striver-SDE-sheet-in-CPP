# BST Downward Traversal
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Binary Search Tree with <strong>unique</strong> node values and a <strong>target</strong> value. You have to find the node whose data is equal to target and return the sum of all <strong>descendant node's</strong> data which are <strong>vertically below</strong> the target node. Initially, you are at the <strong>root </strong>node.<br>
<strong>Note: </strong>If <strong>target</strong> node is not present in bst then return <strong>-1.</strong></span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<img alt="" src="https://media.geeksforgeeks.org/img-practice/BSTDownwardTraversal-1662975635.png" style="height:300px; width:394px">

<span style="font-size:18px"><strong>Target</strong> = 35
<strong>Output:</strong> 32
<strong>Explanation:</strong> Vertically below 35 is 32.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:
</strong></span><img alt="" src="https://media.geeksforgeeks.org/img-practice/BSTDownwardTraversal-1662975635.png" style="height:300px; width:394px">
<span style="font-size:18px">Target = 25
<strong>Output:</strong> 52
<strong>Explanation:</strong> Vertically below 25 is 22, 30 and their sum is 52.<strong>
</strong></span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function verticallyDownBST() which takes BST(you are given root node of bst )&nbsp;and target&nbsp;as input, and return an interger value as the sum of vertically down nodes from target. If target is not present in bst then return -1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O( n ), n is number of nodes.<br>
<strong>Expected Auxiliary Space:</strong> O(Height of the tree).</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 &lt;= n &lt;&nbsp;10<sup>6</sup><br>
1 &lt;= target &lt;= n<br>
1 &lt;= node.data&nbsp;&lt;&nbsp;10<sup>6</sup></span><br>
&nbsp;</p>
</div>