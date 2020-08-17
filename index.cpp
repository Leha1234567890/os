#include <conio.h>
#include <cstdlib>
#include <cstdio>

#define ESC 27

int main() {
    while (true) {
        printf("$ ");
        switch (_getch()) {
            case 'c':
                printf("c\n\n");
                system("cmd");
                break;
            case 's':
                printf("s\n\n");
                system("\"C:\\Program Files (x86)\\Microsoft\\Skype for Desktop\\Skype.exe\"");
                break;
            case 'v':
                printf("v\n\n");
                system("\"C:\\Users\\Îëüãà\\AppData\\Local\\Viber\\Viber.exe\"");
                break;
            case 'f':
                printf("f\n\n");
                system("\"C:\\Program Files (x86)\\Mozilla Firefox\\Firefox.exe\"");
                break;
            case 'p':
                printf("p\n\n");
                system("powershell");
                break;
            case 'w':
                printf("w\n\n");
                system("\"C:\\Program Files\\LibreOffice 5\\program\\swriter.exe\"");
                break;
            case 'm':
                printf("m\n\n");
                system("\"C:\\Program Files\\LibreOffice 5\\program\\smath.exe\"");
                break;
            case 'd':
                printf("d\n\n");
                system("\"C:\\Program Files\\LibreOffice 5\\program\\sdraw.exe\"");
                break;
            case 'i':
                printf("i\n\n");
                system("\"C:\\Program Files\\LibreOffice 5\\program\\simpress.exe\"");
                break;
            case 'b':
                printf("b\n\n");
                system("\"C:\\Program Files\\LibreOffice 5\\program\\scalc.exe\"");
                break;
            case 'D':
                printf("D\n\n");
                system("\"C:\\Program Files\\Inkscape\\inkscape.exe\"");
                break;
            case 'C':
                printf("C\n\n");
                system("\"C:\\Windows\\system32\\calc.exe\"");
                break;
            case 'P':
                printf("P\n\n");
                system("python");
                break;
            case 't':
                printf("t\n\n");
                system("notepad");
                break;
            case 'T':
                printf("T\n\n");
                system("C:\\Users\\Leha\\Documents\\Sublime\\sublime_text.exe");
                break;
            case 'q':
                printf("Quit");
                return 0;
            case ESC:
                printf("Quit");
                return 0;
        }
    }
    return 0;
}
