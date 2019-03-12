#include <kipr/botball.h>

int main()
{
    create_connect();
    create_drive_direct(100,100);
    wait_for_milliseconds(4000);
    create_drive_direct(0,100);
    wait_for_milliseconds(3500);
    create_drive_direct(100,100);
    wait_for_milliseconds(1500);
    create_drive_direct(100,0);
    wait_for_milliseconds(3500);
    create_drive_direct(100,100);
    wait_for_milliseconds(1500);
    return 0;
}
