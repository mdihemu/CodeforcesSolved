<h2><a href="https://codeforces.com/contest/1459/problem/C" target="_blank" rel="noopener noreferrer">1459C — Row GCD</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1459C](https://codeforces.com/contest/1459/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">C. Row GCD</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two positive integer sequences $$$a_1, \ldots, a_n$$$ and $$$b_1, \ldots, b_m$$$. For each $$$j = 1, \ldots, m$$$ find the greatest common divisor of $$$a_1 + b_j, \ldots, a_n + b_j$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 2 \cdot 10^5$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^{18})$$$.</p><p>The third line contains $$$m$$$ integers $$$b_1, \ldots, b_m$$$ ($$$1 \leq b_j \leq 10^{18})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$m$$$ integers. The $$$j$$$-th of them should be equal to GCD$$$(a_1 + b_j, \ldots, a_n + b_j)$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007882176473047134" id="id001923682922576786" class="input-output-copier">Copy</div></div><pre id="id007882176473047134">4 4
1 25 121 169
1 2 7 23
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0016721015646085857" id="id001855944325111022" class="input-output-copier">Copy</div></div><pre id="id0016721015646085857">2 3 8 24
</pre></div></div></div>