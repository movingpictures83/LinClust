#ifndef LINCLUSTPLUGIN_H
#define LINCLUSTPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class LinClustPlugin : public Plugin
{
public: 
 std::string toString() {return "LinClust";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
