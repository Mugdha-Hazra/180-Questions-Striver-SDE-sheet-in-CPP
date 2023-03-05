# Avoid Explosion
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek is a chemical scientist who is performing an experiment to find an antidote to a poison. The experiment involves mixing some solutions in a flask. Based on the theoretical research Geek has done, he came up with an <strong>n&nbsp;*&nbsp;2</strong> array '<strong>mix</strong>', where mix[i] = {X, Y} denotes solutions X and Y that needs to be mixed.<br>
<br>
Also, from his past experience, it has been known that <strong>mixing some solutions leads to an explosion</strong> and thereby completely ruining the experiment. The explosive solutions are also provided as a&nbsp;<strong>m * 2</strong> array '<strong>danger</strong>' where danger[i] = {P, Q}&nbsp;denotes that if somehow solutions P and Q get into the same flask it will result in an explosion.</span></p>

<p><span style="font-size:18px">Help the Geek by returning an array '<strong>answer</strong>' of size <strong>n</strong>, where answer[i] = "<strong>Yes</strong>"&nbsp;if it is safe to mix solutions in 'mix[i]' or else answer[i] = "<strong>No</strong>". </span></p>

<p><span style="font-size:18px"><strong>Note:</strong> Geek should follow the order of mixing of solutions as it is in 'mix' otherwise the antidote will be ineffective. Also, Geek will not mix the&nbsp;solutions in 'mix[i]' once he gets to know that mixing them will result in an explosion. Mixing a solution will effect the other solutions which will appear after it.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
n = 5, m = 2
mix = {{1, 2}, {2, 3}, {4, 5}, {3, 5}, {2, 4}}
danger = {{1, 3}, {4, 2}}

<strong>Output</strong>:
answer = {"Yes", "No", "Yes", "Yes", "No"}

<strong>Explanation</strong>:
Mixing the first solution(1 and 2) of 'mix' do not result in any kind of explosion hence answer[0] is "Yes", while mixing(2nd solution) 2 and 3 is not allowed because it will result in an explosion as 1 and 3 would be in same solution hence we have returned "No" as the answer for 2nd solution. Mixing the third solution(4 and 5) and 4th solution(3 and 5) of 'mix' do not result in any kind of explosion hence answer[2] and answer[3] is "Yes". While mixing 2 and 4 is not allowed because it will result in an explosion hence we have returned "No" as the answer for it.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
n = 3, m = 2
mix = {{1, 2}, {2, 3}, {1, 3}}
danger = {{1, 2}, {1, 3}}

<strong>Output</strong>:
answer = {"No", "Yes", "No"}

<strong>Explanation</strong>:
Mixing solutions 1 and 2 is dangerous hence 
answer[0] = "No", but solutions 2 and 3 can 
be mixed without any problem therefore answer[1] 
= "Yes". Again, mixing solutions 1 and 3 is 
dangerous due to which answer[2] = "No".</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong></span></p>

<p><span style="font-size:18px">You don't need to read input or print anything. Complete the function&nbsp;<strong>avoidExplosion()</strong>&nbsp;which takes the mix array, its size, danger array, and its size as input parameters and&nbsp;returns the result&nbsp;array or list.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: O(n*m*log(n))<br>
Expected Space Complexity: O(n)</strong></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">0 &lt; n &lt; 1000</span></p>

<p><span style="font-size:18px">0 &lt; m&nbsp;&lt; 1000</span></p>

<p><span style="font-size:18px">1 &lt;= mix[i][0], mix[i][1] &lt;= n</span></p>

<p><span style="font-size:18px">1 &lt;= danger[i][0], danger[i][1] &lt;= n</span></p>

<p><span style="font-size:18px">mix[i][0] != mix[i][1]</span></p>

<p><span style="font-size:18px">danger[i][0] != danger[i][1]</span></p>
</div>