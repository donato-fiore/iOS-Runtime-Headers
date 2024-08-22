// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDMENUVIEW_H
#define UIKEYBOARDMENUVIEW_H

@class NSTimer, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate;


#import "UIView.h"
#import "UIInputSwitcherTableView.h"
#import "UIInputSwitcherShadowView.h"
#import "UIInputSwitcherSelectionExtraView.h"
#import "UIDimmingView.h"
#import "UIKBKeyView.h"
#import "UISelectionFeedbackGenerator.h"
#import "UIKeyboardLayoutStar.h"
#import "UIKBTree.h"

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate>

 {
    UIInputSwitcherTableView *m_table;
    UIInputSwitcherShadowView *m_shadowView;
    UIInputSwitcherSelectionExtraView *m_selExtraView;
    CGRect m_referenceRect;
    CGFloat m_pointerOffset;
    BOOL m_scrollable;
    BOOL m_startAutoscroll;
    BOOL m_scrolling;
    BOOL m_shouldFade;
    CGPoint m_point;
    CGFloat m_scrollStartTime;
    int m_scrollDirection;
    NSTimer *m_scrollTimer;
    NSUInteger m_visibleRows;
    NSUInteger m_firstVisibleRow;
    UIDimmingView *m_dimmingView;
    UIView *m_inputView;
    CGPoint m_referenceLocation;
    UIKBKeyView *m_backgroundKeyView;
    CGFloat m_timeDismissed;
    UISelectionFeedbackGenerator *m_slideBehavior;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger indexForSelectedFastSwitchMode; // ivar: _indexForSelectedFastSwitchMode
@property (nonatomic) NSInteger indexForUnselectedFastSwitchMode; // ivar: _indexForUnselectedFastSwitchMode
@property (nonatomic) UIKeyboardLayoutStar *layout; // ivar: _layout
@property (nonatomic) NSInteger mode; // ivar: m_mode
@property (nonatomic) UIKBTree *referenceKey; // ivar: _referenceKey
@property (nonatomic) BOOL showingCapsLockSwitcher; // ivar: _showingCapsLockSwitcher
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesDarkTheme; // ivar: _usesDarkTheme
@property (nonatomic) BOOL usesStraightLeftEdge; // ivar: _usesStraightLeftEdge
@property (readonly) BOOL usesTable;


-(BOOL)centerPopUpOverKey;
-(BOOL)isVisible;
-(BOOL)launchedFromKeyboard;
-(BOOL)shouldSelectItemAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldShow;
-(BOOL)shouldShowSelectionExtraViewForIndexPath:(id)arg0 ;
-(BOOL)usesDeviceLanguageForItemAtIndex:(NSUInteger)arg0 ;
-(BOOL)usesDimmingView;
-(BOOL)usesShadowView;
-(CGFloat)minYOfLastTableCellForSelectionExtraView;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_internationalKeyRoundedCornerInLayout:(id)arg0 ;
-(NSUInteger)defaultSelectedIndex;
-(NSUInteger)numberOfItems;
-(id)_renderConfig;
-(id)containerView;
-(id)dimmingView;
-(id)font;
-(id)fontForItemAtIndex:(NSUInteger)arg0 ;
-(id)indexPathForInputSwitcherCellIncludingInteractiveInsetsAtPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)inputView;
-(id)localizedTitleForItemAtIndex:(NSUInteger)arg0 ;
-(id)maskForShadowViewBlurredBackground;
-(id)subtitleFont;
-(id)subtitleFontForItemAtIndex:(NSUInteger)arg0 ;
-(id)subtitleForItemAtIndex:(NSUInteger)arg0 ;
-(id)table;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willDeselectRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)titleForItemAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )interactiveBounds;
-(struct CGRect )popupRect;
-(struct CGSize )preferredSize;
-(void)_delayedFade;
-(void)applicationWillSuspend:(id)arg0 ;
-(void)autoscrollTimerFired:(id)arg0 ;
-(void)clear;
-(void)customizeCell:(id)arg0 forItemAtIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)didSelectItemAtIndex:(NSUInteger)arg0 ;
-(void)didShow;
-(void)dimmingViewWasTapped:(id)arg0 ;
-(void)endScrolling:(id)arg0 ;
-(void)fade;
-(void)fadeWithDelay:(CGFloat)arg0 ;
-(void)fadeWithDelay:(CGFloat)arg0 forSelectionAtIndex:(NSUInteger)arg1 ;
-(void)hide;
-(void)highlightRow:(NSUInteger)arg0 ;
-(void)insertSelExtraView;
-(void)performShowAnimation;
-(void)removeFromSuperview;
-(void)returnToKeyboardIfNeeded;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)selectItemAtPoint:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlightForRowAtIndexPath:(id)arg0 highlight:(BOOL)arg1 ;
-(void)setKeyboardDimmed:(BOOL)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayForCell:(id)arg0 ;
-(void)setNeedsDisplayForTopBottomCells;
-(void)setRenderConfig:(id)arg0 ;
-(void)setupBackgroundKeyViewWithSize:(struct CGSize )arg0 ;
-(void)setupShadowViewWithSize:(struct CGSize )arg0 ;
-(void)show;
-(void)showAsHUD;
-(void)showAsHUDFromLocation:(struct CGPoint )arg0 withInputView:(id)arg1 touchBegan:(CGFloat)arg2 ;
-(void)showAsPopupForKey:(id)arg0 inLayout:(id)arg1 ;
-(void)stopAnyAutoscrolling;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)willFade;
-(void)willFadeForSelectionAtIndex:(NSUInteger)arg0 ;
-(void)willShow;


@end


#endif