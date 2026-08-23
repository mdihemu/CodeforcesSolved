<h2><a href="https://codeforces.com/contest/1104/problem/A" target="_blank" rel="noopener noreferrer">1104A — Splitting into digits</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1104A](https://codeforces.com/contest/1104/problem/A) |

## Topics
`constructive algorithms` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Splitting into digits</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vasya has his favourite number $$$n$$$. He wants to split it to some non-zero digits. It means, that he wants to choose some digits $$$d_1, d_2, \ldots, d_k$$$, such that $$$1 \leq d_i \leq 9$$$ for all $$$i$$$ and $$$d_1 + d_2 + \ldots + d_k = n$$$.</p><p>Vasya likes beauty in everything, so he wants to find any solution with the minimal possible number of different digits among $$$d_1, d_2, \ldots, d_k$$$. Help him!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ — the number that Vasya wants to split ($$$1 \leq n \leq 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line print one integer $$$k$$$ — the number of digits in the partition. Note that $$$k$$$ must satisfy the inequality $$$1 \leq k \leq n$$$. In the next line print $$$k$$$ digits $$$d_1, d_2, \ldots, d_k$$$ separated by spaces. All digits must satisfy the inequalities $$$1 \leq d_i \leq 9$$$.</p><p>You should find a partition of $$$n$$$ in which the number of different digits among $$$d_1, d_2, \ldots, d_k$$$ will be minimal possible among all partitions of $$$n$$$ into non-zero digits. Among such partitions, it is allowed to find any. It is guaranteed that there exists at least one partition of the number $$$n$$$ into digits.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049432536023554574" id="id007964354081244154" class="input-output-copier">Copy</div></div><pre id="id0049432536023554574">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00035825352734747073" id="id008039400615628749" class="input-output-copier">Copy</div></div><pre id="id00035825352734747073">1
1 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049153175684004635" id="id007190320580826912" class="input-output-copier">Copy</div></div><pre id="id0049153175684004635">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0049966810375189397" id="id007059114485520847" class="input-output-copier">Copy</div></div><pre id="id0049966810375189397">2
2 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010547166545164044" id="id0006868723483849504" class="input-output-copier">Copy</div></div><pre id="id0010547166545164044">27
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004901127716963892" id="id001142333529966384" class="input-output-copier">Copy</div></div><pre id="id004901127716963892">3
9 9 9
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test, the number $$$1$$$ can be divided into $$$1$$$ digit equal to $$$1$$$.</p><p>In the second test, there are $$$3$$$ partitions of the number $$$4$$$ into digits in which the number of different digits is $$$1$$$. This partitions are $$$[1, 1, 1, 1]$$$, $$$[2, 2]$$$ and $$$[4]$$$. Any of these partitions can be found. And, for example, dividing the number $$$4$$$ to the digits $$$[1, 1, 2]$$$ isn't an answer, because it has $$$2$$$ different digits, that isn't the minimum possible number.</p></div>