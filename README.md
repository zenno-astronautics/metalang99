<div align="center">
  <img src="logo.png">
  <h1>koshmar-pp</h1>
  <a href="https://github.com/Hirrolot/koshmar-pp/actions">
    <img src="https://github.com/Hirrolot/koshmar-pp/workflows/C/C++%20CI/badge.svg">
  </a>
  <a href="https://hirrolot.github.io/koshmar-pp/">
    <img src="https://img.shields.io/badge/docs-Doxygen-blue">
  </a>
  
  Macros provide the means to abstract common syntactical patterns in order to reduce boilerplate, and hence improving clearness of code, with all far-reaching consequences. A programming language empowering us to perform metaprogramming is rather a building material because, in fact we continue programming in terms of [embedded domain-specific languages], which are best suited at expressing our intention.
  
  However, metaprogramming in C is quite castrated: preprocessor control expressions don't exist at all, [recursion is blocked], no support for arithmetic, collections, et cetera. koshmar-pp is a [metalanguage] addressing all of the aforementioned problems, and furthermore, is implemented as a set of standard-compliant macros, thus avoiding the need for third-party code generators.
</div>

[embedded domain-specific languages]: https://en.wikipedia.org/wiki/Domain-specific_language
[recursion is blocked]: https://github.com/pfultz2/Cloak/wiki/C-Preprocessor-tricks,-tips,-and-idioms#recursion
[metalanguage]: https://en.wikipedia.org/wiki/Metalanguage

## FAQ

Q: What "koshmar-pp" means?

A:

 - "koshmar" translates to Russian as "nightmare", because koshmar-pp's aim is to provide useful abstractions to manage the nightmare of preprocessor metaprogramming.
 - "pp" stands for **p**re**p**rocessor.
