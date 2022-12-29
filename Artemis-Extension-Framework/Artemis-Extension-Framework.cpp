#include "Artemis-Extension-Framework.h"

ARTEMIS_FRAMEWORK_API VOID APIENTRY GetExtensionDescriptor(Artemis::ExtensionDescriptor* pDescriptor) { *pDescriptor = c_ExtensionDescriptor; }