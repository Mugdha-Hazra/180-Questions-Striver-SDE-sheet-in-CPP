# Adding Ones
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You start with an array <strong>A</strong> of size <strong>N</strong>. Initially all elements of the array A are <strong>zero</strong>. You will be given <strong>K</strong> positive integers. Let <strong>j</strong> be one of these integers, you have to add <strong>1</strong> to all <strong>A[i]</strong>, where <strong>i ≥ j</strong>. Your task is to print the array A after all these <strong>K</strong> updates are done. <br><strong><br>Note:</strong> 1-based indexing is followed for updates.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1: </strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 3, K = 4
1 1 2 3
<strong>Output:</strong>
2 3 4
<strong>Explanation:</strong>
Initially the array is {0, 0, 0}. After the
first 1, it becomes {1, 1, 1}. After the
second 1 it becomes {2, 2, 2}. After 2, <br>it becomes {2, 3, 3} and <br>After 3 it becomes, {2, 3, 4}. </span></pre>
<p><span style="font-size: 18px;"><strong>Example 2: </strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 2, K = 3
1 1 1
<strong>Output:</strong>
3 3 
<strong>Explanation:</strong>
Initially the array is {0, 0}. After the
first 1, it becomes {1, 1}. After the
second 1 it becomes {2, 2}. After the
third 1, it becomes {3, 3}.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>update()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and make the updates and fill the array <strong>A[].</strong></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(N)<br><strong>Expected Auxiliary Space: </strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N, K ≤ 10<sup>5</sup></span></p>
<p><span style="font-size: 18px;">1<sup>&nbsp;</sup>≤ updates[i]&nbsp;≤ N, for all i from 1 to N.</span></p></div>