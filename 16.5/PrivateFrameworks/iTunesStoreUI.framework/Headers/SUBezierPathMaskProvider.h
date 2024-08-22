// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUBEZIERPATHMASKPROVIDER_H
#define SUBEZIERPATHMASKPROVIDER_H

@class UIBezierPath;


#import "SUMaskProvider.h"

@interface SUBezierPathMaskProvider : SUMaskProvider

@property (retain, nonatomic) UIBezierPath *bezierPath; // ivar: _bezierPath


-(struct CGPath *)copyPathForMaskWithSize:(struct CGSize )arg0 ;
-(void)dealloc;


@end


#endif