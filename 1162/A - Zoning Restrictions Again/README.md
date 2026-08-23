<h2><a href="https://codeforces.com/contest/1162/problem/A" target="_blank" rel="noopener noreferrer">1162A — Zoning Restrictions Again</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1162A](https://codeforces.com/contest/1162/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Zoning Restrictions Again</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are planning to build housing on a street. There are $$$n$$$ spots available on the street on which you can build a house. The spots are labeled from $$$1$$$ to $$$n$$$ from left to right. In each spot, you can build a house with an integer height between $$$0$$$ and $$$h$$$.</p><p>In each spot, if a house has height $$$a$$$, you will gain $$$a^2$$$ dollars from it.</p><p>The city has $$$m$$$ zoning restrictions. The $$$i$$$-th restriction says that the tallest house from spots $$$l_i$$$ to $$$r_i$$$ (inclusive) must be at most $$$x_i$$$.</p><p>You would like to build houses to maximize your profit. Determine the maximum profit possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains three integers $$$n$$$, $$$h$$$, and $$$m$$$ ($$$1 \leq n,h,m \leq 50$$$) — the number of spots, the maximum height, and the number of restrictions.</p><p>Each of the next $$$m$$$ lines contains three integers $$$l_i$$$, $$$r_i$$$, and $$$x_i$$$ ($$$1 \leq l_i \leq r_i \leq n$$$, $$$0 \leq x_i \leq h$$$) — left and right limits (inclusive) of the $$$i$$$-th restriction and the maximum possible height in that range.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer, the maximum profit you can make.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007585726137011045" id="id0027730676340061433" class="input-output-copier">Copy</div></div><pre id="id007585726137011045">3 3 3
1 1 1
2 2 3
3 3 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008478157286908128" id="id0033567924836008123" class="input-output-copier">Copy</div></div><pre id="id008478157286908128">14
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005430757885908929" id="id005866140645078496" class="input-output-copier">Copy</div></div><pre id="id005430757885908929">4 10 2
2 3 8
3 4 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009483173457822591" id="id007951847930674364" class="input-output-copier">Copy</div></div><pre id="id009483173457822591">262
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, there are $$$3$$$ houses, the maximum height of a house is $$$3$$$, and there are $$$3$$$ restrictions. The first restriction says the tallest house between $$$1$$$ and $$$1$$$ must be at most $$$1$$$. The second restriction says the tallest house between $$$2$$$ and $$$2$$$ must be at most $$$3$$$. The third restriction says the tallest house between $$$3$$$ and $$$3$$$ must be at most $$$2$$$.</p><p>In this case, it is optimal to build houses with heights $$$[1, 3, 2]$$$. This fits within all the restrictions. The total profit in this case is $$$1^2 + 3^2 + 2^2 = 14$$$.</p><p>In the second example, there are $$$4$$$ houses, the maximum height of a house is $$$10$$$, and there are $$$2$$$ restrictions. The first restriction says the tallest house from $$$2$$$ to $$$3$$$ must be at most $$$8$$$. The second restriction says the tallest house from $$$3$$$ to $$$4$$$ must be at most $$$7$$$.</p><p>In this case, it's optimal to build houses with heights $$$[10, 8, 7, 7]$$$. We get a profit of $$$10^2+8^2+7^2+7^2 = 262$$$. Note that there are two restrictions on house $$$3$$$ and both of them must be satisfied. Also, note that even though there isn't any explicit restrictions on house $$$1$$$, we must still limit its height to be at most $$$10$$$ ($$$h=10$$$).</p></div>