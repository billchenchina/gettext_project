#include <stdio.h>
#include <libintl.h>
#include <locale.h>

#define _(STRING) gettext(STRING)

int main() {
    setlocale(LC_ALL, "");
    bindtextdomain("test_project", "translate");
    textdomain("test_project");
    printf(_("Hello, world!\n"));
}