// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIGRAVITYWELLEFFECT_H
#define _UIGRAVITYWELLEFFECT_H

@class NSMutableArray, NSString, NSArray;
@protocol _UIContentEffect, _UIContentEffectDescriptor;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"
#import "_UIGravityWellEffectBody.h"

@interface _UIGravityWellEffect : NSObject <_UIContentEffect>



@property (nonatomic) NSUInteger animationCount; // ivar: _animationCount
@property (readonly, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (retain, nonatomic) UITargetedPreview *continuationPreview; // ivar: _continuationPreview
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_UIContentEffectDescriptor> *descriptor; // ivar: _descriptor
@property (nonatomic) CGFloat effectProgress; // ivar: _effectProgress
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIGravityWellEffectBody *primaryBody; // ivar: _primaryBody
@property (retain, nonatomic) NSArray *secondaryBodies; // ivar: _secondaryBodies
@property (readonly, nonatomic) NSArray *secondaryBodyPreviews;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)effectWithDescriptor:(id)arg0 continuationPreview:(id)arg1 ;
-(id)_effectSpringBehavior;
-(id)previewForContinuingToEffectWithPreview:(id)arg0 ;
-(void)_installEffectViews;
-(void)_performAllCompletions;
-(void)_tearDownEffectViews;
-(void)_updateToProgress:(CGFloat)arg0 state:(NSInteger)arg1 ;
-(void)addCompletion:(id)arg0 ;
-(void)begin;
-(void)end;
-(void)endForHandOff;
-(void)updateWithProgress:(CGFloat)arg0 ;


@end


#endif