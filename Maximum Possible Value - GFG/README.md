# Maximum Possible Value
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two arrays <strong>A[]</strong> and <strong>B[]</strong> of same length <strong>N</strong>. There are N types of sticks of lengths specified. Each stick of length <strong>A[i]&nbsp;</strong>is present in <strong>B[i]</strong>&nbsp;units (i=1 to N). You have to construct the squares and rectangles using these sticks. Each unit of a stick can be used as length or breadth of a rectangle or as a side of square. A single unit of a stick can be used only once.</span></p>

<p><span style="font-size:18px">Let <strong>S</strong> be the sum of lengths of all sticks that are used in constructing squares and rectangles. The task is to calulate the maximum possible value of S.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> Each kind of stick has a different length.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
A[] = {3,4,6,5}
B[] = {2,3,1,6}
<strong>Output:</strong> 
38
<strong>Explanation: 
</strong>There are 2 sticks of length 3.
There are 3 sticks of length 4.
There is a 1 stick of length 6.
There are 6 sticks of length 5.
One square can be made using 4 sticks of
4th kind (5*4=20)
A rectangle can be made using 2 sticks of 
4th kind and 2 sticks of 2nd kind (5*2+4*2=18)
<strong>S</strong> = 20 + 18 = 38
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 1
A[] = {3}
B[] = {2}
<strong>Output: 
</strong>0
<strong>Explanation: 
</strong>There are only 2 sticks of length 3 which are 
not enough to make the square or rectangle.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;</strong><br>
You don't need to read input or print anything. Complete the function<strong>&nbsp;maxPossibleValue( )</strong>&nbsp;which takes the integer&nbsp;<strong>N</strong>&nbsp;, the array&nbsp;<strong>A[],</strong>&nbsp;and the array&nbsp;<strong>B[]</strong>&nbsp;as input parameters and returns the maximum possible value of S.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤&nbsp;10<sup>6</sup><br>
1 ≤ A[]&nbsp;≤ 10<sup>9</sup><br>
1 ≤ B[]&nbsp;≤ 10<sup>3</sup></span></p>
</div>