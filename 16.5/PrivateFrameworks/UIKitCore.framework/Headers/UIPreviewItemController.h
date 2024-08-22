// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPREVIEWITEMCONTROLLER_H
#define UIPREVIEWITEMCONTROLLER_H

@class MLULookupItem, CADisplayLink, NSString, NSArray, NSDictionary;
@protocol UIPreviewInteractionControllerDelegate, UIInteractionProgressObserver, UIPreviewItemDelegate;

#import <Foundation/Foundation.h>

#import "UIPreviewInteractionController.h"
#import "UIView.h"
#import "UIImageView.h"
#import "UIPreviewItemController.h"
#import "UIGestureRecognizer.h"
#import "UIViewController.h"

@interface UIPreviewItemController : NSObject <UIPreviewInteractionControllerDelegate, UIInteractionProgressObserver>

 {
    MLULookupItem *_lookupItem;
    UIPreviewInteractionController *_previewInteractionController;
    UIView *_previewIndicatorView;
    UIImageView *_previewIndicatorImageView;
    UIView *_previewIndicatorSnapshotView;
    CADisplayLink *_previewIndicatorDisplayLink;
    CGFloat _lastPreviewIndicatorAnimationTimestamp;
    CGFloat _previewIndicatorAnimationTargetAlpha;
    CGRect _previewIndicatorBoundingRect;
    BOOL _previewIndicatorUsesStandardAnimation;
    BOOL _contentManagedByClient;
    UIPreviewItemController *_strongSelf;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIPreviewItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *gestureRecognizers;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL interactionInProgress; // ivar: _interactionInProgress
@property (readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *presentationSecondaryGestureRecognizer;
@property (readonly, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) NSDictionary *previewData; // ivar: _previewData
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_isMobileSafariRestricted;
-(BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)arg0 ;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg0 ;
-(BOOL)previewInteractionController:(id)arg0 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint )arg1 inView:(id)arg2 ;
-(BOOL)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg0 ;
-(id)init;
-(id)initWithView:(id)arg0 ;
-(id)previewInteractionController:(id)arg0 viewControllerForPreviewingAtPosition:(struct CGPoint )arg1 inView:(id)arg2 presentingViewController:(*id)arg3 ;
-(id)previewViewControllerForPosition:(struct CGPoint )arg0 inSourceView:(id)arg1 documentProperties:(id)arg2 ;
-(void)dealloc;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)preparePreviewIndicatorViewInSourceView:(id)arg0 updateScreen:(BOOL)arg1 ;
-(void)previewInteractionController:(id)arg0 didDismissViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)previewInteractionController:(id)arg0 interactionProgress:(id)arg1 forRevealAtLocation:(struct CGPoint )arg2 inSourceView:(id)arg3 containerView:(id)arg4 ;
-(void)previewInteractionController:(id)arg0 performCommitForPreviewViewController:(id)arg1 committedViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg0 performCustomCommitForPreviewViewController:(id)arg1 completion:(id)arg2 ;
-(void)previewInteractionController:(id)arg0 willPresentViewController:(id)arg1 forPosition:(struct CGPoint )arg2 inSourceView:(id)arg3 ;
-(void)setupPreviewIndicatorInSourceView:(id)arg0 ;
-(void)startInteraction;
-(void)stopInteraction;
-(void)updatePreviewIndicatorAnimation:(id)arg0 ;


@end


#endif