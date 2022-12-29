//---------------------------------------------------------------------------------------------------------->
// Copyright (c) 2022 Artemis Group														                    |
// This file is licensed under the MIT license.											                    |
// Read more here: https://github.com/ArtemisDevGroup/Artemis-Extension-Framework/blob/master/LICENSE.md	|
//---------------------------------------------------------------------------------------------------------->
// This file was authored by @Sigma0014.												                    |
// @Sigma0014: https://github.com/Sigma0014												                    |
//---------------------------------------------------------------------------------------------------------->
// For guides on how to get started please refer to the wiki at:                                            |
// https://github.com/ArtemisDevGroup/Artemis-Extension-Framework/wiki                                      |
//                                                                                                          |
// For examples of how to use the different classes and functions featured in this library, please          |
// refer to the Artemis API reference at:                                                                   |
// https://github.com/ArtemisDevGroup/Artemis/wiki                                                          |
//                                                                                                          |
// For help with ImGui, please refer to the official Dear ImGui documentation at:                           |
// https://github.com/ocornut/imgui/wiki                                                                    |
//                                                                                                          |
// For help with other issues that are unrelated to Artemis and ImGui, please refer to:                     |
// https://learn.microsoft.com/en-us/cpp/?view=msvc-170 - For general C++ issues.                           |
// https://learn.microsoft.com/en-us/windows/win32/api/ - For issues regarding the Win32 API.               |
//---------------------------------------------------------------------------------------------------------->

#include <Windows.h>
#include <Midnight.h>

#include "Artemis-Extension-Framework.h"

/// <summary>
/// <para>This is the Initialize function.</para>
/// <para>Here you put all of your initialization code.</para>
/// <para>E.g. RegisterWnd calls, RegisterKeybind calls, RegisterDraw calls, Configuration calls,</para>
/// <para>MemoryProtectManager calls and any other code that is used to initialize your extension.</para>
/// <para>This function will be called when your extension is loaded into the process.</para>
/// </summary>
/// <param name="hModule">- This will be the module handle of your extension.</param>
/// <returns>
/// <para>Return TRUE to mark the initialization as a success and FALSE to fail the load.</para>
/// <para>If this function returns FALSE, Artemis will immediately release the library.</para>
/// </returns>
BOOL APIENTRY Initialize(_In_ HMODULE hModule) {

    // Your intialization code here...

    return TRUE;
}

/// This is the Release function.
/// Here you put all of your disposal code that will be in charge of disposing of
/// previously created objects.
/// Some examples of objects that need disposal are:
/// - Heap allocated memory.
/// - Handles.
/// - DXGI interfaces.
/// - Allocated system level resouces.
/// - Ejection of libraries.
VOID APIENTRY Release() {

    // Your disposal code here...
    // If your extension does not require disposal code, you may leave this empty.

}