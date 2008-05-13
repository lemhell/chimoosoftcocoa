//
//  NSButton+Resizing.h
//
//  Created by Ryan Poling on 12/2/07.
//  Copyright 2007 Chimoosoft. All rights reserved.
//
//  Category on NSButton which helps resize buttons intelligently to fit any given text.  Useful especially
//  for localizing buttons in other langugages.
//
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


#import <Cocoa/Cocoa.h>


@interface NSButton (CMSButtonResizing) 
	
// Set the title resizing to fit whatever title has been assigned (for localization).
- (void)setTitle:(NSString*)title sizeToFit:(BOOL)resize alignLeft:(BOOL)left animate:(BOOL)shouldAnimate;


@end
