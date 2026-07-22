#include <p101_c/p101_ctype.h>
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
    result = p101_isalpha(env, 'A');
    printf("p101_isalpha('A') = %d\n", result);
    p101_env_destroy(env);
    p101_error_destroy(error);

    return EXIT_SUCCESS;
}
