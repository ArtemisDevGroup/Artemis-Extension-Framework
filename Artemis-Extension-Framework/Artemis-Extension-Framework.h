#ifndef __ARTEMIS_EXTENSION_FRAMEWORK_H__
#define __ARTEMIS_EXTENSION_FRAMEWORK_H__

// Configuration BEGIN

// Before compiling your extension, you need to specify a name and an author.
// You do so by defining two macros:
// - EXTENSION_NAME as the extension name.
// - EXTENSION_AUTHOR as the extension author.
//
// Example:
// #define EXTENSION_NAME "MyExtension"
// #define EXTENSION_AUTHOR "Sigma"

// Place your macros here...

// Configuration END

#define ARTEMIS_FRAMEWORK_API __declspec(dllexport)

#ifndef EXTENSION_NAME
#define EXTENSION_NAME ""
#error EXTENSION_NAME needs to be defined. See row 6 in Artemis-Extension-Framework.h
#endif // !EXTENSION_NAME

#ifndef EXTENSION_AUTHOR
#define EXTENSION_AUTHOR ""
#error EXTENSION_AUTHOR needs to be defined. See row 6 in Artemis-Extension-Framework.h
#endif // !EXTENSION_AUTHOR

#include <Definitions.h>
#include <ExtensionFramework.h>

BOOL APIENTRY Initialize(_In_ HMODULE hModule);
VOID APIENTRY Release();

const Artemis::ExtensionDescriptor c_ExtensionDescriptor = {
	EXTENSION_NAME,
	EXTENSION_AUTHOR,
	Initialize,
	Release
};

#endif // !__ARTEMIS_EXTENSION_FRAMEWORK_H__