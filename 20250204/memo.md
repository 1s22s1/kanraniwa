```console
$ saito@penguin:~/src/kanraniwa/20250204$ g++ -g -o for for.cpp
$ gdb for
```

```console
gdb for
```

```console
04$ g++ -g -o sample sample.cpp
gdb sample
```

```console
saito@penguin:~/src/kanraniwa/20250204$ mv hello.cpp for.cpp
saito@penguin:~/src/kanraniwa/20250204$ g++ -g -o for for.cpp
saito@penguin:~/src/kanraniwa/20250204$ ^C
saito@penguin:~/src/kanraniwa/20250204$ gdb for
GNU gdb (Debian 13.1-3) 13.1
Copyright (C) 2023 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
--Type <RET> for more, q to quit, c to continue without paging--
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from for...
(gdb) break 9
Breakpoint 1 at 0x1160: file for.cpp, line 12.
(gdb) run
Starting program: /home/saito/src/kanraniwa/20250204/for 
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, main () at for.cpp:12
12          return 0;
(gdb) exit()
A syntax error in expression, near `)'.
(gdb) quit
A debugging session is active.

        Inferior 1 [process 2422] will be killed.

Quit anyway? (y or n) y
saito@penguin:~/src/kanraniwa/20250204$ ls
background.png  background.svg  for  for.cpp  memo.md  twitter_background.rb
saito@penguin:~/src/kanraniwa/20250204$ mv for.cpp mv sample.cpp
mv: target 'sample.cpp': No such file or directory
saito@penguin:~/src/kanraniwa/20250204$ g++ -g -o sample sample.cpp
cc1plus: fatal error: sample.cpp: No such file or directory
compilation terminated.
saito@penguin:~/src/kanraniwa/20250204$ ls
background.png  background.svg  for  for.cpp  memo.md  twitter_background.rb
saito@penguin:~/src/kanraniwa/20250204$ g++ -g -o sample sample.cpp
saito@penguin:~/src/kanraniwa/20250204$ gdb sample
GNU gdb (Debian 13.1-3) 13.1
Copyright (C) 2023 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
--Type <RET> for more, q to quit, c to continue without paging--
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from sample...
(gdb) break 10
Breakpoint 1 at 0x119e: file sample.cpp, line 11.
(gdb) break 12
Breakpoint 2 at 0x11a2: file sample.cpp, line 13.
(gdb) run
Starting program: /home/saito/src/kanraniwa/20250204/sample 
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
0

Breakpoint 1, main () at sample.cpp:11
11          i++;
(gdb) print i
$1 = 0
(gdb) next

Breakpoint 2, main () at sample.cpp:13
13          cout << i << endl;
(gdb) print i
$2 = 1
(gdb) quit()
A syntax error in expression, near `)'.
(gdb) quit
A debugging session is active.

        Inferior 1 [process 2864] will be killed.

Quit anyway? (y or n) y
```