## EBNF grammar

```ebnf
<term> ::= { <call> | <final> }* ;

<call> ::= "call(" <macro-name> "," <args> ")" ;
<macro-name> ::= <ident> ;
<args> ::= "(" { <arg> "," }* <arg> ")" ;
<arg> ::= "" | <term> ;

<final> ::= "final(" { <pp-token> }* ")" ;
```

## Reduction rules

```
reduce =
    call(op, arg1, ..., argN) ---> reduce(op(reduce(arg1), ..., reduce(argN)))
    final(x1, ..., xN)        ---> x1, ..., xN
```
