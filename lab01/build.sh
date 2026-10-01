#!/bin/sh
set -eu
cd "$(dirname "$0")"
mkdir -p build
for source in pw01-*.c; do
    name=${source%.c}
    "${CC:-gcc}" -std=c11 -Wall -Wextra -Wpedantic -Werror "$source" -o "build/$name"
done
printf 'Built all 10 programs in build/.\n'
