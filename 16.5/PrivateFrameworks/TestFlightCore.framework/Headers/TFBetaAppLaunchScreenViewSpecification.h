// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TFBETAAPPLAUNCHSCREENVIEWSPECIFICATION_H
#define TFBETAAPPLAUNCHSCREENVIEWSPECIFICATION_H

@class UIColor, UIFont, UIFontMetrics;

#import <Foundation/Foundation.h>


@interface TFBetaAppLaunchScreenViewSpecification : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIFont *bodyTextFont; // ivar: _bodyTextFont
@property (readonly, nonatomic) UIFontMetrics *bodyTextFontMetrics; // ivar: _bodyTextFontMetrics
@property (readonly, nonatomic) UIFont *bodyTitleFont; // ivar: _bodyTitleFont
@property (readonly, nonatomic) UIFontMetrics *bodyTitleFontMetrics; // ivar: _bodyTitleFontMetrics
@property (readonly, nonatomic) CGFloat bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline; // ivar: _bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline
@property (readonly, nonatomic) CGFloat bottommostLabelLastBaselineToImageTopEdge; // ivar: _bottommostLabelLastBaselineToImageTopEdge
@property (readonly, nonatomic) CGFloat bottommostLabelLastBaselineToLockupTopEdge; // ivar: _bottommostLabelLastBaselineToLockupTopEdge
@property (readonly, nonatomic) CGFloat buttonBackgroundTopEdgeToPrimaryButtonTopEdge; // ivar: _buttonBackgroundTopEdgeToPrimaryButtonTopEdge
@property (readonly, nonatomic) CGFloat buttonHeight; // ivar: _buttonHeight
@property (readonly, nonatomic) UIEdgeInsets buttonModuleContentLayoutInsets; // ivar: _buttonModuleContentLayoutInsets
@property (readonly, nonatomic) UIColor *buttonTintColor;
@property (readonly, nonatomic) CGFloat interButtonPadding; // ivar: _interButtonPadding
@property (readonly, nonatomic) CGFloat lockupBottomEdgeToBodyTitleLabelFirstBaseline; // ivar: _lockupBottomEdgeToBodyTitleLabelFirstBaseline
@property (readonly, nonatomic) UIColor *overButtonTintTextColor;
@property (readonly, nonatomic) CGFloat primaryButtonCornerRadius;
@property (readonly, nonatomic) UIEdgeInsets scrollViewContentLayoutInsets; // ivar: _scrollViewContentLayoutInsets
@property (readonly, nonatomic) UIFont *subtitleFont; // ivar: _subtitleFont
@property (readonly, nonatomic) UIFontMetrics *subtitleFontMetrics; // ivar: _subtitleFontMetrics
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (readonly, nonatomic) UIFontMetrics *titleFontMetrics; // ivar: _titleFontMetrics
@property (readonly, nonatomic) CGFloat titleLabelLastBaselineToSubtitleLabelFirstBaseline; // ivar: _titleLabelLastBaselineToSubtitleLabelFirstBaseline
@property (readonly, nonatomic) CGFloat viewTopMarginAdditionalPaddingAsFractionOfTotalHeight; // ivar: _viewTopMarginAdditionalPaddingAsFractionOfTotalHeight
@property (readonly, nonatomic) CGFloat viewTopMarginToTitleLabelFirstBaseline; // ivar: _viewTopMarginToTitleLabelFirstBaseline


-(id)_createBodyTextFontForTraitCollection:(id)arg0 ;
-(id)_createBodyTitleFontForTraitCollection:(id)arg0 ;
-(id)_createSubtitleFontForTraitCollection:(id)arg0 ;
-(id)_createTitleFontForTraitCollection:(id)arg0 ;
-(id)initWithTraitCollection:(id)arg0 ;


@end


#endif