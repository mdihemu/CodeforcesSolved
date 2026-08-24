<h2><a href="https://codeforces.com/contest/1065/problem/A" target="_blank" rel="noopener noreferrer">1065A — Vasya and Chocolate</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1065A](https://codeforces.com/contest/1065/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Vasya and Chocolate</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a special offer in Vasya's favourite supermarket: if the customer buys $$$a$$$ chocolate bars, he or she may take $$$b$$$ additional bars for free. This special offer can be used any number of times.</p><p>Vasya currently has $$$s$$$ roubles, and he wants to get as many chocolate bars for free. Each chocolate bar costs $$$c$$$ roubles. Help Vasya to calculate the maximum possible number of chocolate bars he can get!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of testcases.</p><p>Each of the next $$$t$$$ lines contains four integers $$$s, a, b, c~(1 \le s, a, b, c \le 10^9)$$$ — the number of roubles Vasya has, the number of chocolate bars you have to buy to use the special offer, the number of bars you get for free, and the cost of one bar, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ lines. $$$i$$$-th line should contain the maximum possible number of chocolate bars Vasya can get in $$$i$$$-th test.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004727199397892693" id="id0035076622881927866" class="input-output-copier">Copy</div></div><pre id="id004727199397892693">2<br>10 3 1 1<br>1000000000 1 1000000000 1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005529738030472258" id="id005944340162285189" class="input-output-copier">Copy</div></div><pre id="id005529738030472258">13<br>1000000001000000000<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test of the example Vasya can buy $$$9$$$ bars, get $$$3$$$ for free, buy another bar, and so he will get $$$13$$$ bars.</p><p>In the second test Vasya buys $$$1000000000$$$ bars and gets $$$1000000000000000000$$$ for free. So he has $$$1000000001000000000$$$ bars.</p></div>