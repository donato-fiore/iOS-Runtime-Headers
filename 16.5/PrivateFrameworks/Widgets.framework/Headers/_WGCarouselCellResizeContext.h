// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WGCAROUSELCELLRESIZECONTEXT_H
#define _WGCAROUSELCELLRESIZECONTEXT_H

@class UIViewFloatAnimatableProperty;

#import <Foundation/Foundation.h>


@interface _WGCarouselCellResizeContext : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) CGFloat compactHeight; // ivar: _compactHeight
@property (nonatomic) CGFloat expandedHeight; // ivar: _expandedHeight
@property (retain, nonatomic) UIViewFloatAnimatableProperty *resizeProgress; // ivar: _resizeProgress




@end


#endif