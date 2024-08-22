// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCROLLVIEWSCROLLINDICATORFALLBACKVISUALSTYLE_H
#define _UISCROLLVIEWSCROLLINDICATORFALLBACKVISUALSTYLE_H

@protocol _UIScrollViewScrollIndicatorVisualStyle;

#import <Foundation/Foundation.h>


@interface _UIScrollViewScrollIndicatorFallbackVisualStyle : NSObject <_UIScrollViewScrollIndicatorVisualStyle>



@property (readonly, nonatomic) BOOL clipsToBounds;
@property (readonly, nonatomic) UIEdgeInsets cursorHitTestingInsets;
@property (readonly, nonatomic) CGFloat staticDimensionExpandedSize;
@property (readonly, nonatomic) CGFloat staticDimensionSize;


-(CGFloat)fillViewCornerRadiusForStaticDimensionSize:(CGFloat)arg0 ;
-(id)colorForIndicatorStyle:(NSInteger)arg0 expanded:(BOOL)arg1 ;
-(id)fillView;
-(id)fillViewRoundedCornerCurve;
-(struct ? )valuesForLayoutSizeAnimationWhenExpanding:(BOOL)arg0 ;
-(struct CGRect )hitTestingRectForIndicatorRect:(struct CGRect )arg0 ;


@end


#endif