cmake_minimum_required( VERSION 3.25 )

project( PromotionNGPluginTemplate
    LANGUAGES CXX )

# TODO: add /Gz option to fix calling convention

add_library( Plugin SHARED "" )
set_target_properties( Plugin  PROPERTIES
    CXX_STANDARD                20
    CXX_STANDARD_REQUIRED       ON
    CXX_EXTENSIONS              OFF
    WINDOWS_EXPORT_ALL_SYMBOLS  ON )
add_subdirectory( src )
