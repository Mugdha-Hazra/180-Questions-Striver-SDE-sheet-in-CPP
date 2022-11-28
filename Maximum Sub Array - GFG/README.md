# Maximum Sub Array
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Find out the maximum sub-array of non negative numbers from an array.</span></p>

<p><span style="font-size:18px">The <strong>sub-array should be contiguous</strong> i.e., a sub-array created by choosing the second and fourth element and skipping the third element is invalid.</span></p>

<p><span style="font-size:18px">Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array <strong>A</strong> is greater than sub-array <strong>B</strong> if <strong>sum(A) &gt; sum(B)</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong><br>
a = [1, 2, 5, -7, 2, 3]<br>
The two sub-arrays are [1, 2, 5] [2, 3].<br>
The answer is [1, 2, 5] as its sum is larger than [2, 3]</span></p>

<p><span style="font-size:18px"><strong>NOTE:</strong> If there is a tie, then compare with segment's length and return segment which has maximum length.<br>
If there is still a tie, then return the segment with minimum starting index.<br>
If no such subarray is present return "<strong>-1</strong>"</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 3
a[] = {1, 2, 3}
<strong>Output:</strong> 1 2 3
<strong>Explanation:</strong> In the given array every
element is non-negative.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 2
a[] = {-1, 2}
<strong>Output:</strong> 2
<strong>Explanation:</strong>&nbsp;The only subarray [2] is
the answer.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>findSubarray()</strong>&nbsp;which takes the array&nbsp;<strong>a</strong>&nbsp;and the size of the array, <strong>n</strong>,&nbsp;as input parameters&nbsp;and returns an array&nbsp;representing the answer. If there is no subarray return an array of length&nbsp;<strong>1</strong> containing <strong>-1</strong> only.&nbsp;You don't to print answer or take inputs.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
-10<sup>5&nbsp;</sup>≤ A[i] ≤ 10<sup>5</sup></span></p>
</div>