function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code will result in a stack overflow error if the input is a large number.  The reason is that the recursive calls to foo() consume increasing amounts of stack space until the stack overflows.  Hack doesn't have built-in tail-call optimization, so this is a common issue with recursive functions.