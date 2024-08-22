// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWCONTROLLERPREVIEWINGCONTEXT_H
#define _UIVIEWCONTROLLERPREVIEWINGCONTEXT_H

@class NSString;
@protocol _UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal, UIViewControllerPreviewingDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIPreviewInteractionController.h"
#import "UIGestureRecognizer.h"
#import "UIViewController.h"

@interface _UIViewControllerPreviewingContext : NSObject <_UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal>



@property (retain, nonatomic) UIView *customViewForInteractiveHighlight; // ivar: _customViewForInteractiveHighlight
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIViewControllerPreviewingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIPreviewInteractionController *previewInteractionController; // ivar: _previewInteractionController
@property (readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithSourceView:(id)arg0 viewController:(id)arg1 ;
-(id)previewInteractionController:(id)arg0 viewControllerForPreviewingAtLocation:(struct CGPoint )arg1 inCoordinateSpace:(id)arg2 presentingViewController:(*id)arg3 ;
-(struct CGRect )preferredSourceViewRectInCoordinateSpace:(id)arg0 ;
-(void)previewInteractionController:(id)arg0 commitViewController:(id)arg1 ;
-(void)previewInteractionController:(id)arg0 didDismissViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)previewInteractionController:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)previewInteractionController:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)previewInteractionController:(id)arg0 willPresentViewController:(id)arg1 forLocation:(struct CGPoint )arg2 inSourceView:(id)arg3 ;
-(void)unregister;


@end


#endif