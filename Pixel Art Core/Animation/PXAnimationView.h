//
//  PXAnimationView.h
//  Pixen
//
//  Copyright 2005-2011 Pixen Project. All rights reserved.
//

#import "PXCanvasView.h"

@interface PXAnimationView : PXCanvasView
{
    NSImage *_previousCelImage;
}

@property (nonatomic, retain) NSImage *previousCelImage;

@end
