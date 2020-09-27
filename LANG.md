## EBNF grammar

```ebnf
<term>  ::= { <call> | <final> }*        ;

<call>  ::= "call(" <op> "," <args> ")"  ;
<op>    ::= <ident>                      ;
<args>  ::= "(" { <arg> "," }* <arg> ")" ;
<arg>   ::= "" | <term>                  ;

<final> ::= "final(" { <pp-token> }* ")" ;
```
