#ifndef PLUGIN_INTERFACE_H
#define PLUGIN_INTERFACE_H

#define WIN32_MEAN_AND_LEAN
#include "windows.h"


typedef void (__stdcall *ProgressCallback)( int progress );

// function definitions that must be published by the dll
extern "C"
{
	auto __stdcall initialize( char* language,
                               unsigned short* version,
                               bool* animation ) -> bool;

	auto __stdcall setProgressCallback( ProgressCallback progressCallback ) -> void;

	auto __stdcall getErrorMessage() -> wchar_t*;

	auto __stdcall getFileTypeId() -> char*;

	auto __stdcall isReadSupported() -> bool;

	auto __stdcall isWriteSupported() -> bool;

	auto __stdcall isWriteTrueColorSupported() -> bool;

	auto __stdcall getFileBoxDescription() -> wchar_t*;

	auto __stdcall getFileExtension() -> wchar_t*;

	auto __stdcall setFilename( wchar_t* filename ) -> void;

	auto __stdcall canHandle() -> bool;

	auto __stdcall loadBasicData() -> bool;

	auto __stdcall getWidth() -> int;

	auto __stdcall getHeight() -> int;

	auto __stdcall getImageCount() -> int;

	auto __stdcall canExtractPalette() -> bool;

	auto __stdcall getRgbPalette() -> unsigned char*;

	auto __stdcall getTransparentColor() -> int;

	auto __stdcall isAlphaEnabled() -> bool;

	auto __stdcall loadNextImage( unsigned char* colorFrame,
                                  unsigned char* colorFramePalette,
                                  unsigned char* alphaFrame,
                                  unsigned char* alphaFramePalette,
                                  unsigned short* delayMs )
                                  -> bool;

	auto __stdcall beginWrite( int width,
                               int height,
                               int transparentColor,
                               bool alphaEnabled,
                               int numberOfFrames )
                               -> bool;

	auto __stdcall writeNextImage( unsigned char* colorFrame,
                                   unsigned char* colorFramePalette,
                                   unsigned char* alphaFrame,
                                   unsigned char* alphaFramePalette,
                                   unsigned char* rgba,
                                   unsigned short delayMs )
                                   -> bool;

	auto __stdcall finishProcessing() -> void;

} // extern "C"


#endif // PLUGIN_INTERFACE_H
