# Binary Modulo
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a binary <strong>string s</strong> and an <strong>integer m</strong>. You need to return an <strong>integer r</strong>. Where <strong>r = k%m</strong>, k is the binary equivalent of <strong>string s</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">s = "101" </span>
<span style="font-size:18px">m = 2</span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">1</span>
<span style="font-size:18px"><strong>Explanation:</strong> Here k=5 because (101)<sub>2</sub> = (5)<sub>10</sub>.
Hence 5 mod 2 = 1.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">s = "1000"</span>
<span style="font-size:18px">m = 4</span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">0</span>
<strong><span style="font-size:18px">Explanation:</span></strong> <span style="font-size:18px">Here k=8 and m=4 hence 
r = k mod m = 8 mod 4 = 0.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function modulo()&nbsp;which takes the string s and integer m as input parameters&nbsp;and returns the value of r as described above.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= len(s) &lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">1 &lt;= m &lt;= 100</span></p>
</div>