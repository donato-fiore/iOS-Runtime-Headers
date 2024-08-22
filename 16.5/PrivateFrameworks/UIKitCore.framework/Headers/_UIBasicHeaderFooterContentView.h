// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBASICHEADERFOOTERCONTENTVIEW_H
#define _UIBASICHEADERFOOTERCONTENTVIEW_H

@class NSString;
@protocol _UIContentView;


#import "UIView.h"
#import "_UIBasicHeaderFooterContentViewConfiguration.h"
#import "UILabel.h"

@interface _UIBasicHeaderFooterContentView : UIView <_UIContentView>

 {
    _UIBasicHeaderFooterContentViewConfiguration *_animatingFromConfiguration;
    _UIBasicHeaderFooterContentViewConfiguration *_animatingToConfiguration;
    CGFloat _preferredMaxLayoutWidth;
}


@property (readonly, nonatomic) BOOL _preventFocus;
@property (copy, nonatomic) _UIBasicHeaderFooterContentViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(BOOL)_needsDoubleUpdateConstraintsPass;
-(CGFloat)_multilineContextWidth;
-(CGFloat)_preferredMaxLayoutWidth;
-(id)_encodableSubviews;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets )arg0 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect )arg0 ;
-(void)_setMultilineContextWidth:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif