<h2><a href="https://codeforces.com/contest/1363/problem/B" target="_blank" rel="noopener noreferrer">1363B — Subsequence Hate</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1363B](https://codeforces.com/contest/1363/problem/B) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Subsequence Hate</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Shubham has a binary string $$$s$$$. A binary string is a string containing only characters "<span class="tex-font-style-tt">0</span>" and "<span class="tex-font-style-tt">1</span>".</p><p>He can perform the following operation on the string any amount of times: </p><ul> <li> Select an index of the string, and flip the character at that index. This means, if the character was "<span class="tex-font-style-tt">0</span>", it becomes "<span class="tex-font-style-tt">1</span>", and vice versa. </li></ul><p>A string is called good if it does not contain "<span class="tex-font-style-tt">010</span>" or "<span class="tex-font-style-tt">101</span>" as a subsequence  — for instance, "<span class="tex-font-style-tt">1001</span>" contains "<span class="tex-font-style-tt">101</span>" as a subsequence, hence it is not a good string, while "<span class="tex-font-style-tt">1000</span>" doesn't contain neither "<span class="tex-font-style-tt">010</span>" nor "<span class="tex-font-style-tt">101</span>" as subsequences, so it is a good string.</p><p>What is the minimum number of operations he will have to perform, so that the string becomes good? It can be shown that with these operations we can make any string good.</p><p>A string $$$a$$$ is a subsequence of a string $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) characters.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ $$$(1\le t \le 100)$$$ — the number of test cases.</p><p>Each of the next $$$t$$$ lines contains a binary string $$$s$$$ $$$(1 \le |s| \le 1000)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For every string, output the minimum number of operations required to make it good.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020543365467405716" id="id009468625092786355" class="input-output-copier">Copy</div></div><pre id="id0020543365467405716">7
001
100
101
010
0
1
001100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0006139606978845058" id="id008153752886690558" class="input-output-copier">Copy</div></div><pre id="id0006139606978845058">0
0
1
1
0
0
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In test cases $$$1$$$, $$$2$$$, $$$5$$$, $$$6$$$ no operations are required since they are already good strings.</p><p>For the $$$3$$$rd test case: "<span class="tex-font-style-tt">001</span>" can be achieved by flipping the first character  — and is one of the possible ways to get a good string.</p><p>For the $$$4$$$th test case: "<span class="tex-font-style-tt">000</span>" can be achieved by flipping the second character  — and is one of the possible ways to get a good string.</p><p>For the $$$7$$$th test case: "<span class="tex-font-style-tt">000000</span>" can be achieved by flipping the third and fourth characters  — and is one of the possible ways to get a good string.</p></div>