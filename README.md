# Common macro(s) library for Arduino & ESP32

![This is an image](./assets/ToolboxAid.png)

## Libraries required (tag links)

- None

## currennt supported macros

```C++
__FILENAME_FS__
__FILENAME__
formatBool(b)
```

```C++
#define __FILENAME_FS__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : strrchr(__FILE__, '\\') + 1 )
#define formatBool(b) ((b) ? "   true" : "  false")
```
