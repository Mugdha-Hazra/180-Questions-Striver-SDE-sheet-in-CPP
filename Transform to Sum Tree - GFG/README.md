# Transform to Sum Tree
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Binary Tree of size N , where each node can have positive or negative values. Convert this to a tree where value of each node will be the sum of the values of all the nodes in left and right sub trees of the original tree. The values of leaf nodes are changed to 0.<br>
<strong>Note: </strong>You have to modify the given tree in-place.</span></p>

<p><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
             10
          /      \
        -2        6
       /   \     /  \
      8    -4   7    5</span>
<span style="font-size:18px"><strong>Output:</strong>
            20
          /     \
        4        12
       /  \     /  \
     0     0   0    0</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">           (4-2+12+6)
          /           \
      (8-4)          (7+5)
       /   \         /  \
      0     0       0    0</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
            10
        /        \
      -2           6
     /   \        /  \
    8    -4      7     5</span>
    <span style="font-size:18px">/ \   / \    / \   / \
&nbsp; 2  -2 3  -5  9  -8 2   8</span>
<span style="font-size:18px"><strong>Output:</strong>
            29
        /        \
       2          23
     /  \        /  \
    0   -2      1    10
&nbsp;  / \  / \    / \   / \</span>
   <span style="font-size:18px">0  0 0   0  0   0 0   0</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">                 (2+6+8-4+7+5+2-2+3-5+9-8+2+8)
               /                                \
          (8-4+2-2+3-5)                    (7+5+9-8+2+8)
          /      \                            /      \       
       (2-2)   (3-5)                        (9-8)    (2+8)</span>
        <span style="font-size:18px">/     \  /    \                      /     \   /     \</span>
      <span style="font-size:18px"> 0      0 0      0                   0        0 0       0</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task</strong></span><strong>:&nbsp; </strong><br>
<span style="font-size:18px">You dont need to read input or print anything. Complete the function<strong> toSumTree()</strong> which takes root node as input parameter and modifies the given tree in-place.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> If you click on Compile and Test the output will be the in-order traversal of the modified tree.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N)<br>
<strong>Expected Auxiliary Space: </strong>O(height of tree)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 10<sup>4</sup></span></p>
</div>