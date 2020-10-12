#include "Types.h"
#include "Defines.h"
#include "Engine.h"

int main(int argc, const char** argv){
	Viper::Engine* engine = new Viper::Engine("Viper");
	engine->Run();
	delete engine;
	return 0;
}