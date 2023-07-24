#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char choice = 'y';

    printf("LPET - Linux Privilege Escalation Toolkit\n\n");

    printf("ID:\n");
    system("id");
    printf("\n");

    printf("Hosts file:\n");
    system("cat /etc/hosts");
    printf("\n");

    printf("Users on the system:\n");
    system("ls /home");
    printf("\n");

    printf("SUID binaries:\n");
    system("find / -perm -u=s 2>/dev/null");
    printf("\n");

    printf("World writeable directories:\n");
    system("find / -writable -type d 2>/dev/null");
    printf("\n");

    printf("Kernel release:\n");
    system("uname -r");
    printf("\n");

    printf("Run linux exploit suggestor (should be downloaded in the current directory)? (y/n) ");
    scanf("%c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        system("bash linux_exploit_suggestor.sh");
    }

    printf("\n");

    return 0;
}
