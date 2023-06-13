# k largest elements
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>Arr</strong> of <strong>N</strong> positive integers and an integer <strong>K</strong>, find&nbsp;<strong>K</strong> <strong>largest elements </strong>from the array.&nbsp; The output elements should be printed in decreasing order.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 5, K = 2
Arr[] = {12, 5, 787, 1, 23}
<strong>Output:</strong> 787 23
<strong>Explanation:</strong> 1st largest element in the
array is 787 and second largest is 23.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 7, K = 3
Arr[] = {1, 23, 12, 9, 30, 2, 50}
<strong>Output:</strong> 50 30 23
<strong>Explanation:</strong>&nbsp;3 Largest element in the
array are 50, 30 and 23.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>kLargest()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers&nbsp;<strong>arr,</strong>&nbsp;<strong>n </strong>and<strong> k&nbsp;</strong>as parameters and returns an array of integers denoting the answer. The array should be in decreasing order.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N + KlogK)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(K+(N-K)*logK)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ K&nbsp;≤ N ≤ 10<sup>5</sup><br>1 ≤ Arr[i] ≤ 10<sup>6</sup></span><br>&nbsp;</p></div>