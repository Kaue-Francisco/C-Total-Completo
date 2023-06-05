#include <string.h>
#include <stdio.h>

void pr_reverse(char *s);

void main(void)
{
    pr_reverse("Eu gosto de C");
}

void pr_reverse(char *s)
{
    int t;

    for (t=strlen(s)-1; t>= 0; t--) putchar(s[t]);
}