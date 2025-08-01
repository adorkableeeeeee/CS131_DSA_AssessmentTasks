# A. Balancing Pairs [STACKS]
Balanced brackets are not only necessary in computer programming, where unbalanced ones lead to syntax errors, but also in mathematics, logic, and composition. They allow ideas to be communicated logically, maintain expressions readable, and prevent confusion from missing or misplaced pieces.

Create a C++ program that verifies whether brackets are balanced: parenthesis ```()```, square brackets ```[]```, and curly braces ```{}```. The program employs a stack to push opening brackets and match them with closing brackets to ensure they are in the correct position and matched accordingly.

## Sample Outputs
### Sample Output 1
```
Enter expression: (x + y) + (a + b)
Balanced
```

### Sample Output 2
```
Enter expression: [1 + 2 * (c - d])
Not balanced
```

### Sample Output 3
```
Enter expression: (!(!(!(!(isTrue)))))
Balanced
```