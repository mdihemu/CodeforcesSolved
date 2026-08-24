<h2><a href="https://codeforces.com/contest/1739/problem/B" target="_blank" rel="noopener noreferrer">1739B — Array Recovery</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1739B](https://codeforces.com/contest/1739/problem/B) |

## Topics
`constructive algorithms` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Array Recovery</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>For an array of <span class="tex-font-style-bf">non-negative</span> integers $$$a$$$ of size $$$n$$$, we construct another array $$$d$$$ as follows: $$$d_1 = a_1$$$, $$$d_i = |a_i - a_{i - 1}|$$$ for $$$2 \le i \le n$$$.</p><p>Your task is to restore the array $$$a$$$ from a given array $$$d$$$, or to report that there are multiple possible arrays. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 100$$$) — the size of the arrays $$$a$$$ and $$$d$$$.</p><p>The second line contains $$$n$$$ integers $$$d_1, d_2, \dots, d_n$$$ ($$$0 \le d_i \le 100$$$) — the elements of the array $$$d$$$.</p><p>It can be shown that there always exists at least one suitable array $$$a$$$ under these constraints.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the elements of the array $$$a$$$, if there is only one possible array $$$a$$$. Otherwise, print $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007281718333272439" id="id0005887803570383754" class="input-output-copier">Copy</div></div><pre id="id007281718333272439"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 0 2 5</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-even test-example-line-2">2 6 3</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">0 0 0 0 0</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0039712377508351704" id="id005917478945430891" class="input-output-copier">Copy</div></div><pre id="id0039712377508351704">1 1 3 8
-1
0 0 0 0 0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the second example, there are two suitable arrays: $$$[2, 8, 5]$$$ and $$$[2, 8, 11]$$$.</p></div>