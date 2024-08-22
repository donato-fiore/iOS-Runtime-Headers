// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVCAROUSELLAYOUT_H
#define TVCAROUSELLAYOUT_H

@class NSNumber;


#import "TVViewLayout.h"

@interface TVCarouselLayout : TVViewLayout

@property (nonatomic) UIEdgeInsets cellPadding; // ivar: _cellPadding
@property (nonatomic) CGSize cellSize; // ivar: _cellSize
@property (nonatomic) CGFloat focusedEdgeExpansion; // ivar: _focusedEdgeExpansion
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (nonatomic) NSNumber *pageControlMarginNumber; // ivar: _pageControlMarginNumber
@property (nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled; // ivar: _parallaxEnabled
@property (nonatomic) CGFloat revealDistance; // ivar: _revealDistance
@property (nonatomic) NSUInteger scrollMode; // ivar: _scrollMode
@property (nonatomic) CGFloat shearAngle; // ivar: _shearAngle
@property (nonatomic) BOOL showsPageControl; // ivar: _showsPageControl


+(NSInteger)layoutTypeForElement:(id)arg0 ;
+(NSInteger)layoutTypeForString:(id)arg0 ;
+(NSUInteger)scrollModeForString:(id)arg0 ;
+(id)layoutWithLayout:(id)arg0 element:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif