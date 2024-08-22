// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPREVIEWINTERACTIONCROSSBLURVIEWCONTROLLERTRANSITION_H
#define _UIPREVIEWINTERACTIONCROSSBLURVIEWCONTROLLERTRANSITION_H

@class NSString;
@protocol _UIPreviewInteractionViewControllerTransition;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"

@interface _UIPreviewInteractionCrossBlurViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition>

 {
    CGRect _initialPlatterRect;
    CGRect _finalPlatterRect;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDismissTransition) BOOL dismissTransition; // ivar: _dismissTransition
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly) Class superclass;


-(void)performAppearanceTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)performDisappearanceTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)performTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)prepareAppearanceTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)prepareDisappearanceTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)prepareTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)transitionDidEnd:(BOOL)arg0 ;


@end


#endif