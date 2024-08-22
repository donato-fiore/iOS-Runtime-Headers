// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONAPPSECTIONLISTHEADERVIEW_H
#define NCNOTIFICATIONAPPSECTIONLISTHEADERVIEW_H

@class UILabel, UIImageView, UIImage, NSString;
@protocol NCNotificationAppSectionListHeaderViewDelegate;


#import "NCNotificationListBaseContentView.h"
#import "NCNotificationAppSectionListHeaderOptionsButton.h"

@interface NCNotificationAppSectionListHeaderView : NCNotificationListBaseContentView {
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    NCNotificationAppSectionListHeaderOptionsButton *_optionsButton;
}


@property (weak, nonatomic) NSObject<NCNotificationAppSectionListHeaderViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;


-(BOOL)adjustForContentSizeCategoryChange;
-(NSUInteger)_maximumNumberOfLinesForTitleText;
-(NSUInteger)_numberOfLinesForTitleTextInFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureOptionsButtonIfNecessary;
-(void)_layoutIconImageView;
-(void)_layoutOptionsButton;
-(void)_layoutTitleLabel;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForTitleTextLabel;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)didTapOptionsButton:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif