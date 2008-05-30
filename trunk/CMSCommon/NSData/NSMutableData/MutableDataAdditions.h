//
//  MutableDataAdditions.h
//  GPSTest
//
//  Created by Ryan on Mon May 31 2004.
//  Copyright (c) 2004 Chimoosoft. All rights reserved.
//
//  A category on NSMutableData.
//
//  Adds some methods for setting values in various formats using
//  little or big endian systems.
//
//  ******NOTE***** This *assumes* that the computer system this program
//  is running on is BigEndian like current macs are.  If at some point in
//  the future this program is running on a little endian machine, then 
//  some of the following methods will have to be changed.
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

@interface NSMutableData ( MutableDataAdditions )

// Pass these a boolean indicating if the data is little endian or not
// as well as the index to start at.  
//
// Note that they do *not* check ta make sure the number is within the 
// bounds for now, so be careful with these.

- (void)setSInt16:(SInt16)num AtIndex:(int)index dataIsLittleEndian:(BOOL)le;
- (void)setSInt32:(SInt32)num AtIndex:(int)index dataIsLittleEndian:(BOOL)le;
- (void)setFloat32:(Float32)num AtIndex:(int)index dataIsLittleEndian:(BOOL)le;

- (void)setCString:(NSString*)s atIndex:(int)start ;
- (void)setNonTerminatedString:(NSString*)s range:(NSRange)range;

- (void)swapBytesInRange:(NSRange)subRange;


@end
