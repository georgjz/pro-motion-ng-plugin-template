# Pro Motion NG Plugin Template

**This is WIP**

This is a project template for creating custom plugins for [Pro Motion NG][promotionng], a fantastic pixel art and animation program. It is also [available on Steam][promotionngsteam].

The code does absolutely nothing. A message box is displayed when the initialization function is invoked (see `src/PluginInterface.cpp`). Tested with version 8.0.1.0 of [Pro Motion NG][promotionng].

## Build Instructions

You'll need the following tools:

* [git][git]
* [CMake][cmake]
* a current version of [Visual Studio][vs]

Open a terminal (MSYS2, PowerShell, etc.) and enter

```
git clone https://github.com/georgjz/pro-motion-ng-plugin-template.git  myplugin
cd myplugin
cmake -G "Visual Studio 17 2022" -S . -B build
cmake --build build --config Release
```

**NB!** if you wish to your plugin to work with a version of Pro Motion NG [prior to Changes with 8.0.0 beta 3](https://www.cosmigo.com/pixel_animation_software/changelog), you'll need to link again 32-bit libraries with `-A Win32`:

```
cmake -G "Visual Studio 17 2022" -A Win32 -S . -B build
```

Newer versions should build/work fine without the extra option.

## Installation

Once the build is finished, copy the resulting DLL `build/Release/PluginTemplate.dll` to the plugin folder of Pro Motion NG (usually something like `C:\Program Files (x86)\Steam\steamapps\common\Pro Motion NG\plugins` if you're using the steam edition). Then update `plugins.ini` on include

```
pluginX_exe=plugins\PluginTemplate.dll
pluginX_name=Plugin Template (CMake)
```

where `X` is some subsequent integer (to other plugins already installed). See [Pro Motion NG's plugin documentation][plugins] for details.

## Code Documentation

WIP. See the [developer documentation of Pro Motion NG][promotionngdoc] for the time being.


[promotionng]: https://www.cosmigo.com
[promotionngsteam]: https://store.steampowered.com/app/671190/Pro_Motion_NG/
[promotionngdoc]: https://www.cosmigo.com/pixel_animation_software/plugins/developer-interface
[plugins]: https://www.cosmigo.com/pixel_animation_software/plugins/available-plugins
[git]: https://git-scm.com
[cmake]: https://cmake.org
[vs]: https://visualstudio.microsoft.com
