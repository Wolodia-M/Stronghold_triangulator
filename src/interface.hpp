// Stronghold triangulator - App for simplify procces of finding strongholds
// Copyright (C) 2022  WolodiaM

// This app is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This app is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this app; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
void about();
void how_to_use();
void init()
{
	about();
	how_to_use();
}
void tick()
{
	static int input = 0;
	cout << "1. Run triangulation\n";
	cout << "2. Close the app\n";
	cout << "Input: ";
	cin >> input;
	if (input == 2)
		exit(0);
	if (input == 1)
	{
		static int x1, z1, x2, z2; 
		static float f1, f2;
		input = 0;
		cout << "Trow 1:\n";
		cout << "x: ";
		cin >> x1;
		cout << "z: ";
		cin >> z1;
		cout << "angle: ";
		cin >> f1;
		cout << "Trow 2:\n";
		cout << "x: ";
		cin >> x2;
		cout << "z: ";
		cin >> z2;
		cout << "angle: ";
		cin >> f2;
		cout << "\n";
		using namespace triang;
		cout << "Stronghold is on: ";
		getcord(x1, z1, f1, x2, z2, f2);
	}
}
void about()
{
	cout << "\t\t\tStronghold triangulator\n";
	cout << "  App for easier stronghold find\n";
	cout << "  Created by WolodiaM\n";
}
void how_to_use()
{
	cout << "\n\t\t\tHow to use?\n";
	cout << "Stay on block, use f3 to get coordinates\n";
	cout << "Go to program and press 1 to start\n";
	cout << "Type coordinates\n";
	cout << "Trow eye of ender, see in his centre and type first number from angle\n";
	cout << "Got near five hundred or more blocks away from first point\n";
	cout << "Repeat procedure for second point\n";
	cout << "You get relative position of stronghold\n";
	cout << "Real position can be in radius near 100 blocks\n";
}
