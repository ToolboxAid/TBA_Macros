
#include "Arduino.h"
#include <string.h>
#define __FILENAME_FS__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : strrchr(__FILE__, '\\') + 1 )

#define formatBool(b) ((b) ? "   true" : "  false")

#define formatBoolean(b) ((b) ? "true" : "false")
