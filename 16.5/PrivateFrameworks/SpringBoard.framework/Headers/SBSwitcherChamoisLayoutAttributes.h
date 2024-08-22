// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERCHAMOISLAYOUTATTRIBUTES_H
#define SBSWITCHERCHAMOISLAYOUTATTRIBUTES_H

@class NSString, NSArray;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBSwitcherChamoisLayoutAttributes : NSObject <BSDescriptionProviding, NSCopying>



@property (nonatomic) CGRect containerBounds; // ivar: _containerBounds
@property (nonatomic) CGFloat containerPerspective; // ivar: _containerPerspective
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGSize defaultWindowSize; // ivar: _defaultWindowSize
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *gridHeights; // ivar: _gridHeights
@property (copy, nonatomic) NSArray *gridWidths; // ivar: _gridWidths
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumWindowHeightWithDock; // ivar: _maximumWindowHeightWithDock
@property (nonatomic) CGFloat maximumWindowWidthForOverlapping; // ivar: _maximumWindowWidthForOverlapping
@property (nonatomic) CGSize minimumDefaultWindowSize; // ivar: _minimumDefaultWindowSize
@property (nonatomic) CGFloat minimumWindowWidth; // ivar: _minimumWindowWidth
@property (nonatomic) NSUInteger numberOfRowsWhileInApp; // ivar: _numberOfRowsWhileInApp
@property (nonatomic) BOOL prefersDockHidden; // ivar: _prefersDockHidden
@property (nonatomic) BOOL prefersStripHidden; // ivar: _prefersStripHidden
@property (nonatomic) BOOL requiresFullScreen; // ivar: _requiresFullScreen
@property (nonatomic) CGFloat screenEdgePadding; // ivar: _screenEdgePadding
@property (nonatomic) CGFloat stageCornerRaddii; // ivar: _stageCornerRaddii
@property (nonatomic) CGFloat stageInterItemSpacing; // ivar: _stageInterItemSpacing
@property (nonatomic) CGFloat stageOccludedAppScale; // ivar: _stageOccludedAppScale
@property (nonatomic) CGFloat stageOcclusionDodgingPeekLength; // ivar: _stageOcclusionDodgingPeekLength
@property (nonatomic) CGFloat stageOcclusionDodgingPeekScale; // ivar: _stageOcclusionDodgingPeekScale
@property (nonatomic) CGFloat stageStatusBarClearingAppScale; // ivar: _stageStatusBarClearingAppScale
@property (nonatomic) CGFloat stripCardScale; // ivar: _stripCardScale
@property (nonatomic) CGFloat stripCornerRaddii; // ivar: _stripCornerRaddii
@property (nonatomic) CGFloat stripIconLength; // ivar: _stripIconLength
@property (nonatomic) CGFloat stripInterItemSpacing; // ivar: _stripInterItemSpacing
@property (nonatomic) CGFloat stripStackDistance; // ivar: _stripStackDistance
@property (nonatomic) CGFloat stripTiltAngle; // ivar: _stripTiltAngle
@property (nonatomic) CGFloat stripVerticalEdgeSpacing; // ivar: _stripVerticalEdgeSpacing
@property (nonatomic) CGFloat stripWidth; // ivar: _stripWidth
@property (readonly) Class superclass;
@property (nonatomic) CGFloat switcherHeightForIconAndLabelsUnderEachPile; // ivar: _switcherHeightForIconAndLabelsUnderEachPile
@property (nonatomic) CGFloat switcherHorizontalEdgeSpacing; // ivar: _switcherHorizontalEdgeSpacing
@property (nonatomic) CGFloat switcherHorizontalInterItemSpacing; // ivar: _switcherHorizontalInterItemSpacing
@property (nonatomic) CGFloat switcherPileCardMinimumPeekAmount; // ivar: _switcherPileCardMinimumPeekAmount
@property (nonatomic) CGFloat switcherPileCompactingFactor; // ivar: _switcherPileCompactingFactor
@property (nonatomic) CGFloat switcherVerticalEdgeSpacing; // ivar: _switcherVerticalEdgeSpacing
@property (nonatomic) CGFloat switcherVerticalInterItemSpacing; // ivar: _switcherVerticalInterItemSpacing
@property (nonatomic) BOOL usesStripAreaForOverlapping; // ivar: _usesStripAreaForOverlapping


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)partiallyOccludedStageScaleForItemWithSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif