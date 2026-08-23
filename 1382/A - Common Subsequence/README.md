<h2><a href="https://codeforces.com/contest/1382/problem/A" target="_blank" rel="noopener noreferrer">1382A — Common Subsequence</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1382A](https://codeforces.com/contest/1382/problem/A) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">A. Common Subsequence</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two arrays of integers $$$a_1,\ldots,a_n$$$ and $$$b_1,\ldots,b_m$$$.</p><p>Your task is to find a <span class="tex-font-style-bf">non-empty</span> array $$$c_1,\ldots,c_k$$$ that is a subsequence of $$$a_1,\ldots,a_n$$$, and also a subsequence of $$$b_1,\ldots,b_m$$$. If there are multiple answers, find one of the <span class="tex-font-style-bf">smallest</span> possible length. If there are still multiple of the smallest possible length, find any. If there are no such arrays, you should report about it.</p><p>A sequence $$$a$$$ is a subsequence of a sequence $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero) elements. For example, $$$[3,1]$$$ is a subsequence of $$$[3,2,1]$$$ and $$$[4,3,1]$$$, but not a subsequence of $$$[1,3,3,7]$$$ and $$$[3,10,4]$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\le t\le 1000$$$)  — the number of test cases. Next $$$3t$$$ lines contain descriptions of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1\le n,m\le 1000$$$)  — the lengths of the two arrays.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1,\ldots,a_n$$$ ($$$1\le a_i\le 1000$$$)  — the elements of the first array.</p><p>The third line of each test case contains $$$m$$$ integers $$$b_1,\ldots,b_m$$$ ($$$1\le b_i\le 1000$$$)  — the elements of the second array.</p><p>It is guaranteed that the sum of $$$n$$$ and the sum of $$$m$$$ across all test cases does not exceed $$$1000$$$ ($$$\sum\limits_{i=1}^t n_i, \sum\limits_{i=1}^t m_i\le 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" if a solution exists, or "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>If the answer is "<span class="tex-font-style-tt">YES</span>", on the next line output an integer $$$k$$$ ($$$1\le k\le 1000$$$)  — the length of the array, followed by $$$k$$$ integers $$$c_1,\ldots,c_k$$$ ($$$1\le c_i\le 1000$$$)  — the elements of the array.</p><p>If there are multiple solutions with the smallest possible $$$k$$$, output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007886468361013677" id="id003773069373268726" class="input-output-copier">Copy</div></div><pre id="id007886468361013677">5
4 5
10 8 6 4
1 2 3 4 5
1 1
3
3
1 1
3
2
5 3
1000 2 2 2 3
3 1 5
5 5
1 2 3 4 5
1 2 3 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00933795806916875" id="id005635787714186598" class="input-output-copier">Copy</div></div><pre id="id00933795806916875">YES
1 4
YES
1 3
NO
YES
1 3
YES
1 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$[4]$$$ is a subsequence of $$$[10, 8, 6, 4]$$$ and $$$[1, 2, 3, 4, 5]$$$. This array has length $$$1$$$, it is the smallest possible length of a subsequence of both $$$a$$$ and $$$b$$$.</p><p>In the third test case, no non-empty subsequences of both $$$[3]$$$ and $$$[2]$$$ exist, so the answer is "<span class="tex-font-style-tt">NO</span>".</p></div>