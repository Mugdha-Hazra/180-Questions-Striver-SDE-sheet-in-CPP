# Count the Number of Full Binary Trees
## Medium
<div class="problems_problem_content__Xm_eO"><div><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:20px">Given an array <strong>arr[]</strong> of <strong>n</strong> integers, where each integer is greater than 1. The task is to find the number of <a href="http://quiz.geeksforgeeks.org/binary-tree-set-3-types-of-binary-tree/">Full binary tree</a> from the given integers, such that each non-leaf node value is the product of its children value.<br>
<br>
<strong>Note:</strong> Each integer can be used multiple times in a full binary tree. The answer can be large, return&nbsp; answer modulo 1000000007<br>
<br>
<strong>Example 1:</strong></span></span></div>

<pre><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:20px"><strong>Input:</strong>
n = 4
arr[] = {2, 3, 4, 6}
<strong>Output:
</strong>7
<strong>Explanation:</strong>
There are 7 full binary tree with
the given product property.
Four trees with single nodes
2  3  4  6
Three trees with three nodes
    4   
   / \
  2   2 ,
   6    
  / \
 2   3 ,
   6
  / \
 3   2</span></span></pre>

<p>&nbsp;</p>

<div><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:20px"><strong>Example 2:</strong></span></span></div>

<pre><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:20px">Input: 
n = 3
arr[] = {2, 4, 5} 
<strong>Output: </strong>4
<strong>Explanation:</strong> There are 4 full binary tree
with the given product property. 
Three trees with single nodes 2 4 5<strong>
</strong>One tree with three nodes<strong>
</strong>   4
  / \
 2  2</span></span></pre>

<p>&nbsp;</p>

<p><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:20px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>numoffbt()</strong>&nbsp;which takes the array <strong>arr[]</strong>and its size <strong>n</strong><strong> </strong>as inputs and returns the number of Full binary tree.<br>
<br>
<strong>Expected Time Complexity:</strong> O(n. Log(n))<br>
<strong>Expected Auxiliary Space:</strong> O(n)<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ n&nbsp;≤ 10<sup>5</sup><br>
2 ≤ arr[i] ≤ 10<sup>5</sup></span></span></p>
</div>