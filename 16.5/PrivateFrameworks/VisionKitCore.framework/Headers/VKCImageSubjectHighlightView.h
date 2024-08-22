// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCIMAGESUBJECTHIGHLIGHTVIEW_H
#define VKCIMAGESUBJECTHIGHLIGHTVIEW_H

@class NSDate, CALayer, UIPanGestureRecognizer, UIImageView, NSString, UIDragInteraction, UISelectionFeedbackGenerator, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol UIDragInteractionDelegate, UIGestureRecognizerDelegate, VKCImageSubjectHighlightViewDelegate;


#import "VKCImageSubjectBaseView.h"
#import "VKCSubjectLiftView.h"

@interface VKCImageSubjectHighlightView : VKCImageSubjectBaseView <UIDragInteractionDelegate, UIGestureRecognizerDelegate>



@property (nonatomic) BOOL analysisDelayTimerActive; // ivar: _analysisDelayTimerActive
@property (retain, nonatomic) NSDate *calloutStartTime; // ivar: _calloutStartTime
@property (nonatomic) *CGImage colorMaskImage; // ivar: _colorMaskImage
@property (retain, nonatomic) CALayer *colorMaskLayer; // ivar: _colorMaskLayer
@property (retain, nonatomic) UIPanGestureRecognizer *coyotePanGR; // ivar: _coyotePanGR
@property (weak, nonatomic) UIImageView *currentLiftImageView; // ivar: _currentLiftImageView
@property (weak, nonatomic) VKCSubjectLiftView *currentLiftView; // ivar: _currentLiftView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKCImageSubjectHighlightViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (nonatomic) CGPoint dragInteractionStartLocation; // ivar: _dragInteractionStartLocation
@property (nonatomic) CGFloat dragInteractionStartTime; // ivar: _dragInteractionStartTime
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) BOOL glowLayerWasActiveOnLift; // ivar: _glowLayerWasActiveOnLift
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHidingMenuController; // ivar: _isHidingMenuController
@property (nonatomic) BOOL isLiftingEmptyItemArray; // ivar: _isLiftingEmptyItemArray
@property (nonatomic) BOOL isLivePhoto; // ivar: _isLivePhoto
@property (nonatomic) BOOL isLivePhotoCheckCompleted; // ivar: _isLivePhotoCheckCompleted
@property (retain, nonatomic) UILongPressGestureRecognizer *livePhotoPlayGR; // ivar: _livePhotoPlayGR
@property (retain, nonatomic) NSDate *livePhotoStartTime; // ivar: _livePhotoStartTime
@property (nonatomic) BOOL shouldShowCalloutOnDragCancel; // ivar: _shouldShowCalloutOnDragCancel
@property (nonatomic) BOOL subjectAnalysisCompleteWhenTouchesBegan; // ivar: _subjectAnalysisCompleteWhenTouchesBegan
@property (readonly, nonatomic) BOOL subjectHighlightActive;
@property (nonatomic) NSUInteger subjectHighlightState; // ivar: _subjectHighlightState
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGR; // ivar: _tapGR


-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 prefersFullSizePreviewsForSession:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)animationWithDuration:(CGFloat)arg0 fromValue:(id)arg1 toValue:(id)arg2 key:(id)arg3 ;
-(id)createItemProvider;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)springAnimationWithFromValue:(id)arg0 toValue:(id)arg1 key:(id)arg2 ;
-(id)stringForHighlightState:(NSUInteger)arg0 ;
-(id)targetedPreviewForCurrentSubject;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg0 ;
-(void)_share;
-(void)_share:(id)arg0 ;
-(void)beginImageSubjectAnalysisWithDelayIfNecessary;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didTap:(id)arg0 ;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)handleCancelForUndraggedLiftForInteraction:(id)arg0 ;
-(void)hideCalloutAndGlowIfNecessary;
-(void)hideCalloutMenuIfNecessary;
-(void)livePhotoCoyotePan:(id)arg0 ;
-(void)livePhotoLongPress:(id)arg0 ;
-(void)menuControllerWillHide:(id)arg0 ;
-(void)setGlowLayerActive:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setMaskRemoveBackgroundResult:(id)arg0 ;
-(void)setNormalizedVisibleRect:(struct CGRect )arg0 ;
-(void)setRecognitionResult:(id)arg0 ;
-(void)showCalloutMenuAtLocation:(struct CGPoint )arg0 showPulse:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif