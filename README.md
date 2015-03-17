pjCmdLine
==========

Small command line application to manage video projector using PJLINK Protocol. 
PJLINK password authentication is supported

Note : only on/off function supported for now.

Written in C++ using openFrameworks 0.8.4 on Ubuntu 14.04 LTS

External addons :
	- ofxArgParser : https://github.com/satoruhiga/ofxArgParser
	- ofxPJControl : https://github.com/nullboundary/ofxPJControl

Usage : 
pjCmdLine [-ip address] [-pass password] [-pwr state]

where state = on / off


This software is open source and is free to modify and redistribute.
Please enclose source code when redistributing.
Feel free to contribute and share.

License
-------

pjCmdLine

Martial GALLORINI (http://www.martialgallorini.com/)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License 
along with this program.  If not, see <http://www.gnu.org/licenses/>.
