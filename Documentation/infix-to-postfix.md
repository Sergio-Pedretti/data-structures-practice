## Check value for if it is an operand or operator

| operators | Precedency | Associativity |
| :-------- | :--------: | ------------: |
| +, -      |     1      |        L -> R |
| \*, /     |     2      |        L -> R |
| ^         |     3      |        R -> L |
| unary     |     4      |        R -> L |
| ()        |     5      |        L -> R |

## Steps (operands take all precedency over others)

1. Create a Stack of chars
2. Check if its a operator or operand
3. Assess precedency of current value
4. Loop over char expression
5. According 1 and 2 insert or remove from stack and place it on postfix variable;

| operators | Precedency out of stack | Precedency in stack | Associativity |
| :-------- | :---------------------: | :-----------------: | ------------: |
| +, -      |            1            |          2          |        L -> R |
| \*, /     |            3            |          4          |        L -> R |
| ^         |            6            |          5          |        R -> L |
| (         |            7            |          0          |        R -> L |
| )         |            0            |   ? (do not have)   |        L -> R |
