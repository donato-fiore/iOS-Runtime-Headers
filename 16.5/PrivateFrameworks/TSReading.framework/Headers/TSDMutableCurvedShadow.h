// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMUTABLECURVEDSHADOW_H
#define TSDMUTABLECURVEDSHADOW_H

@class TSUColor;


#import "TSDCurvedShadow.h"

@interface TSDMutableCurvedShadow : TSDCurvedShadow

@property (nonatomic) TSUColor *TSUColor;
@property (nonatomic) CGFloat angle;
@property (nonatomic) *CGColor color;
@property (nonatomic) CGFloat curve;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) CGFloat offset;
@property (nonatomic) CGFloat opacity;
@property (nonatomic) CGFloat radius;




@end


#endif