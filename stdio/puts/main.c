#include <p101_c/p101_stdio.h>
#include <p101_env/env.h>
#include <p101_error/error.h>
#include <stdlib.h>

int main(void)
{
    struct p101_error *error;
    struct p101_env   *env;

    error = p101_error_create(false);
    env   = p101_env_create(error, NULL);
    p101_puts(env, error, "Hello from p101_puts");

    if(p101_error_has_error(error))
    {
        p101_error_reset(error);
    }

    p101_env_destroy(env);
    p101_error_destroy(error);

    return EXIT_SUCCESS;
}
