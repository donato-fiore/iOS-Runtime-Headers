// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISUBTITLECELLCONTENTVIEW_H
#define _UISUBTITLECELLCONTENTVIEW_H

@class NSLayoutRect, NSString;
@protocol _UIContentViewComponentDescribing, _UIContentView;


#import "UIView.h"
#import "_UISubtitleCellContentViewConfiguration.h"
#import "_UIContentViewEditingController.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface _UISubtitleCellContentView : UIView <_UIContentViewComponentDescribing, _UIContentView>

 {
    _UISubtitleCellContentViewConfiguration *_animatingFromConfiguration;
    _UISubtitleCellContentViewConfiguration *_animatingToConfiguration;
    CGFloat _preferredMaxLayoutWidth;
    _UIContentViewEditingController *_editingController;
}


@property (readonly, nonatomic) BOOL _preventFocus;
@property (copy, nonatomic, setter=_setPrimaryTextFrameDidChangeHandler:) id *_primaryTextFrameDidChangeHandler; // ivar: _primaryTextFrameDidChangeHandler
@property (readonly, nonatomic) CGRect _primaryTextLayoutFrame;
@property (readonly, nonatomic) NSLayoutRect *_primaryTextLayoutRect;
@property (copy, nonatomic) _UISubtitleCellContentViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(BOOL)_needsDoubleUpdateConstraintsPass;
-(BOOL)becomeFirstResponder;
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