<h2><a href="https://codeforces.com/contest/1359/problem/C" target="_blank" rel="noopener noreferrer">1359C — Mixing Water</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1359C](https://codeforces.com/contest/1359/problem/C) |

## Topics
`binary search` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Mixing Water</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are two infinite sources of water:</p><ul> <li> hot water of temperature $$$h$$$; </li><li> cold water of temperature $$$c$$$ ($$$c  \lt  h$$$). </li></ul><p>You perform the following procedure of alternating moves:</p><ol> <li> take <span class="tex-font-style-bf">one</span> cup of the <span class="tex-font-style-bf">hot</span> water and pour it into an infinitely deep barrel; </li><li> take <span class="tex-font-style-bf">one</span> cup of the <span class="tex-font-style-bf">cold</span> water and pour it into an infinitely deep barrel; </li><li> take <span class="tex-font-style-bf">one</span> cup of the <span class="tex-font-style-bf">hot</span> water $$$\dots$$$ </li><li> and so on $$$\dots$$$ </li></ol><p><span class="tex-font-style-bf">Note that you always start with the cup of hot water</span>.</p><p>The barrel is initially empty. You have to pour <span class="tex-font-style-bf">at least one cup</span> into the barrel. The water temperature in the barrel is an average of the temperatures of the poured cups.</p><p>You want to achieve a temperature as close as possible to $$$t$$$. So if the temperature in the barrel is $$$t_b$$$, then the <span class="tex-font-style-bf">absolute difference</span> of $$$t_b$$$ and $$$t$$$ ($$$|t_b - t|$$$) should be as small as possible.</p><p>How many cups should you pour into the barrel, so that the temperature in it is as close as possible to $$$t$$$? If there are multiple answers with the minimum absolute difference, then print the smallest of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$T$$$ ($$$1 \le T \le 3 \cdot 10^4$$$) — the number of testcases.</p><p>Each of the next $$$T$$$ lines contains three integers $$$h$$$, $$$c$$$ and $$$t$$$ ($$$1 \le c  \lt  h \le 10^6$$$; $$$c \le t \le h$$$) — the temperature of the hot water, the temperature of the cold water and the desired temperature in the barrel.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase print a single positive integer — the minimum number of cups required to be poured into the barrel to achieve the closest temperature to $$$t$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009934393685488259" id="id007045278981370718" class="input-output-copier">Copy</div></div><pre id="id009934393685488259">3
30 10 20
41 15 30
18 13 18
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0015340113812868927" id="id004065923649881622" class="input-output-copier">Copy</div></div><pre id="id0015340113812868927">2
7
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase the temperature after $$$2$$$ poured cups: $$$1$$$ hot and $$$1$$$ cold is exactly $$$20$$$. So that is the closest we can achieve.</p><p>In the second testcase the temperature after $$$7$$$ poured cups: $$$4$$$ hot and $$$3$$$ cold is about $$$29.857$$$. Pouring more water won't get us closer to $$$t$$$ than that.</p><p>In the third testcase the temperature after $$$1$$$ poured cup: $$$1$$$ hot is $$$18$$$. That's exactly equal to $$$t$$$.</p></div>