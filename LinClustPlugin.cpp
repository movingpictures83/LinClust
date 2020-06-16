#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "LinClustPlugin.h"

void LinClustPlugin::input(std::string file) {
 inputfile = file;
}

void LinClustPlugin::run() {}

void LinClustPlugin::output(std::string file) {
std::string myCommand = "mmseqs easy-linclust "+inputfile+" "+file+" tmp";
std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<LinClustPlugin> LinClustPluginProxy = PluginProxy<LinClustPlugin>("LinClust", PluginManager::getInstance());
