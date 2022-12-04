# Alternate Vowel and Consonant String
## Medium
<div class="problems_problem_content__Xm_eO"><p>Given a string&nbsp;<strong>S</strong> of <strong>lowercase</strong> english characters. Rearrange characters of the given string such that the vowels and consonants occupy <strong>alternate</strong> positions and the string so formed should be <strong>lexicographically</strong> (alphabetically) <strong>smallest.</strong>&nbsp;<br>
<strong>Note:&nbsp;</strong>Vowels are 'a', 'e', 'i', 'o' and 'u'.&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong>
S = "aeroplane"
<strong>Output:</strong> alanepero
<strong>Explanation</strong>: <strong>a</strong>l<strong>a</strong>n<strong>e</strong>p<strong>e</strong>r<strong>o  
</strong>The vowels and cosonants are arranged 
alternatively with vowels shown in bold.
Also, there's no lexicographically smaller
string possible with required conditions.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input</strong>: 
S = "mississippi"
<strong>Output:</strong> -1
<strong>Explanation</strong>: The number of vowels is 4 
whereas the number of consonants is 7.
Hence, there's no way to arrange the
vowels and consonants alternatively.
</pre>

<p><br>
<strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>rearrange()&nbsp;</strong>which takes the string <strong>S</strong> and its size<strong> N</strong> as inputs and <strong>returns</strong> the modified string as stated in the description. If such a modification is not possible, return the string "-1".</p>

<p><br>
<strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(2*26).</p>

<p><br>
<strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10^6<br>
'a'&nbsp;&lt;= S[ i ] &lt;= 'z'</p>
</div>