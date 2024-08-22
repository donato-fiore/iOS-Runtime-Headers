// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFTOUCHPASSTHROUGHCLIPPINGVIEW_H
#define SBFTOUCHPASSTHROUGHCLIPPINGVIEW_H



#import "SBFTouchPassThroughView.h"
#import "_SBFActualClippingView.h"

@interface SBFTouchPassThroughClippingView : SBFTouchPassThroughView

@property (nonatomic, getter=isContentClippingEnabled) BOOL contentClippingEnabled; // ivar: _contentClippingEnabled
@property (nonatomic) CGRect contentClippingFrame; // ivar: _contentClippingFrame
@property (retain, nonatomic) _SBFActualClippingView *contentClippingView; // ivar: _contentClippingView
@property (nonatomic) CGFloat contentCornerRadius; // ivar: _contentCornerRadius
@property (nonatomic) BOOL hitTestsSubviewsOutsideBounds; // ivar: _hitTestsSubviewsOutsideBounds


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutContentClippingView;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)addSubview:(id)arg0 ;
-(void)bringSubviewToFront:(id)arg0 ;
-(void)insertSubview:(id)arg0 aboveSubview:(id)arg1 ;
-(void)insertSubview:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertSubview:(id)arg0 belowSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)sendSubviewToBack:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;


@end


#endif