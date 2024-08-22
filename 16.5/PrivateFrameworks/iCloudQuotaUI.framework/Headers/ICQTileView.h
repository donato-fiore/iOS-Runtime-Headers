// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQTILEVIEW_H
#define ICQTILEVIEW_H

@class UIStackView, NSString, UILabel, ICQPremiumOffer, _ICQOpportunityBubbleReportingSpecification, UIView, NSLayoutConstraint;
@protocol ICQUpgradeFlowManagerDelegate, ICQTileViewDelegate;


#import "ICQBannerView.h"
#import "ICQPremiumButton.h"
#import "ICQAsyncImageView.h"

@interface ICQTileView : ICQBannerView <ICQUpgradeFlowManagerDelegate>



@property (retain, nonatomic) UIStackView *actionButtonsStack; // ivar: _actionButtonsStack
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICQTileViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICQPremiumButton *dismissButton; // ivar: _dismissButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICQAsyncImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) ICQPremiumOffer *premiumOffer; // ivar: _premiumOffer
@property (retain, nonatomic) ICQPremiumButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) _ICQOpportunityBubbleReportingSpecification *reportingDetails; // ivar: _reportingDetails
@property (retain, nonatomic) ICQPremiumButton *secondaryButton; // ivar: _secondaryButton
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleLabelDismissButtonSpacingConstraint; // ivar: _titleLabelDismissButtonSpacingConstraint
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingConstraint; // ivar: _titleLabelTrailingConstraint


+(BOOL)shouldShowForPremiumOffer:(id)arg0 ;
-(BOOL)_launchFlowManagerWithLink:(id)arg0 ;
-(BOOL)handleActionFromLink:(id)arg0 ;
-(id)_getOffer;
-(id)attributedText;
-(id)createLabelWithText:(id)arg0 ;
-(id)detailAttributedText;
-(id)initWithPremiumOffer:(id)arg0 ;
-(void)_registerForDarwinNotifications;
-(void)_startOnDeviceJourneyForSystemUpgrade;
-(void)_updateBannerViewConstraints;
-(void)actionButtonTapped:(id)arg0 ;
-(void)configureSubviews;
-(void)createActionButtons;
-(void)createActionButtonsStack;
-(void)createButtonsFromBubbleDetails:(id)arg0 ;
-(void)createOrUpdateImageViewFromImageDetails:(id)arg0 ;
-(void)createOrUpdateMessageLabelWithMessage:(id)arg0 ;
-(void)createOrUpdateTitleLabelWithTitle:(id)arg0 ;
-(void)createSeparator;
-(void)dismissButtonTapped:(id)arg0 ;
-(void)updateDismissButtonWithAction:(id)arg0 ;
-(void)updatePrimaryButtonWithAction:(id)arg0 ;
-(void)updateSecondaryButtonWithAction:(id)arg0 ;
-(void)updateTileViewWithOffer:(id)arg0 ;


@end


#endif