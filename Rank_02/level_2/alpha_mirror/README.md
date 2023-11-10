# Assignment - alpha_mirror

## Description

Write a program called alpha_mirror that takes a string and displays this string after replacing each alphabetical character by the opposite alphabetical character, followed by a newline.

- 'a' becomes 'z', 'Z' becomes 'A'
- 'd' becomes 'w', 'M' becomes 'N'

Case is not changed.

If the number of arguments is not 1, display only a newline.

## Files

- **Expected Files:** `alpha_mirror.c`
- **Allowed Functions:** `write`

## Usage

Compile your program and run it as follows:

```sh
$> ./alpha_mirror "abc"
zyx
$> ./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$> ./alpha_mirror | cat -e
$
