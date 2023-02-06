#include "PluginInterface.h"


// These are the function required by Promotion NG to interact with the plugin

extern "C"
{
// Called when the plugin is registered with the application
auto __stdcall initialize( char* language,
                 unsigned short* version,
                 bool* animation )
                 -> bool
{
    MessageBox( nullptr,
                "Message box called from plugin",
                "Message box in initialize function",
                MB_OK );

    return true;
}

// Register a callback function that will generate user feedback about the
// progress of loading/saving files
auto __stdcall setProgressCallback( ProgressCallback progress_callback ) -> void
{
    return;
}

// Error message produced by a failing function
auto __stdcall getErrorMessage() -> void
{
    return;
}

// TODO:
auto __stdcall getFileTypeId() -> char*
{
    return {};
}

// Whether the plugin can read the file format to place it into the file open/
// import dialog
auto __stdcall isReadSupport() -> bool
{
    return {};
}
// TODO: Consider constexpr
// constexpr isReadSupport { []{ return true; } };

// Whether the plugin can write the file format to place it into the file open/
// import dialog
auto __stdcall isWriteSupport() -> bool
{
    return {};
}

// True color support; the indices of the colors are limited
auto __stdcall isWriteTrueColorSupport() -> bool
{
    return {};
}

// Support for loading a color palette from file without loading the tile/
// bitmap data
auto __stdcall canExtractPalette() -> bool
{
    return {};
}

// File type description
auto __stdcall getFileBoxDescription() -> wchar_t*
{
    return {};
}

// File extension without "."
auto __stdcall getFileExtension() -> wchar_t*
{
    return {};
}

// Indicates a new file is to be processed
auto __stdcall setFilename( wchar_t* filename ) -> void
{
    return;
}

// Check whether the file can be handled by the plugin
auto __stdcall canHandle() -> bool
{
    return {};
}

// Load graphic file information; resolution, color palette, etc.
auto __stdcall loadBasicData() -> bool
{
    return {};
}

// loadBasicData() has been called to ensure this data is available
auto __stdcall getWidth() -> int
{
    return {};
}

// loadBasicData() has been called to ensure this data is available
auto __stdcall getHeight() -> int
{
    return {};
}

// Number of frames, single frame files return 1
auto __stdcall getImageCount() -> int
{
    return {};
}

// Extract palette data; total of 768 bytes, three bytes per color for a total
// of 256 colors
auto __stdcall getRgbPalette() -> unsigned char*
{
    return {};
}

// Transparent color of the image TODO: index?
auto __stdcall getTransparentColor() -> int
{
    return {};
}

// Does the image contain alpha transparency data?
auto __stdcall isAlphaEnabled() -> bool
{
    return {};
}

// Advance to the next frame
auto __stdcall loadNextImage( unsigned char* color_frame,
                    unsigned char* color_frame_palette,
                    unsigned char* alpha_frame,
                    unsigned char* alpha_frame_palette,
                    unsigned short* delay_ms )
                    -> bool
{
    return {};
}

// Called before writing to file
    auto __stdcall beginWrite( int width,
                               int height,
                               int transparent_color,
                               bool alpha_enabled,
                               int number_of_frames )
                               -> bool
// auto __stdcall beginWrite() -> bool
{
    return {};
}

// Advance and write the next frame
auto __stdcall writeNextImage( unsigned char* color_frame,
                     unsigned char* color_frame_palette,
                     unsigned char* alpha_frame,
                     unsigned char* alpha_frame_palette,
                     unsigned char* rgba,
                     unsigned short* delay_ms )
                     -> bool
{
    return {};
}

// Called when write or read operations done
auto __stdcall finishProcessing() -> bool
{
    return {};
}

}