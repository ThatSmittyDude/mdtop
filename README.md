# mdtop
A simple "top" tool for mulitple device raid
<img width="3424" height="1862" alt="image" src="https://github.com/user-attachments/assets/8c129911-eb62-40c7-9e23-7df0ab622c3f" />

Quite simply, this tool reads the info from /proc/mdstat and dumps it to the screen every 0.5 seconds


What this needs:

&emsp; -Looking to implement a better TUI like htop or btop.

&emsp;-There's a bug in the second part of the program, currently commented out. This parts reads /proc/mounts and searches for /dev/md, 

&emsp; should return on a new line but doesn't work.

&emsp; -Check for memory leaks, bugs, errors, and comaptability. 

I'm just a hobbyist, so anything helps the code and hopefully I'll learn something too.

Compile the program on linux:

<img width="3424" height="1862" alt="image" src="https://github.com/user-attachments/assets/cd8f7688-7a9a-4f8e-adc9-78e2eefb2004" />


simply just compile with g++

g++14 and newer should work

>g++ mdtop.cpp -o mdtop
