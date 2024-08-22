// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINTERFACEACTIONSEPARATABLESEQUENCEVIEW_H
#define _UIINTERFACEACTIONSEPARATABLESEQUENCEVIEW_H

@class NSArray;


#import "UIView.h"
#import "UIStackView.h"
#import "UIInterfaceActionVisualStyle.h"

@interface _UIInterfaceActionSeparatableSequenceView : UIView

@property (readonly, nonatomic) NSArray *arrangedContentSeparatorViews; // ivar: _arrangedContentSeparatorViews
@property (retain, nonatomic) NSArray *arrangedContentViews; // ivar: _arrangedContentViews
@property (readonly, nonatomic) NSArray *arrangedContentViewsDistributionConstraints; // ivar: _arrangedContentViewsDistributionConstraints
@property (nonatomic) NSInteger axis; // ivar: _axis
@property (nonatomic) NSInteger distribution; // ivar: _distribution
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (nonatomic) BOOL visualCornerForcedOverride; // ivar: _visualCornerForcedOverride
@property (nonatomic) NSUInteger visualCornerPosition; // ivar: _visualCornerPosition
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // ivar: _visualStyle


-(BOOL)_isVerticalLayout;
-(CGFloat)fittingWidthForLayoutAxis:(NSInteger)arg0 ;
-(NSInteger)_dimensionAttributeToConstrainEqual;
-(NSInteger)_separatorConstantSizedAxis;
-(id)initWithVisualStyle:(id)arg0 ;
-(struct CGRect )_stackViewFrameForViewBounds:(struct CGRect )arg0 ;
-(struct CGRect )_viewBoundsForStackViewFrame:(struct CGRect )arg0 ;
-(struct CGSize )_systemLayoutSizeFittingStackView:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_addSeparatorToStackAndMutableArray:(id)arg0 preferSectionStyle:(BOOL)arg1 ;
-(void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg0 ;
-(void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg0 ;
-(void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg0 ;
-(void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg0 ;
-(void)_reloadContentDistributionConstraintsForArrangedContentViews;
-(void)_reloadStackViewArrangement;
-(void)_setLayoutDebuggingIdentifier:(id)arg0 ;
-(void)_setRoundedCornersOfView:(id)arg0 toCornerPosition:(NSUInteger)arg1 ;
-(void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;
-(void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
-(void)_updateRoundedCornerPositionForActionRepViews;
-(void)_updateSeparatorConstantSizedAxis;
-(void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(id)arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)reloadDisplayedContentVisualStyle;
-(void)updateConstraints;


@end


#endif