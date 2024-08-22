// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTUISTYLE_H
#define VTUISTYLE_H

@class NSArray, NSString, UIFontMetrics;

#import <Foundation/Foundation.h>

#import "MGWrapper.h"

@interface VTUIStyle : NSObject {
    NSArray *_deviceStringSuffixes;
    NSString *_deviceClass;
    BOOL _isIpad;
    BOOL _isLargeIpad;
    BOOL _needMoreLineSpacing;
    BOOL _supportsSideButtonActivation;
    UIFontMetrics *_bodyMetricsForScaling;
    MGWrapper *_mgWrapper;
}


@property (nonatomic) NSInteger audioProductID; // ivar: _audioProductID
@property (nonatomic) BOOL bluetoothDeviceSupportsHeySiri; // ivar: _bluetoothDeviceSupportsHeySiri
@property (nonatomic) NSInteger enrollmentMode; // ivar: _enrollmentMode
@property (nonatomic) BOOL isBuddyOrFollowUp; // ivar: _isBuddyOrFollowUp
@property (nonatomic) BOOL isFloatingWithReducedWidth; // ivar: _isFloatingWithReducedWidth
@property (nonatomic) BOOL isHeySiriAlwaysOn; // ivar: _isHeySiriAlwaysOn
@property (nonatomic) BOOL supportSideButtonActivation; // ivar: _supportSideButtonActivation


