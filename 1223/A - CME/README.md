<h2><a href="https://codeforces.com/contest/1223/problem/A" target="_blank" rel="noopener noreferrer">1223A — CME</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1223A](https://codeforces.com/contest/1223/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. CME</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's denote <span class="tex-font-style-it">correct match equation</span> (we will denote it as CME) an equation $$$a + b = c$$$ there all integers $$$a$$$, $$$b$$$ and $$$c$$$ are greater than zero.</p><p>For example, equations $$$2 + 2 = 4$$$ (<span class="tex-font-style-tt">||+||=||||</span>) and $$$1 + 2 = 3$$$ (<span class="tex-font-style-tt">|+||=|||</span>) are CME but equations $$$1 + 2 = 4$$$ (<span class="tex-font-style-tt">|+||=||||</span>), $$$2 + 2 = 3$$$ (<span class="tex-font-style-tt">||+||=|||</span>), and $$$0 + 1 = 1$$$ (<span class="tex-font-style-tt">+|=|</span>) are not.</p><p>Now, you have $$$n$$$ matches. You want to assemble a CME using <span class="tex-font-style-bf">all</span> your matches. Unfortunately, it is possible that you can't assemble the CME using all matches. But you can buy some extra matches and then assemble CME!</p><p>For example, if $$$n = 2$$$, you can buy two matches and assemble <span class="tex-font-style-tt">|+|=||</span>, and if $$$n = 5$$$ you can buy one match and assemble <span class="tex-font-style-tt">||+|=|||</span>. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/c61c6a7582f86a6539fd706aa4e7b961b87c7a06.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>Calculate the minimum number of matches which you have to buy for assembling CME.</p><p>Note, that you have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$q$$$ ($$$1 \le q \le 100$$$) — the number of queries.</p><p>The only line of each query contains one integer $$$n$$$ ($$$2 \le n \le 10^9$$$) — the number of matches.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print one integer in single line — the minimum number of matches which you have to buy for assembling CME. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007203960104395072" id="id007960923371425497" class="input-output-copier">Copy</div></div><pre id="id007203960104395072">4
2
5
8
11
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008745435027523673" id="id007803578900692736" class="input-output-copier">Copy</div></div><pre id="id008745435027523673">2
1
0
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first and second queries are explained in the statement.</p><p>In the third query, you can assemble $$$1 + 3 = 4$$$ (<span class="tex-font-style-tt">|+|||=||||</span>) without buying matches.</p><p>In the fourth query, buy one match and assemble $$$2 + 4 = 6$$$ (<span class="tex-font-style-tt">||+||||=||||||</span>).</p></div>