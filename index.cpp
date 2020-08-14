#include <conio.h>
#include <cstdlib>

#define ESC 27

int main() {
    while (true) {
        switch (_getch()) {
            case 'c':
                system("cmd");
                break;
            case 's':
                system("\"C:\\Program Files (x86)\\Microsoft\\Skype for Desktop\\Skype.exe\"");
                break;
            case 'v':
                system("\"C:\\Users\\Юыќур\\AppData\\Local\\Viber\\Viber.exe\"");
                break;
            case 'f':
                system("\"C:\\Program Files (x86)\\Mozilla Firefox\\Firefox.exe\"");
                break;
            case 'p':
                system("powershell");
                break;
            case 'w':
                system("\"C:\\Program Files\\LibreOffice 5\\program\\swriter.exe\"");
                break;
            case 'm':
                system("\"C:\\Program Files\\LibreOffice 5\\program\\smath.exe\"");
                break;
            case 'd':
                system("\"C:\\Program Files\\LibreOffice 5\\program\\sdraw.exe\"");
                break;
            case 'i':
                system("\"C:\\Program Files\\LibreOffice 5\\program\\simpress.exe\"");
                break;
            case 'b':
                system("\"C:\\Program Files\\LibreOffice 5\\program\\scalc.exe\"");
                break;
            case 'D':
                system("\"C:\\Program Files\\Inkscape\\inkscape.exe\"");
                break;
            case 'C':
                system("\"C:\\Windows\\system32\\calc.exe\"");
                break;
            case 'P':
                system("python");
                break;
            case 't':
                system("notepad");
                break;
            case 'T':
                system("C:\\Users\\Leha\\Documents\\Sublime\\sublime_text.exe");
                break;
            case 'q':
                return 0;
            case ESC:
                return 0;
        }
    }
    return 0;
}
