cmake_minimum_required( VERSION 3.25 )

target_include_directories( PluginTemplate
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )

target_sources( PluginTemplate
    PRIVATE PluginInterface.cpp )
