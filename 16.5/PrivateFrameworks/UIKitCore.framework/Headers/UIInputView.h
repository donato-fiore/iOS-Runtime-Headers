// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTVIEW_H
#define UIINPUTVIEW_H

@class NSArray, CALayer, NSMutableDictionary, NSString;
@protocol UISplittableInputView;


#import "UIView.h"
#import "UIKBRenderConfig.h"
#import "UIImage.h"

@interface UIInputView : UIView <UISplittableInputView>

 {
    UIKBRenderConfig *_renderConfig;
    BOOL _suppressBackgroundStyling;
    BOOL _disableSplitSupport;
    CGFloat _gapWidth;
    CGFloat _leftOffset;
    BOOL _isTransitioning;
    CGFloat _transitionGap;
    CGFloat _transitionLeftOffset;
    CGFloat _transitionRatio;
    NSArray *_visibleLayers;
    CALayer *_transitionLayer;
}


@property (retain, nonatomic) UIImage *_mergedImage; // ivar: _mergedImage
@property (retain, nonatomic) NSMutableDictionary *_mergedSliceMap; // ivar: _mergedSliceMap
@property (retain, nonatomic) UIImage *_splitImage; // ivar: _splitImage
@property (retain, nonatomic) NSMutableDictionary *_splitSliceMap; // ivar: _splitSliceMap
@property (nonatomic) BOOL allowsSelfSizing; // ivar: _allowsSelfSizing
@property (nonatomic) BOOL assertSizingWithPredictionBar; // ivar: _assertSizingWithPredictionBar
@property (nonatomic) UIEdgeInsets backgroundEdgeInsets; // ivar: _backgroundEdgeInsets
@property (nonatomic) CGFloat contentRatio; // ivar: _contentRatio
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger inputViewStyle; // ivar: _style
@property (readonly, nonatomic) UIView *leftContentView; // ivar: _leftContentView
@property (nonatomic) CGSize leftContentViewSize; // ivar: _leftContentSize
@property (readonly, nonatomic) UIView *rightContentView; // ivar: _rightContentView
@property (nonatomic) CGSize rightContentViewSize; // ivar: _rightContentSize
@property (readonly) Class superclass;


+(void)_setupAppearanceIfNecessary;
-(BOOL)_disableSplitSupport;
-(BOOL)_isSplit;
-(BOOL)_isToolbars;
-(BOOL)_isTransitioning;
-(BOOL)_supportsSplit;
-(BOOL)_suppressBackgroundStyling;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_additionalClipHeight;
-(NSUInteger)_clipCornersOfView:(id)arg0 ;
-(id)_splitBorderedBackgroundWithCorners:(NSUInteger)arg0 ;
-(id)_toolbarBorderedBackground;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 inputViewStyle:(NSInteger)arg1 ;
-(id)tintColor;
-(struct CGSize )_defaultSize;
-(void)_beginSplitTransitionIfNeeded:(CGFloat)arg0 gapWidth:(CGFloat)arg1 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg0 ;
-(void)_setDisableSplitSupport:(BOOL)arg0 ;
-(void)_setLeftOffset:(CGFloat)arg0 gapWidth:(CGFloat)arg1 ;
-(void)_setNeedsContentSizeUpdate;
-(void)_setProgress:(CGFloat)arg0 boundedBy:(CGFloat)arg1 ;
-(void)_setRenderConfig:(id)arg0 ;
-(void)_setSuppressBackgroundStyling:(BOOL)arg0 ;
-(void)_updateClipCorners;
-(void)_updateWithSize:(struct CGSize )arg0 ;
-(void)didEndSplitTransition;
-(void)layoutMergedSubviews;
-(void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize )arg0 rightContentSize:(struct CGSize )arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateMergedSubviewConstraints;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize )arg0 rightContentSize:(struct CGSize )arg1 ;
-(void)willBeginSplitTransition;


@end


#endif