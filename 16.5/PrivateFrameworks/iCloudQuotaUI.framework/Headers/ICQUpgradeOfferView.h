// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUPGRADEOFFERVIEW_H
#define ICQUPGRADEOFFERVIEW_H

@class _ICQUpgradeOfferPageSpecification, UILayoutGuide, NSArray, UIVisualEffectView, UIButton, ICQLink, UIColor, UIView, NSString, UIFont, UIImageView, UIScrollView, UIActivityIndicatorView, UILabel;
@protocol UITextViewDelegate, UIScrollViewDelegate, ICQPageDelegate;


#import "ICQPageView.h"
#import "_ICQTextView.h"

@interface ICQUpgradeOfferView : ICQPageView <UITextViewDelegate, UIScrollViewDelegate>

 {
    _ICQUpgradeOfferPageSpecification *_upgradeOfferPageSpecification;
}


@property (readonly, nonatomic) UILayoutGuide *aboveSpinnerLayoutGuide; // ivar: _aboveSpinnerLayoutGuide
@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (readonly, nonatomic) UILayoutGuide *belowSpinnerLayoutGuide; // ivar: _belowSpinnerLayoutGuide
@property (readonly, nonatomic) UIVisualEffectView *blurBackdrop; // ivar: _blurBackdrop
@property (retain, nonatomic) UIButton *bottomButton; // ivar: _bottomButton
@property (readonly, nonatomic) ICQLink *bottomLink; // ivar: _bottomLink
@property (copy, nonatomic) UIColor *buttonTintColor; // ivar: _buttonTintColor
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICQPageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *fineprintColor;
@property (readonly, nonatomic) UIFont *fineprintFont;
@property (retain, nonatomic) _ICQTextView *fineprintView; // ivar: _fineprintView
@property (readonly, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (readonly, nonatomic) UIFont *linkButtonFont;
@property (readonly, nonatomic) UIFont *messageFont;
@property (retain, nonatomic) _ICQTextView *messageView; // ivar: _messageView
@property (retain, nonatomic) UIButton *purchase2Button; // ivar: _purchase2Button
@property (readonly, nonatomic) ICQLink *purchase2Link; // ivar: _purchase2Link
@property (retain, nonatomic) UIButton *purchaseButton; // ivar: _purchaseButton
@property (readonly, nonatomic) UIFont *purchaseButtonFont;
@property (readonly, nonatomic) ICQLink *purchaseLink; // ivar: _purchaseLink
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) UILayoutGuide *scrollVisibleLayoutGuide; // ivar: _scrollVisibleLayoutGuide
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) UIView *trayView; // ivar: _trayView
@property (nonatomic) NSInteger upgradeMode; // ivar: _upgradeMode
@property (retain, nonatomic) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(CGFloat)_marginForButton:(id)arg0 ;
-(CGFloat)_spacingFromUpperView:(id)arg0 toLowerView:(id)arg1 ;
-(NSInteger)_styleOfView:(id)arg0 ;
-(id)_anchorForLowerView:(id)arg0 ;
-(id)_anchorForUpperView:(id)arg0 ;
-(id)_buttons;
-(id)_constraintsForView:(id)arg0 equalToView:(id)arg1 ;
-(id)_imageForBundleIdentifier:(id)arg0 ;
-(id)_imageForGenericCloud;
-(id)_makeLinkButton;
-(id)_makePurchaseButton;
-(id)defaultButtonColor;
-(id)fineprintAttributes;
-(id)fineprintParagraphStyle;
-(id)horizontalConstraintsForView:(id)arg0 margin:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)messageAttributes;
-(id)messageParagraphStyle;
-(id)messageTextColor;
-(void)_setButton:(id)arg0 backgroundColor:(id)arg1 ;
-(void)_setLinkTextColor:(id)arg0 ;
-(void)_updateTrayVisibility;
-(void)bottomButtonTapped:(id)arg0 ;
-(void)flashScrollIndicatorsIfNeeded;
-(void)layoutSubviews;
-(void)purchase2ButtonTapped:(id)arg0 ;
-(void)purchaseButtonTapped:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)updateConstraints;


@end


#endif