# Arranging the array
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an array of size <strong>N</strong>. Rearrange the given array in-place such that all the negative numbers occur before all non-negative numbers.<br>(Maintain the order of all -ve and non-negative numbers as given in the original array).<br></span><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 4
Arr[] = {-3, 3, -2, 2}
<strong>Output:</strong>
-3 -2 3 2
<strong>Explanation:</strong>
In the given array, negative numbers
are -3, -2 and non-negative numbers are 3, 2. </span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 4
Arr[] = {-3, 1, 0, -2}
<strong>Output:</strong>
-3 -2 1 0
<strong>Explanation:</strong>
In the given array, negative numbers
are -3, -2 and non-negative numbers are 1, 0.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>Rearrange()</strong>&nbsp;which takes the array <strong>Arr[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns the array after rearranging with spaces between the elements of the array.<br></span><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N. Log(N))<br><strong>Expected Auxiliary Space:</strong> O(Log(N))</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>5</sup><br>-10<sup>9</sup> ≤ Elements of array ≤ 10<sup>9</sup></span></p></div>