// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBASPCOVERVIEW_H
#define UIKBASPCOVERVIEW_H

@class CAGradientLayer;


#import "UIView.h"

@interface UIKBASPCoverView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer


+(id)ASPCoverView:(BOOL)arg0 withFrame:(struct CGRect )arg1 isRightToLeft:(BOOL)arg2 withTextWidth:(CGFloat)arg3 ;
+(id)ASPCoverViewColor;
-(id)initCoverBackgroundViewWithFrame:(struct CGRect )arg0 isRightToLeft:(BOOL)arg1 ;
-(id)initCoverViewWithFrame:(struct CGRect )arg0 isRightToLeft:(BOOL)arg1 withTextWidth:(CGFloat)arg2 ;
-(void)layoutSubviews;


@end


#endif