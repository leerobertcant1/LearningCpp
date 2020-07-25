//#include <iostream>
//#include "Log.h";

/*
	Good for general projects.

	Store in something like C/Dev, easy to find.
	Can see in File Explorer, .sln file created.
	Not always wise to call solution the project good to rename.

	Vcx project the XML file for settings.

	Folders are filters not folders. Omly exist in Solution Explorer view.
	A Src folder good so not next to sln file.
	Filter view fake, just to help us.

	Intermediate files are put in base debug files.
	Change under properties.
	Change all configurations, all platforms.
	Output $(SolutionDir)bin\$(Platform)\$(Configuration)
	Intermediates $(SolutionDir)bin\intermediates\$(Platform)\$(Configuration)
	Delete the old files under debug and build the new ones.

	$()macros can go under edit view and see them.
*/

//int main()
//{
//	Log("Project");
//
//	std::cin.get();
//}