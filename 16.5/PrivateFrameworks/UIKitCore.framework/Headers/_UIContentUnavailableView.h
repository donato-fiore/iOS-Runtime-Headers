// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTENTUNAVAILABLEVIEW_H
#define _UICONTENTUNAVAILABLEVIEW_H

@class NSLayoutConstraint, NSMutableArray, NSString;


#import "UIView.h"
#import "_UIBackdropView.h"
#import "UIScrollView.h"
#import "UILabel.h"
#import "UIButton.h"

@interface _UIContentUnavailableView : UIView {
    NSUInteger _style;
    _UIBackdropView *_backdrop;
    UIView *_containerView;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *titleToMessageConstraint;
    NSLayoutConstraint *messageToButtonConstraint;
    UIView *_fromSnapshot;
    UIView *_toSnapshot;
    CGSize _fromSnapshotSize;
    NSMutableArray *_containerViewContraints;
}


@property (copy, nonatomic) id *buttonAction; // ivar: _buttonAction
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger vibrantOptions; // ivar: _vibrantOptions


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_hasVibrantButton;
-(BOOL)_hasVibrantText;
-(CGFloat)_buttonAlpha;
-(CGFloat)_buttonVerticalSpacing;
-(CGFloat)_labelAlpha;
-(CGFloat)_labelVerticalSpacing;
-(id)_actionButton;
-(id)_buttonBackgroundImageForStyle:(NSUInteger)arg0 controlState:(NSUInteger)arg1 ;
-(id)_buttonFont;
-(id)_buttonTextStyle;
-(id)_flatTextColor;
-(id)_vibrantBaseColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 title:(id)arg1 style:(NSUInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 title:(id)arg1 style:(NSUInteger)arg2 includeBackdrop:(BOOL)arg3 ;
-(id)preferredFocusedView;
-(struct CGColor *)_colorForButtonForStyle:(NSUInteger)arg0 controlState:(NSUInteger)arg1 ;
-(struct CGSize )_buttonSize;
-(struct UIEdgeInsets )_buttonContentEdgeInsets;
-(void)_actionButtonPressed:(id)arg0 ;
-(void)_rebuildConstraints;
-(void)_updateForCurrentContentSizeCategory;
-(void)_updateViewHierarchy;
-(void)cleanupLingeringRotationState;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)windowDidRotateNotification:(id)arg0 ;
-(void)windowWillAnimateRotateNotification:(id)arg0 ;
-(void)windowWillRotateNotification:(id)arg0 ;


@end


#endif