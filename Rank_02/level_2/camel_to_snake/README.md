# camel_to_snake Assignment

## Description

Write a program that takes a single string in lowerCamelCase format and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter except for the first one.

A snake_case string is a string where each word is in lower case, separated by an underscore "_".

## Files

- **Expected Files:** `camel_to_snake.c`
- **Allowed Functions:** `malloc`, `realloc`, `write`

## Usage

Compile your program and run it as follows:

```sh
$> ./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$> ./camel_to_snake "helloWorld" | cat -e
hello_world$
$> ./camel_to_snake | cat -e
$
