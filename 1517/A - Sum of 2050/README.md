<h2><a href="https://codeforces.com/contest/1517/problem/A" target="_blank" rel="noopener noreferrer">1517A — Sum of 2050</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1517A](https://codeforces.com/contest/1517/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Sum of 2050</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A number is called <span class="tex-font-style-it">2050-number</span> if it is $$$2050$$$, $$$20500$$$, ..., ($$$2050 \cdot 10^k$$$ for integer $$$k \ge 0$$$).</p><p>Given a number $$$n$$$, you are asked to represent $$$n$$$ as the sum of some (not necessarily distinct) 2050-numbers. Compute the minimum number of 2050-numbers required for that.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$T$$$ ($$$1\le T\leq 1\,000$$$) denoting the number of test cases.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1\le n\le 10^{18}$$$) denoting the number to be represented.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum number of 2050-numbers in one line. </p><p>If $$$n$$$ cannot be represented as the sum of 2050-numbers, output $$$-1$$$ instead. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006891108000727781" id="id007867919984674503" class="input-output-copier">Copy</div></div><pre id="id006891108000727781">6
205
2050
4100
20500
22550
25308639900
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0046561711535291794" id="id009558973493487432" class="input-output-copier">Copy</div></div><pre id="id0046561711535291794">-1
1
2
1
2
36
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the third case, $$$4100 = 2050 + 2050$$$.</p><p>In the fifth case, $$$22550 = 20500 + 2050$$$.</p></div>