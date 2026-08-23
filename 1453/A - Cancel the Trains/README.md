<h2><a href="https://codeforces.com/contest/1453/problem/A" target="_blank" rel="noopener noreferrer">1453A — Cancel the Trains</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1453A](https://codeforces.com/contest/1453/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Cancel the Trains</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Gildong's town has a train system that has $$$100$$$ trains that travel from the bottom end to the top end and $$$100$$$ trains that travel from the left end to the right end. The trains starting from each side are numbered from $$$1$$$ to $$$100$$$, respectively, and all trains have the same speed. Let's take a look at the picture below.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/e0e514e81b5ed9c0fc05cc93cd8d5a36c8d9f495.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>The train system can be represented as coordinates on a 2D plane. The $$$i$$$-th train starting at the bottom end is initially at $$$(i,0)$$$ and will be at $$$(i,T)$$$ after $$$T$$$ minutes, and the $$$i$$$-th train starting at the left end is initially at $$$(0,i)$$$ and will be at $$$(T,i)$$$ after $$$T$$$ minutes. All trains arrive at their destinations after $$$101$$$ minutes.</p><p>However, Gildong found that some trains scheduled to depart at a specific time, simultaneously, are very dangerous. At this time, $$$n$$$ trains are scheduled to depart from the bottom end and $$$m$$$ trains are scheduled to depart from the left end. If two trains are both at $$$(x,y)$$$ at the same time for some $$$x$$$ and $$$y$$$, they will crash into each other. Therefore, he is asking you to find the <span class="tex-font-style-bf">minimum</span> number of trains that should be cancelled to prevent all such crashes.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains one or more test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$).</p><p>Each test case contains three lines. The first line of each test case consists of two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 100$$$) — the number of trains scheduled to depart from the bottom end, and the number of trains scheduled to depart from the left end, respectively.</p><p>The second line of each test case contains $$$n$$$ integers. Each integer is a train number that is scheduled to start from the <span class="tex-font-style-bf">bottom</span> end. The numbers are given in strictly increasing order, and are between $$$1$$$ and $$$100$$$, inclusive.</p><p>The third line of each test case contains $$$m$$$ integers. Each integer is a train number that is scheduled to start from the <span class="tex-font-style-bf">left</span> end. The numbers are given in strictly increasing order, and are between $$$1$$$ and $$$100$$$, inclusive.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer: the minimum number of trains that should be canceled in order to prevent all crashes.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003293925586247638" id="id009591801826710996" class="input-output-copier">Copy</div></div><pre id="id003293925586247638">3
1 2
1
3 4
3 2
1 3 4
2 4
9 14
2 7 16 28 33 57 59 86 99
3 9 14 19 25 26 28 35 41 59 85 87 99 100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00448929407215663" id="id007933073296455289" class="input-output-copier">Copy</div></div><pre id="id00448929407215663">0
1
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first case, we can show that there will be no crashes if the current schedule is followed. Therefore, the answer is zero.</p><p>In the second case, at $$$T=4$$$, there will be a crash, as can be seen in the picture below. We can prove that after canceling one of these trains, the remaining trains will not crash. Therefore, the answer is one.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/b367fca9b88edf3974580948cf3dc8d1c3b0d28b.png" style="zoom: 100.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div>