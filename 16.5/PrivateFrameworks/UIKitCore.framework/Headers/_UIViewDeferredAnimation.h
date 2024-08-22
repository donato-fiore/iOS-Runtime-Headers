// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWDEFERREDANIMATION_H
#define _UIVIEWDEFERREDANIMATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _UIViewDeferredAnimation : NSObject

@property (readonly, nonatomic) NSArray *animationFrames;
@property (nonatomic) BOOL autoreverses; // ivar: _autoreverses
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized; // ivar: _finalized
@property (retain, nonatomic) id *initialValue; // ivar: _initialValue
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) CGFloat repeatCount; // ivar: _repeatCount


-(id)description;
-(void)_enumerateAnimationFramesForKeyframes:(id)arg0 ;
-(void)_finalize;
-(void)addAnimationFrameForValue:(id)arg0 ;
-(void)animateFrameAtIndex:(NSInteger)arg0 animations:(id)arg1 ;
-(void)calculateFrameValues:(id)arg0 frameTimes:(id)arg1 withFrameInterval:(CGFloat)arg2 valueTransformer:(id)arg3 ;


@end


#endif