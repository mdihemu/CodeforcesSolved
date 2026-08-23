<h2><a href="https://codeforces.com/contest/1225/problem/A" target="_blank" rel="noopener noreferrer">1225A — Forgetting Things</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1225A](https://codeforces.com/contest/1225/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Forgetting Things</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Kolya is very absent-minded. Today his math teacher asked him to solve a simple problem with the equation $$$a + 1 = b$$$ with positive integers $$$a$$$ and $$$b$$$, but Kolya forgot the numbers $$$a$$$ and $$$b$$$. He does, however, remember that the first (leftmost) digit of $$$a$$$ was $$$d_a$$$, and the first (leftmost) digit of $$$b$$$ was $$$d_b$$$.</p><p>Can you reconstruct any equation $$$a + 1 = b$$$ that satisfies this property? It may be possible that Kolya misremembers the digits, and there is no suitable equation, in which case report so.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains two space-separated digits $$$d_a$$$ and $$$d_b$$$ ($$$1 \leq d_a, d_b \leq 9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>If there is no equation $$$a + 1 = b$$$ with positive integers $$$a$$$ and $$$b$$$ such that the first digit of $$$a$$$ is $$$d_a$$$, and the first digit of $$$b$$$ is $$$d_b$$$, print a single number $$$-1$$$.</p><p>Otherwise, print any suitable $$$a$$$ and $$$b$$$ that <span class="tex-font-style-bf">both</span> are positive and do not exceed $$$10^9$$$. It is guaranteed that if a solution exists, there also exists a solution with both numbers not exceeding $$$10^9$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024997754421244167" id="id005426651933860385" class="input-output-copier">Copy</div></div><pre id="id0024997754421244167">1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006659693787084625" id="id006423911315544871" class="input-output-copier">Copy</div></div><pre id="id006659693787084625">199 200
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00020481241055210986" id="id00992801136429564" class="input-output-copier">Copy</div></div><pre id="id00020481241055210986">4 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008873789206441187" id="id005593187125301349" class="input-output-copier">Copy</div></div><pre id="id008873789206441187">412 413
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006278296118326666" id="id006199834504979846" class="input-output-copier">Copy</div></div><pre id="id006278296118326666">5 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004801301591188958" id="id007273610372076602" class="input-output-copier">Copy</div></div><pre id="id004801301591188958">-1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0006609349654927632" id="id007238710073227813" class="input-output-copier">Copy</div></div><pre id="id0006609349654927632">6 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00107180581132448" id="id002525023433503871" class="input-output-copier">Copy</div></div><pre id="id00107180581132448">-1
</pre></div></div></div>