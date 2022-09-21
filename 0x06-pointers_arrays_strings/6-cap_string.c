#include "main.h"

/**
 * cap_string - function that capitalises the first character of a word
 * @s: string to capitalize
 * Return: returns the capitalized string
 */

char *cap_string(char *)
{
int index = 0;

while (s[++index])
{
while (!(s[index] >= 'a') && (s[index] <= 'z'))
index++;

if (s[index - 1] == ' ' ||
s[index - 1] == '\t' ||
s[index - 1] == '\n' ||
s[index - 1] == ',' ||
s[index - 1] == ';' ||
s[index - 1] == '.' ||
s[index - 1] == '!' ||
s[index - 1] == '?' ||
s[index - 1] == '"' ||
s[index - 1] == '(' ||
s[index - 1] == ')' ||
s[index - 1] == '{' ||
s[index - 1] == '}' ||
s[index] -= 32;
}

return (s);
}
