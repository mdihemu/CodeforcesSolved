<h2><a href="https://codeforces.com/contest/1096/problem/A" target="_blank" rel="noopener noreferrer">1096A — Find Divisible</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1096A](https://codeforces.com/contest/1096/problem/A) |

## Topics
`greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Find Divisible</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a range of positive integers from $$$l$$$ to $$$r$$$.</p><p>Find such a pair of integers $$$(x, y)$$$ that $$$l \le x, y \le r$$$, $$$x \ne y$$$ and $$$x$$$ divides $$$y$$$.</p><p>If there are multiple answers, print any of them.</p><p>You are also asked to answer $$$T$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$T$$$ ($$$1 \le T \le 1000$$$) — the number of queries.</p><p>Each of the next $$$T$$$ lines contains two integers $$$l$$$ and $$$r$$$ ($$$1 \le l \le r \le 998244353$$$) — inclusive borders of the range.</p><p>It is guaranteed that testset only includes queries, which have at least one suitable pair.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$T$$$ lines, each line should contain the answer — two integers $$$x$$$ and $$$y$$$ such that $$$l \le x, y \le r$$$, $$$x \ne y$$$ and $$$x$$$ divides $$$y$$$. The answer in the $$$i$$$-th line should correspond to the $$$i$$$-th query from the input.</p><p>If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005127842917317285" id="id008352192937550078" class="input-output-copier">Copy</div></div><pre id="id005127842917317285">3
1 10
3 14
1 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006131737558113067" id="id0002815390318982025" class="input-output-copier">Copy</div></div><pre id="id006131737558113067">1 7
3 9
5 10
</pre></div></div></div>