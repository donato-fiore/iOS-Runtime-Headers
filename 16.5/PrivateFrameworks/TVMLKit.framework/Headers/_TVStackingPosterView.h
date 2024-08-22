// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVSTACKINGPOSTERVIEW_H
#define _TVSTACKINGPOSTERVIEW_H

@class UIView, NSLayoutConstraint, NSArray, NSString;
@protocol TVAuxiliaryViewSelecting;


#import "_TVAnimatedLabel.h"

@interface _TVStackingPosterView : UIView <TVAuxiliaryViewSelecting>

 {
    BOOL _requiresReconfiguration;
    NSLayoutConstraint *_topAnchorConstraint;
    NSLayoutConstraint *_bottomAnchorConstraint;
    NSLayoutConstraint *_topImageConstraint;
    NSLayoutConstraint *_bottomImageConstraint;
    CGFloat _topAnchorConstant;
    CGFloat _bottomAnchorConstant;
    CGFloat _topImageConstant;
    CGFloat _bottomImageConstant;
    CGFloat _labelWidthExpansionAmount;
    NSArray *_labelWidthConstraints;
}


@property (retain, nonatomic) _TVAnimatedLabel *animatedLabel; // ivar: _animatedLabel
@property (nonatomic) TVCellMetrics cellMetrics; // ivar: _cellMetrics
@property (copy, nonatomic) NSArray *components; // ivar: _components
@property (nonatomic) BOOL configuresForCollectionViewCell; // ivar: _configuresForCollectionViewCell
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *filteredComponents; // ivar: _filteredComponents
@property (nonatomic) CGPoint focusDirection;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIView *mainImageComponent; // ivar: _mainImageComponent
@property (copy, nonatomic) NSArray *marqueeLabels; // ivar: _marqueeLabels
@property (nonatomic) CGSize maxBoundsSize; // ivar: _maxBoundsSize
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *visibleLabelWidths; // ivar: _visibleLabelWidths


-(CGFloat)_labelWidthForWidth:(CGFloat)arg0 component:(id)arg1 expansionAmount:(CGFloat)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct TVCellMetrics )_cellMetricsForMaxSize:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )selectionMarginsForSize:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )tv_alignmentInsetsForExpectedWidth:(CGFloat)arg0 ;
-(void)_commonInit;
-(void)_configureSubviews;
-(void)_resetSubviews;
-(void)_updateComponentConstraints;
-(void)_updateFocusSizeIncrease;
-(void)_updateShadowForLabel:(id)arg0 inFocus:(BOOL)arg1 ;
-(void)_updateSubviewHeirarchyWithComponents:(id)arg0 ;
-(void)layoutSubviews;
-(void)setNeedsUpdateComponentLayout;
-(void)setPressed:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 focusUpdateContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;


@end


#endif