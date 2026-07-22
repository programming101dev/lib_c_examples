#include <p101_c/p101_stdlib.h>
#include <p101_env/env.h>
#include <p101_error/error.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct p101_error *error;
    struct p101_env   *env;
    int                result;

    error  = p101_error_create(false);
    env    = p101_env_create(error, NULL);
    result = p101_abs(env, error, -42);    // NOLINT(cppcoreguidelines-avoid-magic-numbers,readability-magic-numbers)

    if(p101_error_has_error(error))
    {
        fprintf(stderr, "p101_abs failed: %s\n", p101_error_get_message(error));
    }
    else
    {
        printf("p101_abs(-42) = %d\n", result);
    }

    p101_env_destroy(env);
    p101_error_destroy(error);

    return EXIT_SUCCESS;
}
