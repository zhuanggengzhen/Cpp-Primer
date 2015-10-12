#ifndef EX_7_32_WINDOW_H
#define EX_7_32_WINDOW_H

#include "ex7_32a.h"
#include <vector>

class Window_mgr
{
public:
	typedef ScreenIndex std::vector<Screen>::size_type;
	void clear(ScreenIndex i);
private:
	std::vector<Screen> screens;
};

inline void Window_mgr::clear(ScreenIndex i)
{
	if(i >= screens.size()) return;
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

#endif
