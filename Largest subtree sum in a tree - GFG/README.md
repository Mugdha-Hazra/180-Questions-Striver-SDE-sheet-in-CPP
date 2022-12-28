# Largest subtree sum in a tree
## Hard
<div class="problems_problem_content__Xm_eO"><p>Given a binary tree. The task is to find subtree with maximum sum in the tree and return its sum.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong>
              1
            /   \
           2      3
          / \    / \
         4   5  6   7
<strong>Output: </strong>28
<strong>Explanation:</strong> 
As all the tree elements are positive,
the largest subtree sum is equal to
sum of all tree elements.</pre>

<pre>
<strong>Example 2:</strong>
<strong>Input:</strong>
               1
            /    \
          -2      3
          / \    /  \
         4   5  -6   2
<strong>Output: </strong>7
<strong>Explanation: </strong>
Subtree with largest sum is : 
  -2
 /  \ 
4    5
Also, entire tree sum is also 7.</pre>

<p>&nbsp;</p>

<p><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>findLargestSubtreeSum</strong><strong>()</strong>&nbsp;which takes the root of a binary tree and returns an integer.<br>
&nbsp;</p>

<p><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</p>

<p><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10^5<br>
-10^3&nbsp;&lt;= tree.val&nbsp;&lt;= 10^3</p>
</div>