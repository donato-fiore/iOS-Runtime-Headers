// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICONTENTUNAVAILABLEVIEW_H
#define UICONTENTUNAVAILABLEVIEW_H

@class NSString;
@protocol UIContentView;


#import "UIView.h"
#import "UIActivityIndicatorView.h"
#import "UIButton.h"
#import "UIContentUnavailableConfiguration.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface UIContentUnavailableView : UIView <UIContentView>

 {
    CGFloat _preferredMaxLayoutWidth;
    BOOL _isEmbeddedInWrapperView;
}


@property (readonly, nonatomic, getter=_activityIndicator) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, nonatomic, getter=_button) UIButton *button; // ivar: _button
@property (copy, nonatomic) UIContentUnavailableConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_imageView) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic, getter=_secondaryButton) UIButton *secondaryButton; // ivar: _secondaryButton
@property (readonly, nonatomic, getter=_secondaryTextLabel) UILabel *secondaryTextLabel; // ivar: _secondaryTextLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_textLabel) UILabel *textLabel; // ivar: _textLabel


-(BOOL)_needsDoubleUpdateConstraintsPass;
-(BOOL)supportsConfiguration:(id)arg0 ;
-(CGFloat)_multilineContextWidth;
-(CGFloat)_preferredMaxLayoutWidth;
-(id)_encodableSubviews;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct NSDirectionalEdgeInsets )_defaultInsetsForView:(id)arg0 ;
-(struct UIContentUnavailableViewLayoutInfo )_computeLayoutInfoRestrictedToSize:(struct CGSize )arg0 ;
-(void)_applyConfiguration:(id)arg0 ;
-(void)_checkWhetherEmbeddedInWrapperView;
-(void)_computeLayoutInfoForButton:(id)arg0 info:(struct UIContentUnavailableViewElementLayoutInfo *)arg1 secondaryButton:(id)arg2 secondaryInfo:(struct UIContentUnavailableViewElementLayoutInfo *)arg3 axis:(NSUInteger)arg4 restrictedToSize:(struct CGSize *)arg5 cumulativeSize:(struct CGSize *)arg6 ;
-(void)_computeLayoutInfoForLabel:(id)arg0 info:(struct UIContentUnavailableViewElementLayoutInfo *)arg1 restrictedToSize:(struct CGSize *)arg2 cumulativeSize:(struct CGSize *)arg3 ;
-(void)_computeLayoutInfoForView:(id)arg0 info:(struct UIContentUnavailableViewElementLayoutInfo *)arg1 restrictedToSize:(struct CGSize *)arg2 cumulativeSize:(struct CGSize *)arg3 ;
-(void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets )arg0 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect )arg0 ;
-(void)_setMultilineContextWidth:(CGFloat)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif