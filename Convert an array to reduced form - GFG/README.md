# Convert an array to reduced form
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array with <strong>N</strong>&nbsp;distinct elements, convert the given array to a reduced form where all elements are in range from <strong>0</strong> to <strong>N-1</strong>. The order of elements is same, i.e., <strong>0</strong> is placed in place of smallest element, <strong>1</strong> is placed for second smallest element, and&nbsp;<strong>N-1</strong> is placed for the largest element.</span></p>

<p><strong><span style="font-size:18px">Note:&nbsp;</span></strong><span style="font-size:18px">You don't have to return anything. You just have to change the given array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
Arr[] = {10, 40, 20}
<strong>Output: </strong>0 2 1
<strong>Explanation:</strong> 10 is the least element so it
is replaced by 0. 40 is the largest
element so it is replaced by 3-1 = 2. And
20 is the 2nd smallest element so it is
replaced by 1.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
Arr[] = {5, 10, 40, 30, 20}
<strong>Output:</strong> 0 1 4 3 2
<strong>Explanation:</strong>&nbsp;As 5 is smallest element,
it's replaced by 0. Then 10 is 2nd
smallest element, so it's replaced by 1.
Then 20 is 3rd smallest element, so it's
replaced by 2. And so on.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>convert()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers&nbsp;<strong>arr&nbsp;</strong>and&nbsp;<strong>n&nbsp;</strong>as parameters and makes changes in the given array.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*logN)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ Arr[i] ≤ 10<sup>6</sup></span></p>

<p>&nbsp;</p>
</div>