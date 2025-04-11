#include "plugin.hpp"

#if defined(METAMODULE_BUILTIN)
extern Plugin* pluginInstance;
#else
Plugin* pluginInstance;
#endif

#if defined(METAMODULE_BUILTIN)
void init_InfrasonicAudio(Plugin* p)
#else
void init(Plugin* p)
#endif
{
	pluginInstance = p;

	// Add modules here
	p->addModel(modelWarpCore);

	// Any other plugin initialization may go here.
	// As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.
}
