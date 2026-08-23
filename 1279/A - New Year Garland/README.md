<h2><a href="https://codeforces.com/contest/1279/problem/A" target="_blank" rel="noopener noreferrer">1279A — New Year Garland</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1279A](https://codeforces.com/contest/1279/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. New Year Garland</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp is sad — New Year is coming in few days but there is still no snow in his city. To bring himself New Year mood, he decided to decorate his house with some garlands.</p><p>The local store introduced a new service this year, called "Build your own garland". So you can buy some red, green and blue lamps, provide them and the store workers will solder a single garland of them. The resulting garland will have all the lamps you provided put in a line. Moreover, no pair of lamps of the same color will be adjacent to each other in this garland!</p><p>For example, if you provide $$$3$$$ red, $$$3$$$ green and $$$3$$$ blue lamps, the resulting garland can look like this: "<span class="tex-font-style-tt">RGBRBGBGR</span>" ("<span class="tex-font-style-tt">RGB</span>" being the red, green and blue color, respectively). Note that it's ok to have lamps of the same color on the ends of the garland.</p><p>However, if you provide, say, $$$1$$$ red, $$$10$$$ green and $$$2$$$ blue lamps then the store workers won't be able to build any garland of them. Any garland consisting of these lamps will have at least one pair of lamps of the same color adjacent to each other. Note that the store workers should use all the lamps you provided.</p><p>So Polycarp has bought some sets of lamps and now he wants to know if the store workers can build a garland from each of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of sets of lamps Polycarp has bought.</p><p>Each of the next $$$t$$$ lines contains three integers $$$r$$$, $$$g$$$ and $$$b$$$ ($$$1 \le r, g, b \le 10^9$$$) — the number of red, green and blue lamps in the set, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ lines — for each set of lamps print "<span class="tex-font-style-tt">Yes</span>" if the store workers can build a garland from them and "<span class="tex-font-style-tt">No</span>" otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0018556259898974425" id="id00041349851853357156" class="input-output-copier">Copy</div></div><pre id="id0018556259898974425">3
3 3 3
1 10 2
2 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008990370892943209" id="id0042502345321314594" class="input-output-copier">Copy</div></div><pre id="id008990370892943209">Yes
No
Yes
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first two sets are desribed in the statement.</p><p>The third set produces garland "<span class="tex-font-style-tt">RBRG</span>", for example.</p></div>