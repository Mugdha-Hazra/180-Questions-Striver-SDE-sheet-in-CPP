# BST Maximum Difference
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a Binary Search Tree and a target value. You must&nbsp;find the maximum difference between the sum of node data from root to target and from target to a child leaf node (target exclusive). Initially, you are at the <strong>root </strong>node.<br>
<strong>Note: </strong>If the target node is not present in the tree&nbsp;then return -1.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<img alt="" src="https://media.geeksforgeeks.org/img-practice/BSTDownwardTraversal-1662975635.png" style="height:228px; width:300px">

<span style="font-size:18px">Target = 20
<strong>Output:</strong> 10
<strong>Explanation:</strong> From root to target the sum of node data is 25 and from target to the children leaf nodes the sums of the node data are 15 and 25. So, the maximum difference will be (25-15) = 10.
</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span>
</strong><img alt="" src="https://media.geeksforgeeks.org/img-practice/BSTDownwardTraversal-1662975635.png" style="height:228px; width:300px">
<span style="font-size:18px">Target = 50
<strong>Output:</strong> -1
<strong>Explanation:</strong> The target node is not present in the tree.</span><strong>
</strong></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function maxDifferenceBST() which takes BST(you are given the root node of the BST&nbsp;)&nbsp;and target&nbsp;as input, and returns an interger value as the required answer. If the target is not present in the BST&nbsp;then return -1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(H), H - Height of the Tree.</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;&nbsp;10^4<br>
1 &lt;= node.data&nbsp;&lt;&nbsp;10^5<br>
1 &lt;= target &lt;&nbsp;10^5</span></p>
</div>