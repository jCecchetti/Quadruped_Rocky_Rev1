/**
 * Author: Jason White
 *
 * Description:
 * Reads joystick/gamepad events and displays them.
 *
 * Compile:
 * gcc joystick.c -o joystick
 *
 * Run:
 * ./joystick [/dev/input/jsX]
 *
 * See also:
 * https://www.kernel.org/doc/Documentation/input/joystick-api.txt
 */
#include <fcntl.h>
#include <stdio.h>
#include </usr/include/linux/joystick.h>


int main(int argc, char *argv[])
{
   int fd = open ("/dev/input/js0", O_RDONLY);

   struct js_event e;
   read (fd, &e, sizeof(e));
   close(fd);
   return 0;
}
