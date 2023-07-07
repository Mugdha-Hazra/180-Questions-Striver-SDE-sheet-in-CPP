# Merge Without Extra Space
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two sorted arrays <strong>arr1[]</strong> and <strong>arr2[] </strong>of<strong>&nbsp;</strong>sizes <strong>n</strong>&nbsp;and <strong>m</strong> in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
n = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
<strong>Output</strong>: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
<strong>Explanation</strong>:
After merging the two 
non-decreasing arrays, we get, 
0 1 2 3 5 6 7 8 9.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
n = 2, arr1[] = [10 12] 
m = 3, arr2[] = [5 18 20]
<strong>Output</strong>: 
arr1[] = [5 10]
arr2[] = [12 18 20]
<strong>Explanation</strong>:
After merging two sorted arrays 
we get 5 10 12 18 20.</span>
</pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">You don't need to read input or print anything.&nbsp;You only need to complete the function<strong> merge()&nbsp;</strong>that takes arr1, arr2, n and m as input parameters and modifies them in-place so that they look like the sorted merged array when concatenated.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> &nbsp;O((n+m) log(n+m))<br><strong>Expected Auxilliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= n, m&nbsp;&lt;= 10<sup>5</sup><br>0 &lt;= arr1<sub>i</sub>, arr2<sub>i</sub>&nbsp;&lt;= 10<sup>7</sup></span></p></div>