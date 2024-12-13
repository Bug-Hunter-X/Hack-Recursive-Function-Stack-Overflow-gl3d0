function foo(x: int): int {
  var result: int = 1;
  for (var i = 1; i <= x; ++i) {
    result *= i;
  }
  return result;
}

function main(): void {
  echo foo(5);
}

This iterative version avoids recursion entirely, eliminating the risk of stack overflow.  Other approaches include using memoization or rewriting the algorithm to use a different approach that is not recursive.