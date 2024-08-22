// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMODULETITLEVIEW_H
#define WFMODULETITLEVIEW_H

@class UIView, WFAction, NSString, UIButton, WFIconHostingView, UILabel;
@protocol WFActionEventObserver, WFModuleTitleViewDelegate;



@interface WFModuleTitleView : UIView <WFActionEventObserver>



@property (nonatomic) NSUInteger accessoryMode; // ivar: _accessoryMode
@property (retain, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFModuleTitleViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIButton *handoffButton; // ivar: _handoffButton
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideSubtitle; // ivar: _hideSubtitle
@property (retain, nonatomic) WFIconHostingView *iconView; // ivar: _iconView
@property (weak, nonatomic) UIButton *installButton; // ivar: _installButton
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly, weak, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)viewHeight;
-(BOOL)installAction;
-(BOOL)isAccessibilityElement;
-(BOOL)isTitleLabelMultiline;
-(BOOL)toggleFavorited;
-(CGFloat)iconTitlePadding;
-(CGFloat)imageViewWidth;
-(CGFloat)titleSubtitlePadding;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )iconSize;
-(struct CGSize )sizeForLabel:(id)arg0 withMaxWidth:(CGFloat)arg1 ;
-(void)actionNameDidChange:(id)arg0 ;
-(void)configureWithTitle:(id)arg0 subtitle:(id)arg1 applicationBundleIdentifer:(id)arg2 ;
-(void)dealloc;
-(void)handoffButtonPressed:(id)arg0 ;
-(void)installButtonPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)setIcon:(id)arg0 ;
-(void)updateFont;


@end


#endif