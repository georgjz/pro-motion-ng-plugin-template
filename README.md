# Promotion NG Plugin Template

This is a project template for creating custom plugins for [Pro Motion NG][promotionng].

## Build Instructions

You'll need the following tools:

* [git][git]
* [CMake][cmake]

```
cmake -G "Visual Studio 17 2022" -A Win32 -S . -B build
cmake --build build --config Release
```

**The `-A Win32` part is crucial**


[promotionng]: https://www.cosmigo.com
