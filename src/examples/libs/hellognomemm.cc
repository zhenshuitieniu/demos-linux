/*
 * This file is part of the linuxapi project.
 * Copyright (C) 2011-2013 Mark Veltzer <mark.veltzer@gmail.com>
 *
 * linuxapi is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * linuxapi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with linuxapi. If not, see <http://www.gnu.org/licenses/>.
 */

#include <firstinclude.h>
#include <libgnomeuimm.h>	// for Glib::OptionContext(O), Gnome::Main(O), Gnome::UI::App(O)
#include <stdlib.h>	// for EXIT_SUCCESS

/*
 * This is a demo program for using Gnome--
 *
 * EXTRA_COMPILE_CMDS=pkg-config --cflags libgnomeuimm-2.6
 * EXTRA_LINK_CMDS=pkg-config --libs libgnomeuimm-2.6
 */

int main(int argc, char** argv, char** envp) {
	Glib::OptionContext context;
	Gnome::Main app("gnome-hello", "0.1",
		Gnome::UI::module_info_get(), argc, argv,
		context);
	Gnome::UI::App *a=new Gnome::UI::App("foo", "bar");
	a->show();
	app.run();
	return EXIT_SUCCESS;
}
