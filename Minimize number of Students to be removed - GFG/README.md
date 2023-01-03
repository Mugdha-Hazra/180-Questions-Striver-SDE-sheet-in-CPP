# Minimize number of Students to be removed
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><strong>N</strong> Students of different heights are attending an assembly. The heights of the students are represented by an array<strong> </strong><strong>H[]. </strong>The problem is that if a student has less or equal height than the student standing in front of him, then he/she cannot see the assembly. Find the minimum number of students to be removed such that maximum possible number of students can see the assembly.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 6
H[] = {9, 1, 2, 3, 1, 5}
<strong>Output:
</strong>2
<strong>Explanation:</strong>
We can remove the students at 0 and 4th index.</span>
<span style="font-size:18px">which will leave the students with heights
1,2,3, and 5.</span>
</pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
H[] = {1, 2, 3} 
<strong>Output :</strong>
0</span>
<span style="font-size:18px"><strong>Explanation:</strong>
All of the students are able to see the
assembly without removing anyone.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>removeStudents()</strong>&nbsp;which takes an integer N and an array H[ ] of size N as input parameters and returns the minimum number of students required to be removed to enable&nbsp;maximum number of students to see&nbsp;the assembly.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N logN)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ H[i] ≤ 10<sup>5</sup></span></p>
</div>