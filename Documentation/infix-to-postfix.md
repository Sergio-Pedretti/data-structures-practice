## Check value for if it is an operand or operator

| operators | Precedency | Associativity |
| :-------- | :--------: | ------------: |
| +, -      |     1      |        L -> R |
| \*, /     |     2      |        L -> R |
| ^         |     3      |        R -> L |
| unary     |     4      |        R -> L |
| ()        |     5      |        L -> R |

## Create a Stack of chars that operands take all precedency over others
