set(PROJECT_NAME "p101_c_examples")
set(PROJECT_VERSION "1.0.0")
set(PROJECT_DESCRIPTION "Examples for lib_c (p101 C standard-library wrappers)")
set(PROJECT_LANGUAGE "C")

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Common compiler flags
set(STANDARD_FLAGS
        -D_POSIX_C_SOURCE=200809L
        -D_XOPEN_SOURCE=700
        #-D_GNU_SOURCE
        #-D_DARWIN_C_SOURCE
        #-D__BSD_VISIBLE
        -Werror
)

# Define targets — one executable per example. Add a line here and a matching
# <target>/main.c to grow the set.
set(EXECUTABLE_TARGETS
        isalpha
        abs
        puts
)

set(LIBRARY_TARGETS "")

# Every example links the same p101 stack; m is libm (lib_c wraps <math.h>).
set(_P101_C_EXAMPLE_LIBS
        p101_error
        p101_env
        p101_c
        m
)

set(isalpha_SOURCES ctype/isalpha/main.c)
set(isalpha_HEADERS "")
set(isalpha_LINK_LIBRARIES ${_P101_C_EXAMPLE_LIBS})

set(abs_SOURCES stdlib/abs/main.c)
set(abs_HEADERS "")
set(abs_LINK_LIBRARIES ${_P101_C_EXAMPLE_LIBS})

set(puts_SOURCES stdio/puts/main.c)
set(puts_HEADERS "")
set(puts_LINK_LIBRARIES ${_P101_C_EXAMPLE_LIBS})
