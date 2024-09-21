#include "../inc/libmx.h"

int mx_isspace(char c) {
    return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r');
}

