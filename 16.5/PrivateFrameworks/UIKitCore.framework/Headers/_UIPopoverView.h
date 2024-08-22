// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPOPOVERVIEW_H
#define _UIPOPOVERVIEW_H



#import "UIView.h"
#import "UIPopoverBackgroundView.h"
#import "UIImageView.h"
#import "UIColor.h"
#import "UIPopoverController.h"
#import "UIActionSheet.h"

@interface _UIPopoverView : UIView {
    UIView *_contentView;
    UIPopoverBackgroundView *_backgroundView;
    Class _backgroundViewClass;
    UIImageView *_toolbarShine;
}


@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (nonatomic) NSUInteger arrowDirection;
@property (nonatomic) CGFloat arrowOffset;
@property (nonatomic) NSInteger backgroundStyle;
@property (nonatomic) BOOL chromeHidden; // ivar: _chromeHidden
@property (nonatomic) BOOL chromeHiddenForSizeTransition; // ivar: _chromeHiddenForSizeTransition
@property (readonly, nonatomic) BOOL contentExtendsOverArrow; // ivar: _contentExtendsOverArrow
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (nonatomic) UIPopoverController *popoverController; // ivar: _popoverController
@property (retain, nonatomic) UIActionSheet *presentedActionSheet; // ivar: _presentedActionSheet
@property (nonatomic) BOOL showsBackgroundComponentHighlights; // ivar: _showsBackgroundComponentHighlights
@property (nonatomic) BOOL showsBackgroundViewHighlight; // ivar: _showsBackgroundViewHighlight
@property (nonatomic) BOOL showsContentViewHighlight; // ivar: _showsContentViewHighlight


+(id)popoverViewContainingView:(id)arg0 ;
-(BOOL)_allowsCustomizationOfContent;
-(BOOL)_definesTintColor;
-(BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect )arg0 ;
-(id)_normalInheritedTintColor;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)backgroundView;
-(id)contentView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 backgroundViewClass:(Class)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 backgroundViewClass:(Class)arg1 embeddedInView:(BOOL)arg2 contentExtendsOverArrow:(BOOL)arg3 ;
-(id)standardChromeView;
-(id)toolbarShine;
-(int)_style;
-(struct CGRect )_snapshotBounds;
-(struct UIEdgeInsets )safeAreaInsetsForContentView;
-(void)_hideArrow;
-(void)_layoutToolbarShine;
-(void)_performBlockCheckingDefinesTintColor:(id)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_setFrame:(struct CGRect )arg0 arrowOffset:(CGFloat)arg1 ;
-(void)_setPopoverContentView:(id)arg0 ;
-(void)_showArrow;
-(void)_updateAlphaForChromeHidden;
-(void)layoutSubviews;
-(void)setUseToolbarShine:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif