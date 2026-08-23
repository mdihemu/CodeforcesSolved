<h2><a href="https://codeforces.com/contest/1323/problem/A" target="_blank" rel="noopener noreferrer">1323A — Even Subset Sum Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1323A](https://codeforces.com/contest/1323/problem/A) |

## Topics
`brute force` `dp` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Even Subset Sum Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ positive integers. Find a <span class="tex-font-style-bf">non-empty</span> subset of its elements such that their sum is <span class="tex-font-style-bf">even</span> (i.e. divisible by $$$2$$$) or determine that there is no such subset.</p><p>Both the given array and required subset may contain equal values.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 100$$$), number of test cases to solve. Descriptions of $$$t$$$ test cases follow.</p><p>A description of each test case consists of two lines. The first line contains a single integer $$$n$$$ ($$$1 \leq n \leq 100$$$), length of array $$$a$$$.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 100$$$), elements of $$$a$$$. The given array $$$a$$$ can contain equal values (duplicates).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output $$$-1$$$ if there is no such subset of elements. Otherwise output positive integer $$$k$$$, number of elements in the required subset. Then output $$$k$$$ distinct integers ($$$1 \leq p_i \leq n$$$), indexes of the chosen elements. If there are multiple solutions output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020963432479969502" id="id00527877295738654" class="input-output-copier">Copy</div></div><pre id="id0020963432479969502">3
3
1 4 3
1
15
2
3 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009566226163410791" id="id007559007128116506" class="input-output-copier">Copy</div></div><pre id="id009566226163410791">1
2
-1
2
1 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>There are three test cases in the example.</p><p>In the first test case, you can choose the subset consisting of only the second element. Its sum is $$$4$$$ and it is even.</p><p>In the second test case, there is only one non-empty subset of elements consisting of the first element, however sum in it is odd, so there is no solution.</p><p>In the third test case, the subset consisting of all array's elements has even sum.</p></div>