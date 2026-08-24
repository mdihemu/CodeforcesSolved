<h2><a href="https://codeforces.com/contest/1606/problem/B" target="_blank" rel="noopener noreferrer">1606B — Update Files</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1606B](https://codeforces.com/contest/1606/problem/B) |

## Topics
`greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Update Files</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Berland State University has received a new update for the operating system. Initially it is installed only on the $$$1$$$-st computer.</p><p>Update files should be copied to all $$$n$$$ computers. The computers are not connected to the internet, so the only way to transfer update files from one computer to another is to copy them using a patch cable (a cable connecting two computers directly). Only one patch cable can be connected to a computer at a time. Thus, from any computer where the update files are installed, they can be copied to some other computer in exactly one hour.</p><p>Your task is to find the minimum number of hours required to copy the update files to all $$$n$$$ computers if there are only $$$k$$$ patch cables in Berland State University.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^5$$$) — the number of test cases.</p><p>Each test case consists of a single line that contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 10^{18}$$$) — the number of computers and the number of patch cables.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print one integer — the minimum number of hours required to copy the update files to all $$$n$$$ computers.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006116505980047523" id="id0041599853521409214" class="input-output-copier">Copy</div></div><pre id="id006116505980047523">4
8 3
6 6
7 1
1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006617479500963093" id="id009143480366849851" class="input-output-copier">Copy</div></div><pre id="id006617479500963093">4
3
6
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let's consider the test cases of the example:</p><ul> <li> $$$n=8$$$, $$$k=3$$$: <ol> <li> during the first hour, we copy the update files from the computer $$$1$$$ to the computer $$$2$$$; </li><li> during the second hour, we copy the update files from the computer $$$1$$$ to the computer $$$3$$$, and from the computer $$$2$$$ to the computer $$$4$$$; </li><li> during the third hour, we copy the update files from the computer $$$1$$$ to the computer $$$5$$$, from the computer $$$2$$$ to the computer $$$6$$$, and from the computer $$$3$$$ to the computer $$$7$$$; </li><li> during the fourth hour, we copy the update files from the computer $$$2$$$ to the computer $$$8$$$. </li></ol> </li><li> $$$n=6$$$, $$$k=6$$$: <ol> <li> during the first hour, we copy the update files from the computer $$$1$$$ to the computer $$$2$$$; </li><li> during the second hour, we copy the update files from the computer $$$1$$$ to the computer $$$3$$$, and from the computer $$$2$$$ to the computer $$$4$$$; </li><li> during the third hour, we copy the update files from the computer $$$1$$$ to the computer $$$5$$$, and from the computer $$$2$$$ to the computer $$$6$$$. </li></ol> </li><li> $$$n=7$$$, $$$k=1$$$: <ol> <li> during the first hour, we copy the update files from the computer $$$1$$$ to the computer $$$2$$$; </li><li> during the second hour, we copy the update files from the computer $$$1$$$ to the computer $$$3$$$; </li><li> during the third hour, we copy the update files from the computer $$$1$$$ to the computer $$$4$$$; </li><li> during the fourth hour, we copy the update files from the computer $$$4$$$ to the computer $$$5$$$; </li><li> during the fifth hour, we copy the update files from the computer $$$4$$$ to the computer $$$6$$$; </li><li> during the sixth hour, we copy the update files from the computer $$$3$$$ to the computer $$$7$$$. </li></ol> </li></ul></div>