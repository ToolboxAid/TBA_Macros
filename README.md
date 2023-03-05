# Common macro(s) library used in TBA programs for Arduino & ESP32  

![This is an image](./assets/ToolboxAid.png)

## Libraries required (tag links)

- None

## Currennt supported macros

```C++
__FILENAME_FS__
__FILENAME__
formatBool(b)
```

```C++
#define __FILENAME_FS__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : strrchr(__FILE__, '\\') + 1 )
#define formatBool(b) ((b) ? "   true" : "  false")
#define formatBoolean(b) ((b) ? "true" : "false")
```

## Sample Output

```C++
__FILE__
 <C:\Users\davidq\Documents\Arduino\libraries\TBA_Macros\examples\TBA_Macros_test\TBA_Macros_test.ino> 

__FILENAME__
 <TBA_Macros_test.ino> 

formatBool
   true
  false

formatBoolean
true
false
.........

```
