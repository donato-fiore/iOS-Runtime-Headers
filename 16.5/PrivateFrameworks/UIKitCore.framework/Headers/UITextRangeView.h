// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTRANGEVIEW_H
#define UITEXTRANGEVIEW_H

@class UIResponder<UITextInput>, NSMutableArray, NSString, NSArray;
@protocol UIPointerInteractionDelegate, UITextRangeAdjustmentInteractionDelegate;


#import "UIView.h"
#import "UITextSelectionView.h"
#import "UITouch.h"
#import "UIPointerInteraction.h"
#import "UITextRangeAdjustmentInteraction.h"
#import "UISelectionGrabberCustomPath.h"
#import "UISelectionGrabber.h"

@interface UITextRangeView : UIView <UIPointerInteractionDelegate, UITextRangeAdjustmentInteractionDelegate>

 {
    UITextSelectionView *m_selectionView;
    UIResponder<UITextInput> *m_container;
    NSMutableArray *m_rectViews;
    UITouch *m_activeTouch;
    UIView *m_rectContainerView;
    UIPointerInteraction *_pointerInteraction;
}


@property (readonly, nonatomic) CGPoint activeTouchPoint; // ivar: _activeTouchPoint
@property (retain, nonatomic) UITextRangeAdjustmentInteraction *adjustmentInteraction; // ivar: _adjustmentInteraction
@property (nonatomic) BOOL animateUpdate; // ivar: m_animateUpdate
@property (readonly, nonatomic) BOOL areSelectionRectsVisible;
@property (readonly, nonatomic) BOOL autoscrolled;
@property (nonatomic) BOOL baseIsStart;
@property (readonly, nonatomic) CGPoint basePoint; // ivar: m_basePoint
@property (nonatomic) BOOL commandsWereShowing; // ivar: m_commandsWereShowing
@property (readonly, nonatomic) UIResponder<UITextInput> *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UISelectionGrabberCustomPath *endCustomPath; // ivar: _endCustomPath
@property (nonatomic) CGRect endEdge; // ivar: m_endEdge
@property (retain, nonatomic) UISelectionGrabber *endGrabber; // ivar: m_endGrabber
@property (readonly, nonatomic) CGPoint extentPoint; // ivar: m_extentPoint
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inGesture; // ivar: m_inGesture
@property (nonatomic) CGPoint initialExtentPoint; // ivar: m_initialExtentPoint
@property (nonatomic) BOOL inputViewIsChanging; // ivar: m_inputViewIsChanging
@property (nonatomic) BOOL isClearingRange; // ivar: m_isClearingRange
@property (nonatomic) BOOL isScrolling; // ivar: m_scrolling
@property (nonatomic) BOOL magnifying; // ivar: m_magnifying
@property (nonatomic) int mode; // ivar: m_mode
@property (retain, nonatomic) NSArray *rects; // ivar: m_rects
@property (nonatomic) BOOL rotating; // ivar: m_rotating
@property (nonatomic) BOOL scaling; // ivar: m_scaling
@property (readonly, nonatomic) UITextSelectionView *selectionView;
@property (nonatomic) BOOL shouldStayVisible; // ivar: m_shouldStayVisible
@property (retain, nonatomic) UISelectionGrabberCustomPath *startCustomPath; // ivar: _startCustomPath
@property (nonatomic) CGRect startEdge; // ivar: m_startEdge
@property (retain, nonatomic) UISelectionGrabber *startGrabber; // ivar: m_startGrabber
@property (readonly) Class superclass;
@property (nonatomic) BOOL willBeginMagnifying; // ivar: m_willBeginMagnifying


-(BOOL)_endIsHorizontal;
-(BOOL)_gestureRecognizerShouldReceiveTouch:(id)arg0 ;
-(BOOL)_startIsHorizontal;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointCloserToEnd:(struct CGPoint )arg0 startEdge:(struct CGRect )arg1 endEdge:(struct CGRect )arg2 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldHitTestGrabbers;
-(BOOL)shouldShowGrabbers;
-(id)containerCoordinateSpaceForTextRangeAdjustmentInteraction:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 selectionView:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGPoint )applyTouchOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )convertFromMagnifierPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )magnifierPoint;
-(struct CGRect )_edgeHitRectForEdgeRect:(struct CGRect )arg0 grabber:(id)arg1 precision:(NSUInteger)arg2 ;
-(struct CGRect )_endEdgeHitRectWithPrecision:(NSUInteger)arg0 ;
-(struct CGRect )_selectionClipRect;
-(struct CGRect )_startEdgeHitRectWithPrecision:(NSUInteger)arg0 ;
-(struct CGRect )caretRectForTextRangeAdjustmentInteraction:(id)arg0 ;
-(void)_cancelGrabberTransitionOutAnimations:(id)arg0 ;
-(void)_updateGrabbersVisibility:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)animateHighlighterDelayedFadeInOnLayer:(id)arg0 ;
-(void)animateHighlighterExpanderAnimation;
-(void)animateHighlighterExpanderOnLayer:(id)arg0 withOffset:(struct CGPoint )arg1 ;
-(void)beginMagnifying;
-(void)cancelDelayedActions;
-(void)clearRangeAnimated:(BOOL)arg0 ;
-(void)didRotate;
-(void)didScroll;
-(void)doneMagnifying;
-(void)inputViewDidChange;
-(void)inputViewWillChange;
-(void)prepareForMagnification;
-(void)removeFromSuperview;
-(void)scaleDidChange;
-(void)scaleWillChange;
-(void)setMagnifierOrientation;
-(void)startAnimating;
-(void)stopAnimating;
-(void)textRangeAdjustmentInteraction:(id)arg0 didBeginAtPoint:(struct CGPoint )arg1 ;
-(void)textRangeAdjustmentInteraction:(id)arg0 didEndAtPoint:(struct CGPoint )arg1 ;
-(void)textRangeAdjustmentInteraction:(id)arg0 selectionMoved:(struct CGPoint )arg1 withTouchPoint:(struct CGPoint )arg2 ;
-(void)textRangeAdjustmentInteractionWasCancelled:(id)arg0 ;
-(void)updateAfterEffectiveModeChange;
-(void)updateBaseAndExtentPointsFromEdges;
-(void)updateBaseIsStartWithDocumentPoint:(struct CGPoint )arg0 ;
-(void)updateDots;
-(void)updateEdges;
-(void)updateGrabbers;
-(void)updateRectViews;
-(void)updateSelectionWithDocumentPoint:(struct CGPoint )arg0 ;
-(void)willRotate;
-(void)willScroll;


@end


#endif