// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIWINDOWSAFEAREAASPECTFITLAYOUTGUIDE_H
#define _UIWINDOWSAFEAREAASPECTFITLAYOUTGUIDE_H

@class NSLayoutConstraint, NSString;
@protocol _UIViewBoundingPathChangeObserver, UILayoutGuideAspectFitting;


#import "UILayoutGuide.h"

@interface _UIWindowSafeAreaAspectFitLayoutGuide : UILayoutGuide <_UIViewBoundingPathChangeObserver, UILayoutGuideAspectFitting>

 {
    BOOL _layoutFrameDirty;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}


@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isSafeAreaAspectFitLayoutGuide;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
-(void)_createOrUpdateHeightConstraintWithConstant:(CGFloat)arg0 owningView:(id)arg1 constraintsToActivate:(id)arg2 ;
-(void)_createOrUpdateLeftConstraintWithConstant:(CGFloat)arg0 owningView:(id)arg1 constraintsToActivate:(id)arg2 ;
-(void)_createOrUpdateTopConstraintWithConstant:(CGFloat)arg0 owningView:(id)arg1 constraintsToActivate:(id)arg2 ;
-(void)_createOrUpdateWidthConstraintWithConstant:(CGFloat)arg0 owningView:(id)arg1 constraintsToActivate:(id)arg2 ;
-(void)_setOwningView:(id)arg0 ;
-(void)_updateLayoutFrameConstraintsIfNeededWithOwningView:(id)arg0 ;
-(void)_updateLayoutFrameInOwningView:(id)arg0 fromEngine:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif