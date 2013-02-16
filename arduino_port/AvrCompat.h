#ifndef __AVRCOMPAT_H__
#define __AVRCOMPAT_H_

#define utoa ultoa
#define itoa ltoa

void ltoa(long val, char* buf, int base);
void ultoa(long val, char* buf, int base);

#endif

