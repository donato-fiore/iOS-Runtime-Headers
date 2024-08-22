// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRUIDARKSTYLEPROVIDER_H
#define TVRUIDARKSTYLEPROVIDER_H


#import <Foundation/Foundation.h>


@interface TVRUIDarkStyleProvider : NSObject

@property (readonly, nonatomic) BOOL hasHomeButton;
@property (readonly, nonatomic) BOOL isPad;
@property (readonly, nonatomic) BOOL isPhone;


-(BOOL)isSmallDevice;
-(CGFloat)_preferredFontSizeForMenuButton;
-(CGFloat)controlPanelViewHeight;
-(CGFloat)deviceListRowHeight;
-(CGFloat)deviceSafeAreaInsetBottom;
-(CGFloat)deviceSafeAreaInsetTop;
-(CGFloat)deviceTitleHeight;
-(CGFloat)directionalPadSelectButtonBorderWidth;
-(CGFloat)disabledButtonAlpha;
-(CGFloat)mediaControlsViewHeight;
-(CGFloat)topButtonPanelHeight;
-(CGFloat)topButtonPanelPadding;
-(CGFloat)touchpadCompressedCornerRadius;
-(CGFloat)touchpadCornerRadius;
-(CGFloat)touchpadHeight;
-(CGFloat)widthForMessagesView;
-(NSUInteger)maxPagingTitleLength;
-(id)_darkTraitCollectionWithLevel:(NSInteger)arg0 ;
-(id)_imageWithName:(id)arg0 ;
-(id)_symbolImageForButtonPanelNamed:(id)arg0 ;
-(id)_symbolImageForMediaControlsNamed:(id)arg0 ;
-(id)airplaySetTopBoxIcon;
-(id)airplayStickIcon;
-(id)appleTVIcon;
-(id)buttonBackgroundColor;
-(id)buttonTextColor;
-(id)cellBackgroundColor;
-(id)cellSeparatorBackgroundColor;
-(id)chevronImage;
-(id)colorForConnectedDevice;
-(id)colorForDisconnectedDevice;
-(id)colorForMessageLabels;
-(id)colorForSpinner;
-(id)controlPanelBackgroundColor;
-(id)controlPanelBackgroundView;
-(id)defaultDeviceTitle;
-(id)directionalPadSelectButtonBorderColor;
-(id)fontForDeviceListRow;
-(id)fontForDeviceTitle;
-(id)fontForMessageViewDescription;
-(id)fontForMessageViewTitle;
-(id)fontForSpinnerTitle;
-(id)fontForWiFiButton;
-(id)genericTVIcon;
-(id)iconForButtonType:(NSInteger)arg0 ;
-(id)pagingButtonFont;
-(id)primaryButtonFont;
-(id)primaryTextAndGlyphColor;
-(id)rootBackgroundColor;
-(id)rootBackgroundView;
-(id)separatorView;
-(id)textColorForDeviceTitle;
-(id)textColorForSpinnerTitle;
-(id)textForButtonType:(NSInteger)arg0 ;
-(id)textForDeviceLockoutAlert;
-(id)textForPairingAlert;
-(id)textForPairingPasswordAlert;
-(id)tintColorForButtonDisabled;
-(id)tintColorForButtonEnabled;
-(id)tintColorForChevronImage;
-(id)tintColorForHints;
-(id)touchpadBackgroundColor;
-(struct CGSize )mediaControlsButtonSize;
-(struct CGSize )primaryButtonSize;
-(struct CGSize )remoteSize;
-(struct CGSize )secondaryButtonSize;
-(struct UIEdgeInsets )controlPanelInsets;
-(struct UIEdgeInsets )directionalPadInsetForSmallDevices;
-(struct UIEdgeInsets )mediaControlsInsets;
-(struct UIEdgeInsets )rootBackgroundInsets;
-(struct UIEdgeInsets )secondaryButtonInsets;
-(struct UIEdgeInsets )touchpadInsets;


@end


#endif