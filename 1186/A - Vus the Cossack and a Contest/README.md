<h2><a href="https://codeforces.com/contest/1186/problem/A" target="_blank" rel="noopener noreferrer">1186A — Vus the Cossack and a Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1186A](https://codeforces.com/contest/1186/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Vus the Cossack and a Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vus the <a href="https://en.wikipedia.org/wiki/Cossacks">Cossack</a> holds a programming competition, in which $$$n$$$ people participate. He decided to award them all with pens and notebooks. It is known that Vus has exactly $$$m$$$ pens and $$$k$$$ notebooks.</p><p>Determine whether the Cossack can reward <span class="tex-font-style-bf">all</span> participants, giving each of them at least one pen and at least one notebook.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains three integers $$$n$$$, $$$m$$$, and $$$k$$$ ($$$1 \leq n, m, k \leq 100$$$) — the number of participants, the number of pens, and the number of notebooks respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print "<span class="tex-font-style-tt">Yes</span>" if it possible to reward all the participants. Otherwise, print "<span class="tex-font-style-tt">No</span>".</p><p>You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0007425919347807919" id="id008208941610789262" class="input-output-copier">Copy</div></div><pre id="id0007425919347807919">5 8 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009801335256689339" id="id008322162745130487" class="input-output-copier">Copy</div></div><pre id="id009801335256689339">Yes
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001677124370473455" id="id003712118056762459" class="input-output-copier">Copy</div></div><pre id="id001677124370473455">3 9 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007020247333170138" id="id0023577626055375434" class="input-output-copier">Copy</div></div><pre id="id0007020247333170138">Yes
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001363961033747887" id="id002761121304123356" class="input-output-copier">Copy</div></div><pre id="id001363961033747887">8 5 20
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005702648264204798" id="id007118033401960124" class="input-output-copier">Copy</div></div><pre id="id005702648264204798">No
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, there are $$$5$$$ participants. The Cossack has $$$8$$$ pens and $$$6$$$ notebooks. Therefore, he has enough pens and notebooks.</p><p>In the second example, there are $$$3$$$ participants. The Cossack has $$$9$$$ pens and $$$3$$$ notebooks. He has more than enough pens but only the minimum needed number of notebooks.</p><p>In the third example, there are $$$8$$$ participants but only $$$5$$$ pens. Since the Cossack does not have enough pens, the answer is "<span class="tex-font-style-tt">No</span>".</p></div>