// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPREVIEWPRESENTATIONANIMATOR_H
#define _UIPREVIEWPRESENTATIONANIMATOR_H

@class CADisplayLink, CAMediaTimingFunction;

#import <Foundation/Foundation.h>


@interface _UIPreviewPresentationAnimator : NSObject

@property (copy, nonatomic) id *advanceBlock; // ivar: _advanceBlock
@property (weak, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction; // ivar: _mediaTimingFunction
@property (nonatomic) CGFloat startMediaTime; // ivar: _startMediaTime


-(id)init;
-(id)initWithDuration:(CGFloat)arg0 advanceBlock:(id)arg1 ;
-(void)_advanceFromDisplayLink:(id)arg0 ;
-(void)stopAnimation;


@end


#endif