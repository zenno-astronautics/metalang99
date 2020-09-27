## EBNF grammar

```ebnf
<program> ::= { term }* ;

<term>    ::= <call> | <final> ;
<call>    ::= "call(" <op> "," <args> ")" ;
<final>   ::= "final(" { <pp-token> }* ")" ;
<op>      ::= <ident> ;
<args>    ::= "(" { <pp-token> "," }* [ <pp-token> ] ")" ;
```
