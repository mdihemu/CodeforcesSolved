<h2><a href="https://codeforces.com/contest/1174/problem/C" target="_blank" rel="noopener noreferrer">1174C — Ehab and a Special Coloring Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1174C](https://codeforces.com/contest/1174/problem/C) |

## Topics
`constructive algorithms` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Ehab and a Special Coloring Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You're given an integer $$$n$$$. For every integer $$$i$$$ from $$$2$$$ to $$$n$$$, assign a positive integer $$$a_i$$$ such that the following conditions hold:</p><ul> <li> For any pair of integers $$$(i,j)$$$, if $$$i$$$ and $$$j$$$ are coprime, $$$a_i \neq a_j$$$. </li><li> The maximal value of all $$$a_i$$$ should be minimized (that is, as small as possible). </li></ul><p>A pair of integers is called <a href="https://en.wikipedia.org/wiki/Coprime_integers">coprime</a> if their <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor</a> is $$$1$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains the integer $$$n$$$ ($$$2 \le n \le 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$n-1$$$ integers, $$$a_2$$$, $$$a_3$$$, $$$\ldots$$$, $$$a_n$$$ ($$$1 \leq a_i \leq n$$$). </p><p>If there are multiple solutions, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007282206141967417" id="id003955329926022665" class="input-output-copier">Copy</div></div><pre id="id007282206141967417">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0006916155914208799" id="id003986585751636186" class="input-output-copier">Copy</div></div><pre id="id0006916155914208799">1 2 1 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005376880789453133" id="id006549517309628954" class="input-output-copier">Copy</div></div><pre id="id005376880789453133">3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005938506492504863" id="id007298020944289431" class="input-output-copier">Copy</div></div><pre id="id005938506492504863">2 1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, notice that $$$3$$$ and $$$4$$$ are coprime, so $$$a_3 \neq a_4$$$. Also, notice that $$$a=[1,2,3]$$$ satisfies the first condition, but it's not a correct answer because its maximal value is $$$3$$$.</p></div>