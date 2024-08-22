// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARCELLULARSIGNALVIEW_H
#define _UISTATUSBARCELLULARSIGNALVIEW_H

@class UIStatusBarSignalView;


#import "_UIStatusBarCycleAnimation.h"

@interface _UIStatusBarCellularSignalView : UIStatusBarSignalView

@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation; // ivar: _cycleAnimation
@property (nonatomic) BOOL needsCycleAnimationUpdate; // ivar: _needsCycleAnimationUpdate
@property (nonatomic) BOOL needsLargerScale; // ivar: _needsLargerScale


+(CGFloat)_barCornerRadiusForIconSize:(NSInteger)arg0 ;
+(CGFloat)_barWidthForIconSize:(NSInteger)arg0 ;
+(CGFloat)_heightForNormalBarAtIndex:(NSInteger)arg0 iconSize:(NSInteger)arg1 ;
+(CGFloat)_interspaceForIconSize:(NSInteger)arg0 ;
+(struct CGSize )_intrinsicContentSizeForNumberOfBars:(NSInteger)arg0 iconSize:(NSInteger)arg1 ;
-(CGFloat)_heightForBarAtIndex:(NSInteger)arg0 ;
-(CGFloat)_heightForBarAtIndex:(NSInteger)arg0 mode:(NSInteger)arg1 ;
-(id)accessibilityHUDRepresentation;
-(struct CGSize )intrinsicContentSize;
-(void)_colorsDidChange;
-(void)_iconSizeDidChange;
-(void)_setNeedsUpdateCycleAnimation;
-(void)_updateActiveBars;
-(void)_updateBars;
-(void)_updateCycleAnimationIfNeeded;
-(void)_updateCycleAnimationNow;
-(void)_updateFromMode:(NSInteger)arg0 ;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif