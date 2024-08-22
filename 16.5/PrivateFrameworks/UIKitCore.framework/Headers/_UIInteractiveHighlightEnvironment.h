// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINTERACTIVEHIGHLIGHTENVIRONMENT_H
#define _UIINTERACTIVEHIGHLIGHTENVIRONMENT_H

@class NSArray, NSUUID;

#import <Foundation/Foundation.h>

#import "UIScreen.h"
#import "_UIInteractiveHighlightEffectWindow.h"
#import "UIVisualEffectView.h"
#import "UIView.h"
#import "UIViewPropertyAnimator.h"
#import "UIViewFloatAnimatableProperty.h"
#import "_UIInteractiveHighlightEnvironment.h"

@interface _UIInteractiveHighlightEnvironment : NSObject {
    UIScreen *_containerScreen;
    _UIInteractiveHighlightEffectWindow *_containerWindow;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_contentView;
    UIView *_contentClipView;
    UIView *_contentOverlayView;
    UIViewPropertyAnimator *_backgroundEffectAnimator;
    UIViewFloatAnimatableProperty *_backgroundEffectProgress;
    NSArray *_viewRecords;
    _UIInteractiveHighlightEnvironment *_parentEnvironment;
    _UIInteractiveHighlightEnvironment *_childEnvironment;
    NSUUID *_backgroundAnimationIdentifier;
}


@property (copy, nonatomic) id *backgroundEffectApplyBlock; // ivar: _backgroundEffectApplyBlock
@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) UIView *contentClipView;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *customBackgroundEffectView; // ivar: _customBackgroundEffectView
@property (nonatomic, getter=isHidden) BOOL hidden;


+(id)interactiveHighlightEnvironmentForContainerView:(id)arg0 ;
+(id)requestInteractiveHighlightEnvironmentForView:(id)arg0 ;
-(NSInteger)indexOfViewRecordForView:(id)arg0 ;
-(id)backgroundVisualEffectForProgress:(CGFloat)arg0 ;
-(id)initWithContainerScreen:(id)arg0 ;
-(id)initWithContainerView:(id)arg0 ;
-(id)initWithParentEnvironment:(id)arg0 ;
-(id)interactiveHighlightEffectForView:(id)arg0 options:(NSUInteger)arg1 ;
-(id)newBackgroundEffectAnimator;
-(id)newViewRecordForView:(id)arg0 options:(NSUInteger)arg1 ;
-(void)applyBackgroundEffectWithMagnitude:(CGFloat)arg0 interactive:(BOOL)arg1 completion:(id)arg2 ;
-(void)applyContentInsets:(struct UIEdgeInsets )arg0 ;
-(void)dealloc;
-(void)disableClippingForView:(id)arg0 ancestorView:(id)arg1 ;
-(void)finalizeBackgroundEffect;
-(void)finalizeContainerWindowIfNeeded;
-(void)finalizeContentViewIfNeeded;
-(void)finalizeViewRecord:(id)arg0 ;
-(void)initBackgroundEffectViewIfNeeded;
-(void)initContainerWindowIfNeeded;
-(void)initContentViewIfNeeded;
-(void)removeAllViewRecords;
-(void)removeInteractiveHighlightEffect:(id)arg0 ;
-(void)removeViewRecordsIfNeeded;
-(void)reset;
-(void)setUserInteractionOnContainerEnabled:(BOOL)arg0 ;


@end


#endif