+(id)sharedStyle;
-(BOOL)isEdgeToEdgePhone;
-(BOOL)isGreenTeaCapableDevice;
-(BOOL)isSmallestOnboardingDeviceInBuddy;
-(BOOL)shouldPresentEducationView;
-(BOOL)supportsSideButtonActivation;
-(CGFloat)PRXdismissButtonDefaultMargin;
-(CGFloat)PRXdismissButtonEdgeToEdgeMargin;
-(CGFloat)PRXdismissButtonMargin;
-(CGFloat)PRXtitleTopPadding;
-(CGFloat)bottomOfContinueToNotNowFirstBaseline;
-(CGFloat)continueButtonFromBottom;
-(CGFloat)continueButtonOffset;
-(CGFloat)continueButtonPaddingTop;
-(CGFloat)finishEnrollmentFromBottom;
-(CGFloat)footerButtonMaximumWidth;
-(CGFloat)footerHorizontalPadding;
-(CGFloat)footerSkipButtonBaselineFromBottom;
-(CGFloat)footerTextBaselineFromTop;
-(CGFloat)footerTextBottomPadding;
-(CGFloat)headerTitleLinespacing;
-(CGFloat)horizontalPadding;
-(CGFloat)horizontalPaddingLandscape;
-(CGFloat)horizontalPaddingPortrait;
-(CGFloat)horizontalTextPadding;
-(CGFloat)imageViewTopOffsetLandscape;
-(CGFloat)imageViewTopOffsetPortrait;
-(CGFloat)laterButtonBaselinePadding;
-(CGFloat)minimumImageViewHeight;
-(CGFloat)orbImageLength;
-(CGFloat)orbImageOffsetFromTopEnrollment;
-(CGFloat)orbImagePadding;
-(CGFloat)orbLength;
-(CGFloat)orbOffsetFromTopEnrollment;
-(CGFloat)orbOffsetFromTopTraining;
-(CGFloat)paddingFromTop;
-(CGFloat)primaryButtonHeight;
-(CGFloat)primaryButtonHorizontalInset;
-(CGFloat)proxAboutLinkFirstBaselineFromTop;
-(CGFloat)proxBottomPaddingVoiceSelectionOptions;
-(CGFloat)proxChooseForMeTopPaddingFromContinueButton;
-(CGFloat)proxContainerCornerRadius;
-(CGFloat)proxContainerHorizontalVerticalPadding;
-(CGFloat)proxIntroOrbFromTopLandscape;
-(CGFloat)proxIntroOrbImageFromTopLandscape;
-(CGFloat)proxIntroTitleFromTop;
-(CGFloat)proxIntroTitleFromTopLandscape;
-(CGFloat)proxLeading;
-(CGFloat)proxLeadingLandscape;
-(CGFloat)proxPaddingDataSharingSubtitle;
-(CGFloat)proxPaddingFootnoteButton;
-(CGFloat)proxPaddingFromBottom;
-(CGFloat)proxPaddingFromTop;
-(CGFloat)proxPaddingIntroSubtitle;
-(CGFloat)proxPaddingIntroSubtitleLandscape;
-(CGFloat)proxPaddingSkipButtonPageLabel;
-(CGFloat)proxPaddingSuccessFromBottom;
-(CGFloat)proxPaddingSuccessFromBottomLandscape;
-(CGFloat)proxPaddingSuccessSubtitle;
-(CGFloat)proxPaddingSuccessTitleLandscape;
-(CGFloat)proxPaddingTrainingTitle;
-(CGFloat)proxPaddingTrainingTitleLandscape;
-(CGFloat)proxPaddingTryAgainTitleLandscape;
-(CGFloat)proxPageFirstBaselineBottom;
-(CGFloat)proxPrimaryButtonHeight;
-(CGFloat)proxSettingsLabelBottomMargin;
-(CGFloat)proxSiriLogoHeightWidth;
-(CGFloat)proxSiriLogoHeightWidthSmall;
-(CGFloat)proxSkipButtonBaselineBottomMargin;
-(CGFloat)proxStatusLabelMaxHeight;
-(CGFloat)proxTitleFirstBaselineFromTop;
-(CGFloat)proxTitleTrailingLandscape;
-(CGFloat)proxTopPaddingVoiceSelectionOptions;
-(CGFloat)proxTrailing;
-(CGFloat)proxTrailingLandscape;
-(CGFloat)proxTrainingDismissButtonHorizontalPadding;
-(CGFloat)proxTrainingDismissButtonPhoneLandscapeHorizontalPadding;
-(CGFloat)proxTrainingDismissButtonVerticalPaddingBottom;
-(CGFloat)proxTrainingDismissButtonVerticalPaddingTop;
-(CGFloat)proxTrainingDismissButtonWidthOrHeight;
-(CGFloat)proxTrainingInstructionLabelHoriztonalOffset;
-(CGFloat)proxViewHeight;
-(CGFloat)proxViewHeightPhoneLandscape;
-(CGFloat)proxViewLanguageOptionsHeight;
-(CGFloat)proxViewLanguageOptionsHeightPhoneLandscape;
-(CGFloat)proxViewMaxWidth;
-(CGFloat)proxViewMaxWidthPhoneLandscape;
-(CGFloat)radarBtnHorizontalPadding;
-(CGFloat)radarBtnVerticalPadding;
-(CGFloat)secondaryButtonBaselinePadding;
-(CGFloat)skipButtonBaselineBottomMarginLandscape;
-(CGFloat)skipButtonBaselineBottomMarginPortrait;
-(CGFloat)statusLabelMinHeight;
-(CGFloat)statusLabelVerticalOffsetFromCenter;
-(CGFloat)subtitle1BaselineOffset;
-(CGFloat)subtitle2BaselineOffset;
-(CGFloat)textOverlayLabelWidth;
-(CGFloat)textOverlayOffsetFromTop;
-(CGFloat)titleBaselineOffsetFromTop;
-(CGFloat)titleOffsetFromOrb;
-(CGFloat)titleOffsetFromOrbImage;
-(CGFloat)turnOnSiriContinueButtonHeight;
-(CGFloat)turnOnSiriContinueButtonWidth;
-(CGFloat)turnOnSiriFooterOffset;
-(CGFloat)turnOnSiriHorizontalPaddingLandscape;
-(CGFloat)turnOnSiriHorizontalPaddingPortrait;
-(CGFloat)turnOnSiriImageOffsetFromTopLandscape;
-(CGFloat)turnOnSiriImageOffsetFromTopPortrait;
-(CGFloat)turnOnSiriImageViewTopOffset;
-(CGFloat)turnOnSiriSubtitle1BaselineOffset;
-(CGFloat)turnOnSiriSubtitle2BaselineOffset;
-(float)educationAssetTopPadding;
-(id)PRXcancelFont;
-(id)PRXheaderColor;
-(id)PRXheaderFont;
-(id)PRXpageFont;
-(id)ProxCardKitTitleFontDescriptor;
-(id)VTUIDeviceSpecificAudioHintFileName:(id)arg0 ;
-(id)VTUIDeviceSpecificString:(id)arg0 ;
-(id)_appendDeviceSpecificStrings:(id)arg0 ;
-(id)buttonTextColor;
-(id)deviceSpecificString:(id)arg0 siriVoice:(id)arg1 ;
-(id)dynamicColorWithLightColor:(id)arg0 darkColor:(id)arg1 ;
-(id)educationAssetNameForTraitCollection:(id)arg0 ;
-(id)educationViewDetailText;
-(id)educationViewTitleText;
-(id)footerButtonFont;
-(id)footerFont;
-(id)footerLabelFont;
-(id)footerTextColor;
-(id)homeAppTintColor;
-(id)init;
-(id)instructionLabelFont;
-(id)paneBackgroundColor;
-(id)primaryButtonFont;
-(id)proxCancelFont;
-(id)proxFooterFont;
-(id)proxHSDescription:(id)arg0 ;
-(id)proxHeaderColor;
-(id)proxHeaderFont;
-(id)proxPageFont;
-(id)proxPageLabelColor;
-(id)proxPrimaryButtonColor;
-(id)proxPrimaryButtonFont;
-(id)proxSubtitleColor;
-(id)proxSubtitleFont;
-(id)secondaryButtonFont;
-(id)smallestDeviceOnboardingAsset;
-(id)subtitleFont;
-(id)turnOnSiriContinueButtonFont;
-(struct CGSize )educationAssetSize;
-(void)_createStringSuffixesForDevice;
-(void)dealloc;


@end


#endif