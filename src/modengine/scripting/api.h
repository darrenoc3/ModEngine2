#pragma once

#include "modengine/mod_engine.h"
#include "modengine/script_host.h"

namespace modengine::scripting {

void bind_patch_api(ModEngine* modengine, sol::state_view& lua);

}