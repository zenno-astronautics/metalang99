/*
 * Pattern matching for strings (like a switch statement).
 *
 * We could accomplish the same behaviour with X-macro, but it would require additional hassle with
 * #define and #undef directives.
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include <epilepsy.h>

#define MATCH(str, ...)                                                                            \
    { E_eval(GEN_ALL_BRANCHES(v(str), E_list(v(__VA_ARGS__)))) out:; }

// Desugaring {
#define GEN_ALL_BRANCHES(str, branches)   E_call(GEN_ALL_BRANCHES, str branches)
#define GEN_BRANCH(str, ...)              E_call(GEN_BRANCH, str __VA_ARGS__)
#define GEN_BRANCH_AUX(str, pattern, ...) E_call(GEN_BRANCH_AUX, str pattern __VA_ARGS__)
#define GEN_DEFAULT_BRANCH(branches)      E_call(GEN_DEFAULT_BRANCH, branches)
// }

// Implementation {
#define GEN_ALL_BRANCHES_IMPL(str, branches)                                                       \
    E_listUnwrap(E_listMap(                                                                        \
        E_compose(E_appl(v(GEN_BRANCH), v(str)), v(E_unparenthesiseUnevaluated)),                  \
        E_listInit(v(branches))))                                                                  \
                                                                                                   \
        GEN_DEFAULT_BRANCH(v(branches))

#define GEN_BRANCH_IMPL(str, ...) GEN_BRANCH_AUX(v(str), v(__VA_ARGS__))
#define GEN_BRANCH_AUX_IMPL(str, pattern, ...)                                                     \
    v(if (strcmp(str, pattern) == 0) { __VA_ARGS__ goto out; })

#define GEN_DEFAULT_BRANCH_IMPL(branches) E_unparenthesiseUnevaluated(E_listLast(v(branches)))
// }

// Arity specifiers {
#define GEN_BRANCH_ARITY 2
// }

int main(void) {
    const char *reason = "OK";
    int status_code;

    // status_code = 200;
    MATCH(
        reason,
        ("OK", { status_code = 200; }),
        ("Moved Permanently", { status_code = 301; }),
        ("Not Found", { status_code = 404; }),
        ({ status_code = -1; }));
}
