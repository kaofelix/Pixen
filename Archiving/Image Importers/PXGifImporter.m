//
//  PXGifImporter.m
//  Pixen
//
//  Copyright 2004-2011 Pixen Project. All rights reserved.
//

#import "PXGifImporter.h"

@implementation PXGifImporter

+ (BOOL)fileAtURLIsAnimated:(NSURL *)url
{
	NSImage *tempImage = [[[NSImage alloc] initWithContentsOfURL:url] autorelease];
	int frameCount = [[[[tempImage representations] objectAtIndex:0] valueForProperty:NSImageFrameCount] intValue];
	return (frameCount > 1);
}

@end
