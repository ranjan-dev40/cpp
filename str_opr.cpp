#include <bits/stdc++.h>
using namespace std;

void findLength(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }

    cout << "length of string is " << i;
}

void make_lowercase(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)

        s[i] = s[i] + 32;

    cout << s << endl;
}
void make_uppercase(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)

        s[i] = s[i] - 32;

    cout << s << endl;
}

int main()
{

    char s[] = "RANJAN";

    // findLength(s);
    cout << s << endl;
    make_lowercase(s);

    return 0;
}