cmake_minimum_required( VERSION 3.25 )

target_include_directories( Plugin
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )

target_sources( Plugin
    PRIVATE PluginInterface.cpp )
