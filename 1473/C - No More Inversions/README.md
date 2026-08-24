<h2><a href="https://codeforces.com/contest/1473/problem/C" target="_blank" rel="noopener noreferrer">1473C — No More Inversions</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1473C](https://codeforces.com/contest/1473/problem/C) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">C. No More Inversions</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a sequence $$$a$$$ with $$$n$$$ elements $$$1, 2, 3, \dots, k - 1, k, k - 1, k - 2, \dots, k - (n - k)$$$ ($$$k \le n  \lt  2k$$$).</p><p>Let's call as inversion in $$$a$$$ a pair of indices $$$i  \lt  j$$$ such that $$$a[i]  \gt  a[j]$$$.</p><p>Suppose, you have some permutation $$$p$$$ of size $$$k$$$ and you build a sequence $$$b$$$ of size $$$n$$$ in the following manner: $$$b[i] = p[a[i]]$$$.</p><p>Your goal is to find such permutation $$$p$$$ that the total number of inversions in $$$b$$$ doesn't exceed the total number of inversions in $$$a$$$, and $$$b$$$ is <span class="tex-font-style-it">lexicographically maximum</span>.</p><p>Small reminder: the sequence of $$$k$$$ integers is called a permutation if it contains all integers from $$$1$$$ to $$$k$$$ exactly once.</p><p>Another small reminder: a sequence $$$s$$$ is <span class="tex-font-style-it">lexicographically smaller</span> than another sequence $$$t$$$, if either $$$s$$$ is a prefix of $$$t$$$, or for the first $$$i$$$ such that $$$s_i \ne t_i$$$, $$$s_i  \lt  t_i$$$ holds (in the first position that these sequences are different, $$$s$$$ has smaller number than $$$t$$$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The first and only line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$k \le n  \lt  2k$$$; $$$1 \le k \le 10^5$$$) — the length of the sequence $$$a$$$ and its maximum.</p><p>It's guaranteed that the total sum of $$$k$$$ over test cases doesn't exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print $$$k$$$ integers — the permutation $$$p$$$ which maximizes $$$b$$$ lexicographically without increasing the total number of inversions.</p><p>It can be proven that $$$p$$$ exists and is unique.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002152599084892406" id="id008774397737883487" class="input-output-copier">Copy</div></div><pre id="id002152599084892406">4
1 1
2 2
3 2
4 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006522131500590146" id="id007193573306827333" class="input-output-copier">Copy</div></div><pre id="id006522131500590146">1 
1 2 
2 1 
1 3 2 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the sequence $$$a = [1]$$$, there is only one permutation $$$p = [1]$$$.</p><p>In the second test case, the sequence $$$a = [1, 2]$$$. There is no inversion in $$$a$$$, so there is only one permutation $$$p = [1, 2]$$$ which doesn't increase the number of inversions.</p><p>In the third test case, $$$a = [1, 2, 1]$$$ and has $$$1$$$ inversion. If we use $$$p = [2, 1]$$$, then $$$b = [p[a[1]], p[a[2]], p[a[3]]] = [2, 1, 2]$$$ and also has $$$1$$$ inversion.</p><p>In the fourth test case, $$$a = [1, 2, 3, 2]$$$, and since $$$p = [1, 3, 2]$$$ then $$$b = [1, 3, 2, 3]$$$. Both $$$a$$$ and $$$b$$$ have $$$1$$$ inversion and $$$b$$$ is the lexicographically maximum.</p></div>