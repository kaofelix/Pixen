//
//  PXPaletteColorLayer.h
//  Pixen
//
//  Copyright 2005-2011 Pixen Project. All rights reserved.
//

@interface PXPaletteColorLayer : CALayer
{
    NSUInteger _index;
    NSColor *_color;
    NSControlSize _controlSize;
    BOOL _highlighted;
}

@property (nonatomic, assign) NSUInteger index;
@property (nonatomic, retain) NSColor *color;
@property (nonatomic, assign) NSControlSize controlSize;
@property (nonatomic, assign) BOOL highlighted;

@end
