//
//  NMEASerial.h
//
//  Created by Ryan on Sat May 29 2004.
//  Copyright (c) 2004 Chimoosoft. All rights reserved.
//
//  Implements the NMEA standard used by many GPS receivers.
//  This is a one way protocol - from the GPS to the computer only.
//  Parses several different positional and directional fields 
//  from the data.
//
//  ********
//  Disclaimer: Terrabrowser was one of the first Cocoa programs I wrote and
//  as such, it is in no way representative of my current coding style! ;-) 
//  Many things are done incorrectly in this code base but I have not taken the
//  time to revise them for the open source release. There are also many compile
//  time warnings which should be corrected as some of them hint at serious problems.
//  If you work for a company looking to hire me, don't look too critically at this old code!
//  Similarly, if you're trying to learn Cocoa / Objective-C, keep this in mind.
//  ********

//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#import <Foundation/Foundation.h>
#import "SerialController.h"

@class NMEAPacket;

@interface NMEASerial : SerialController {
		
	NMEAPacket * NMEA;
	
	NSMutableString * buffer;
	
	id delegate;
}


- (void)setDelegate:(id)aDelegate;
- (id)delegate;

- (void)connect;
- (void)disconnect;

- (void)initPort;
- (void)serialPortReadData:(NSDictionary *)dataDictionary;
	
- (void)dealloc;	

- (void)processString:(NSString*)str;


@end
