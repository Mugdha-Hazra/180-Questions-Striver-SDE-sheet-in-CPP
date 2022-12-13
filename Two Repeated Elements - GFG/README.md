# Two Repeated Elements
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array of <strong>N+2</strong> integer elements. All elements of the array are in the range 1 to N. Also,&nbsp;all elements occur once except two numbers which occur twice. Find the two repeating numbers.<br>
<br>
<strong>Note: </strong>Return the numbers in their order of appearing twice. So, if X and Y are the repeating numbers, and X repeats twice before Y repeating twice, then the order should be (X, Y).</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
array[] = {1,2,1,3,4,3}
<strong>Output: </strong>1 3<strong>
Explanation: </strong>In the given array, 
1 and 3 are repeated two times.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2
array[] = {1,2,2,1}
<strong>Output: </strong>2 1<strong>
Explanation: </strong>In the given array,
1 and 2 are repeated two times 
and second occurence of 2 comes 
before 1. So the output is 2 1.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>repeatedElements</strong>() which takes array arr[] and an integer N as inputs (the size of the array is N + 2 and elements are in the range[1, N]) and&nbsp;finds the two repeated element in the array and return them in a list.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints: </strong><br>
2 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ array[i] ≤ N</span></p>
</div>