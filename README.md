# Hack Recursive Function Stack Overflow

This repository demonstrates a common error in Hack: stack overflow errors caused by deep recursion in functions that lack tail-call optimization. The `bug.hh` file contains a recursive factorial function that will overflow the stack for larger inputs.  The `bugSolution.hh` file shows alternative solutions to this problem using iteration.