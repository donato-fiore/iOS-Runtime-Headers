// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIWINDOWSCENEACTIVATIONEFFECT_H
#define _UIWINDOWSCENEACTIVATIONEFFECT_H

@class NSMutableArray, NSString;
@protocol _UIContentEffect, _UIContentEffectDescriptor;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"
#import "UIView.h"
#import "_UIHighlightPlatterView.h"

@interface _UIWindowSceneActivationEffect : NSObject <_UIContentEffect>



@property (readonly, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (nonatomic) CGFloat currentScale; // ivar: _currentScale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_UIContentEffectDescriptor> *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) UITargetedPreview *handOffPreview;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *platterContainer; // ivar: _platterContainer
@property (retain, nonatomic) _UIHighlightPlatterView *platterView; // ivar: _platterView
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)_interactiveScaleBehavior;
-(id)_settlingBehavior;
-(id)_shadowBehavior;
-(id)initWithDescriptor:(id)arg0 ;
-(id)previewForContinuingToEffectWithPreview:(id)arg0 ;
-(void)_performAllCompletionBlocks;
-(void)addCompletion:(id)arg0 ;
-(void)advanceToScale:(CGFloat)arg0 ;
-(void)begin;
-(void)endExpanded:(BOOL)arg0 withVelocity:(CGFloat)arg1 ;


@end


#endif