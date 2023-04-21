# Prefix Suffix String
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two Lists of <strong>strings s1 </strong>and <strong>s2</strong>, you have to count the number&nbsp;of strings in <strong>s2 </strong>which is either a <strong>suffix </strong>or <strong>prefix </strong>of at least one string of <strong>s1</strong>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">s1 = ["cat", "catanddog", "lion"]
s2 = ["cat", "dog", "rat"]</span>
<span style="font-size:18px"><strong>Output: 
2</strong></span>
<span style="font-size:18px"><strong>Explanation:</strong> 
String "cat" of s2 is prefix of "catand<strong>dog</strong>"
&amp; string "dog" of s2 is suffix of "catand<strong>dog</strong>" </span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span> 
<span style="font-size:18px">s1 = ["jrjiml", "tchetn", "ucrhye", "ynayhy", 
&nbsp;      "cuhffd", "cvgpoiu", "znyadv"]
s2 = ["jr", "ml", "cvgpoi", "gpoiu", "wnmkmluc", 
&nbsp;     "geheqe", "uglxagyl", "uyxdroj"]</span> 
<span style="font-size:18px"><strong>Output: 
4
Explanation:</strong> 
String "jr" of s2 is prefix of "<strong>jr</strong>jiml", 
"ml" of s2 is suffix of "jrji<strong>ml</strong>", 
"cvgpoi" of s2 is prefix of "<strong>cvgpoi</strong>u" &amp;
"gpoiu" of s2 is suffix of "cv<strong>gpoiu</strong>"</span><strong>
</strong></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong></span><br>
<span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function prefixSuffixString(), which takes 2 strings s1 and s2&nbsp;as input and returns an integer value as the number of strings in s2 which is a prefix or suffix in s1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(max(len(s1) , len(s2) ))<br>
<strong>Expected Space Complexity</strong>: O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
&nbsp;&nbsp;&nbsp;1 &lt;= s1,s2&nbsp;&lt; 5&nbsp;* 10^3<br>
&nbsp; &nbsp;5 &lt;= len(s1[i]), len(s2[i]) &lt; 25</span><br>
&nbsp;</p>
</div>