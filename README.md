> WARNING: still under v0.1.0 active development.

# Macrolop
[![CI](https://github.com/Hirrolot/macrolop/workflows/C/C++%20CI/badge.svg)](https://github.com/Hirrolot/macrolop/actions)

> The dark side of the force is a pathway to many abilities, some considered to be unnatural.<br>&emsp;&emsp;<b>-- Darth Sidious</b>

TODO: the main example (https://github.com/Hirrolot/macrolop/issues/1).

Macrolop is a [metalanguage] on top of the C99 preprocessor aimed at [language-oriented programming]. In Macrolop, programmers express their intention in terms of [domain-specific languages] provided as ordinary C libraries. No external tooling is required.

[metalanguage]: https://en.wikipedia.org/wiki/Metalanguage
[language-oriented programming]: https://en.wikipedia.org/wiki/Language-oriented_programming
[domain-specific languages]: https://en.wikipedia.org/wiki/Domain-specific_language
[metaprogramming]: https://en.wikipedia.org/wiki/Metaprogramming

## Highlights
 - C99-compliant.
 - Just `#include <macrolop.h>` and use it directly in your sources, without third-party tools.
 - No dependencies. Even the standard library.
 - Precise [documentation](https://hirrolot.github.io/macrolop/).
 - [Specification](spec/spec.pdf) with formally defined syntax and semantics.

## Supported libraries

| Name | Concept | Status |
|----------|----------|----------|
| [macrolop-generic] | [Generic programming] | Actively developed |
| [macrolop-interface] | [Interfaces] | Actively developed |
| [macrolop-adt] | [Algebraic data types] | Actively developed |
| [macrolop-algeff] | [Algebraic effects] | Actively developed |
| [macrolop-aux] | Some auxiliary macros | Actively developed |

[macrolop-generic]: https://github.com/Hirrolot/macrolop-generic
[macrolop-interface]: https://github.com/Hirrolot/macrolop-interface
[macrolop-adt]: https://github.com/Hirrolot/macrolop-adt
[macrolop-algeff]: https://github.com/Hirrolot/macrolop-algeff
[macrolop-aux]: https://github.com/Hirrolot/macrolop-aux

[Generic programming]: https://en.wikipedia.org/wiki/Generic_programming
[Interfaces]: https://en.wikipedia.org/wiki/Interface_(computing)#Software_interfaces
[Algebraic data types]: https://en.wikipedia.org/wiki/Algebraic_data_type
[Algebraic effects]: https://www.eff-lang.org/handlers-tutorial.pdf
