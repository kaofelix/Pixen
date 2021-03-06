//
//  PXDefaultBackgroundTemplateView.h
//  Pixen
//
//  Copyright 2005-2011 Pixen Project. All rights reserved.
//

#import "PXBackgroundTemplateView.h"

@interface PXDefaultBackgroundTemplateView : PXBackgroundTemplateView
{
    NSString *_backgroundTypeText;
    BOOL _activeDragTarget;
}

@property (nonatomic, retain) NSString *backgroundTypeText;
@property (nonatomic, assign) BOOL activeDragTarget;

@end
