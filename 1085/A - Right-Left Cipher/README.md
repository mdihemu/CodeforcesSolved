<h2><a href="https://codeforces.com/contest/1085/problem/A" target="_blank" rel="noopener noreferrer">1085A — Right-Left Cipher</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1085A](https://codeforces.com/contest/1085/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Right-Left Cipher</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp loves ciphers. He has invented his own cipher called Right-Left.</p><p>Right-Left cipher is used for strings. To encrypt the string $$$s=s_{1}s_{2} \dots s_{n}$$$ Polycarp uses the following algorithm:</p><ul> <li> he writes down $$$s_1$$$, </li><li> he appends the current word with $$$s_2$$$ (i.e. writes down $$$s_2$$$ to the right of the current result), </li><li> he prepends the current word with $$$s_3$$$ (i.e. writes down $$$s_3$$$ to the left of the current result), </li><li> he appends the current word with $$$s_4$$$ (i.e. writes down $$$s_4$$$ to the right of the current result), </li><li> he prepends the current word with $$$s_5$$$ (i.e. writes down $$$s_5$$$ to the left of the current result), </li><li> and so on for each position until the end of $$$s$$$. </li></ul><p>For example, if $$$s$$$="<span class="tex-font-style-tt">techno</span>" the process is: "<span class="tex-font-style-tt">t</span>" $$$\to$$$ "<span class="tex-font-style-tt">te</span>" $$$\to$$$ "<span class="tex-font-style-tt">cte</span>" $$$\to$$$ "<span class="tex-font-style-tt">cteh</span>" $$$\to$$$ "<span class="tex-font-style-tt">ncteh</span>" $$$\to$$$ "<span class="tex-font-style-tt">ncteho</span>". So the encrypted $$$s$$$="<span class="tex-font-style-tt">techno</span>" is "<span class="tex-font-style-tt">ncteho</span>".</p><p>Given string $$$t$$$ — the result of encryption of some string $$$s$$$. Your task is to decrypt it, i.e. find the string $$$s$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line of the input contains $$$t$$$ — the result of encryption of some string $$$s$$$. It contains only lowercase Latin letters. The length of $$$t$$$ is between $$$1$$$ and $$$50$$$, inclusive.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print such string $$$s$$$ that after encryption it equals $$$t$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036669575417251865" id="id005271120539464877" class="input-output-copier">Copy</div></div><pre id="id0036669575417251865">ncteho
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009839444257796837" id="id0008494716783337142" class="input-output-copier">Copy</div></div><pre id="id0009839444257796837">techno
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005198246805610598" id="id009118972403236889" class="input-output-copier">Copy</div></div><pre id="id005198246805610598">erfdcoeocs
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008523855516206674" id="id004375606422226964" class="input-output-copier">Copy</div></div><pre id="id008523855516206674">codeforces
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003276477754109768" id="id0009443852111022843" class="input-output-copier">Copy</div></div><pre id="id003276477754109768">z
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005167972152777551" id="id006572923833145307" class="input-output-copier">Copy</div></div><pre id="id005167972152777551">z
</pre></div></div></div>