<h2><a href="https://codeforces.com/contest/1355/problem/D" target="_blank" rel="noopener noreferrer">1355D — Game With Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1355D](https://codeforces.com/contest/1355/problem/D) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">D. Game With Array</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Petya and Vasya are competing with each other in a new interesting game as they always do.</p><p>At the beginning of the game Petya has to come up with an array of $$$N$$$ positive integers. Sum of all elements in his array should be equal to $$$S$$$. Then Petya has to select an integer $$$K$$$ such that $$$0 \leq K \leq S$$$.</p><p>In order to win, Vasya has to find a non-empty subarray in Petya's array such that the sum of all selected elements equals to either $$$K$$$ or $$$S - K$$$. Otherwise Vasya loses.</p><p>You are given integers $$$N$$$ and $$$S$$$. You should determine if Petya can win, considering Vasya plays optimally. If Petya can win, help him to do that.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$N$$$ and $$$S$$$ ($$$1 \leq N \leq S \leq 10^{6}$$$) — the required length of the array and the required sum of its elements.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If Petya can win, print "<span class="tex-font-style-tt">YES</span>" (without quotes) in the first line. Then print Petya's array in the second line. The array should contain $$$N$$$ positive integers with sum equal to $$$S$$$. In the third line print $$$K$$$. If there are many correct answers, you can print any of them.</p><p>If Petya can't win, print "<span class="tex-font-style-tt">NO</span>" (without quotes).</p><p>You can print each letter in any register (lowercase or uppercase).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014950054682561598" id="id0007489082760767873" class="input-output-copier">Copy</div></div><pre id="id0014950054682561598">1 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004429169046993855" id="id001945013834695839" class="input-output-copier">Copy</div></div><pre id="id004429169046993855">YES
4
2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0047905687806496067" id="id005209494817401958" class="input-output-copier">Copy</div></div><pre id="id0047905687806496067">3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007143298034146183" id="id0012121978611267781" class="input-output-copier">Copy</div></div><pre id="id007143298034146183">NO</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007423826480777412" id="id009004327029877799" class="input-output-copier">Copy</div></div><pre id="id007423826480777412">3 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018419295940538827" id="id0025968245228567066" class="input-output-copier">Copy</div></div><pre id="id0018419295940538827">YES
2 1 5
4</pre></div></div></div>