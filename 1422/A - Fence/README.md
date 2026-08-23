<h2><a href="https://codeforces.com/contest/1422/problem/A" target="_blank" rel="noopener noreferrer">1422A — Fence</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1422A](https://codeforces.com/contest/1422/problem/A) |

## Topics
`geometry` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Fence</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Yura is tasked to build a closed fence in shape of an arbitrary non-degenerate simple quadrilateral. He's already got three straight fence segments with known lengths $$$a$$$, $$$b$$$, and $$$c$$$. Now he needs to find out some possible integer length $$$d$$$ of the fourth straight fence segment so that he can build the fence using these four segments. In other words, the fence should have a quadrilateral shape with side lengths equal to $$$a$$$, $$$b$$$, $$$c$$$, and $$$d$$$. Help Yura, find any possible length of the fourth side.</p><p>A non-degenerate simple quadrilateral is such a quadrilateral that no three of its corners lie on the same line, and it does not cross itself.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ — the number of test cases ($$$1 \le t \le 1000$$$). The next $$$t$$$ lines describe the test cases.</p><p>Each line contains three integers $$$a$$$, $$$b$$$, and $$$c$$$ — the lengths of the three fence segments ($$$1 \le a, b, c \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print a single integer $$$d$$$ — the length of the fourth fence segment that is suitable for building the fence. If there are multiple answers, print any. We can show that an answer always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010907994698772283" id="id008884541812044244" class="input-output-copier">Copy</div></div><pre id="id0010907994698772283">2
1 2 3
12 34 56
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006488966428650248" id="id00674890784805383" class="input-output-copier">Copy</div></div><pre id="id006488966428650248">4
42
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>We can build a quadrilateral with sides $$$1$$$, $$$2$$$, $$$3$$$, $$$4$$$.</p><p>We can build a quadrilateral with sides $$$12$$$, $$$34$$$, $$$56$$$, $$$42$$$.</p></div>