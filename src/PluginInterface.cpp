// todo file format description
#include "PluginInterface.h"


extern "C"
{
    auto __stdcall initialize( char* language,              // two character language code
                               unsigned short* version,     // API version, must be set to "1"
                               bool* animation )            // whether this plugin can access
                               -> bool
    {
        *version   = 1;
        *animation = false; // it's not an image processing plugin

        MessageBox( nullptr,
                    "This is the initialization function",
                    "Custom Promotion NG Plugin",
                    MB_OK );

        return true;
    }


    auto __stdcall setProgressCallback( ProgressCallback progressCallback ) -> void
    {
        // nothing
    }


    auto __stdcall getErrorMessage() -> wchar_t*
    {
        return nullptr;
    }


    auto __stdcall getFileTypeId() -> char*
    {
        static char file_type_id[] { "de.cosmigo.fileio.vra" };
        return file_type_id;
    }


    auto __stdcall isReadSupported() -> bool
    {
        return false;
    }


    auto __stdcall isWriteSupported() -> bool
    {
        return false;
    }


    auto __stdcall isWriteTrueColorSupported() -> bool
    {
        return false;
    }


    auto __stdcall getFileBoxDescription() -> wchar_t*
    {
        static wchar_t file_box_description[] { L"VRA - VRAM File" };
        return file_box_description;
    }


    auto __stdcall getFileExtension() -> wchar_t*
    {
        static wchar_t file_extension[] { L"VRA" };
        return file_extension;
    }


    auto __stdcall setFilename( wchar_t* filename ) -> void
    {
        filename = nullptr;
    }


    auto __stdcall canHandle() -> bool
    {
        return false;
    }


    auto __stdcall loadBasicData() -> bool
    {
        return false;
    }


    auto __stdcall getWidth() -> int
    {
        return 1;
    }


    auto __stdcall getHeight() -> int
    {
        return 1;
    }


    auto __stdcall getImageCount() -> int
    {
        return 1;
    }


    auto __stdcall canExtractPalette() -> bool
    {
        return false;
    }


    auto __stdcall getRgbPalette() -> unsigned char*
    {
        return nullptr;
    }


    auto __stdcall getTransparentColor() -> int
    {
        return -1;
    }


    auto __stdcall isAlphaEnabled() -> bool
    {
        return false;
    }


    auto __stdcall loadNextImage( unsigned char* colorFrame,
                                  unsigned char* colorFramePalette,
                                  unsigned char* alphaFrame,
                                  unsigned char* alphaFramePalette,
                                  unsigned short* delayMs )
                                  -> bool
    {
        return false;
    }


    auto __stdcall beginWrite( int width,
                               int height,
                               int transparentColor,
                               bool alphaEnabled,
                               int numberOfFrames )
                               -> bool
    {
        return false;
    }


    auto __stdcall writeNextImage( unsigned char* colorFrame,
                                   unsigned char* colorFramePalette,
                                   unsigned char* alphaFrame,
                                   unsigned char* alphaFramePalette,
                                   unsigned char* rgba,
                                   unsigned short delayMs )
                                   -> bool
    {
        return false;
    }


    auto __stdcall finishProcessing() -> void
    {
        // nothing
    }

} // extern "C"
