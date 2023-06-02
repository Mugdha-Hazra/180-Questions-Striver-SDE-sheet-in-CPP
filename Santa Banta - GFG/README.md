# Santa Banta
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Santa is still not married. He approaches a marriage bureau and asks them to hurry the process. The bureau checks the list of eligible girls of size <strong>N</strong> and hands it over to Santa. Santa being conscious about his marriage is determined to find a girl with <strong>maximum</strong> connections so that he can gather more information about her. Accordingly, he looks to figure out the <strong>maximum </strong>number of girls (from the list) who know each other to achieve the above purpose.</span></p>
<p><span style="font-size: 18px;">In order to finalize the girl, he needs to find the <strong>Kth</strong> prime. Where k = largest group of girls who know each other. Considering Santa's poor knowledge of Maths, he seeks Banta's help for the answer. Now you, a fan of Santa Banta Jokes, take this prestigious opportunity to solve the problem.</span></p>
<p><span style="font-size: 18px;">In case no of connections is zero, print "-1". Here the connection between girls is represented by a 2-D array <strong>g </strong>of dimension M*2, where <strong>M</strong> is the number of connections.</span></p>
<p><span style="font-size: 18px;"><strong>Note :</strong><br>1. Suppose girl "a" knows girl "b" and girl "b" knows girl "c", then girl "a" also knows girl "c". <strong>Transitivity</strong> holds here.<br>2. Consider 1 as a <strong>composite</strong> number.<br>3. For precompute function given in the template you just have to complete it and use it wherever required, do not call it again and again, it is already being called by driver function before executing test cases.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> <br></span><span style="font-size: 18px;">N = 10<br>M = 6<br>g[] = {{1,2},{2,3},{3,4},{4,5},{6,7},{9,10}}
<strong>Output :</strong> <br>11
<strong>Explanation:</strong>
Here in this graph there are 4 groups. 
In 1<sup>st</sup> group: (1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 5) are 
there. In 2<sup>nd</sup>&nbsp;group: (6 -&gt; 7) are there.
In 3<sup>rd </sup>group: (8) is there.
In 4<sup>th</sup>&nbsp;group: (10 -&gt; 9) are there.
In these 4 group the maximum number of 
value is 5. So, K = 5 and the 5<sup>th</sup>&nbsp;prime number 
is 11. Return 11.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> <br>N = 2<br>M = 1<br>g[] = {{1, 2}} <strong>
Output :</strong> <br>3
<strong>Explanation:
</strong>In this Example there will only be a <br></span><span style="font-size: 18px;">single </span><span style="font-size: 18px;">group of 2 girls, and hence the <br>value of K is 2, The 2nd prime is 3.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong></span></p>
<p><span style="font-size: 18px;">This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>helpSanta()</strong> that takes a number of girls <strong>(n)</strong>, a number of connections <strong>(m),</strong> a <strong>2-D</strong> <strong>array </strong>of girls connections&nbsp;<strong>(g)</strong>, and return the Kth prime no if there are no connections then return -1. The driver code takes care of the printing.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N + M).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N + M).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">1 ≤ n ≤ 10<sup>5</sup><br>0 ≤ m ≤ 10<sup>5</sup><br>1 ≤ u, v ≤ n<br>Sum of n+m will not exceed 10<sup>5</sup>.</span></p></div>