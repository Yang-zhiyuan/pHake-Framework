#include "Framework/Memory/info.h"
#include "Framework/Game/game.h"

int main()
{
	ph::info.init("GTA5.exe");
	ph::player::set_health(99999.f);

	ph::vehicle::update();
	ph::vehicle::set_gravity(-5.f);

	return 0;
}