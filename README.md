pjCmdLine
==========

Small command line application to manage video projector using PJLINK Protocol. 

PJLINK password authentication is supported

Note : only on/off function supported for now.

Written in C++ using openFrameworks 0.8.4 on Ubuntu 14.04 LTS

Core Addons : 

	- ofxNetwork

Extra addons :
	
	- ofxArgParser : https://github.com/satoruhiga/ofxArgParser
	
	- ofxPJControl : https://github.com/nullboundary/ofxPJControl

Usage : 
pjCmdLine [-ip address] [-pass password] [-mode protocol] [-pwr state]

state = on / off
protocol = PJLINK / NEC / SANYO / CHRISTIE / EPSON

Check default communication ports before building.

This software is open source and is free to modify and redistribute.
Please enclose source code when redistributing.
Feel free to contribute and share.

TODO
-------

- automatically exit app after command is sent

- close connection and quit after connection problem (bad IP or device not responding) to avoid endless loop


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
