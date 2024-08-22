// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSADEVVALUE_H
#define TSADEVVALUE_H


#import <Foundation/Foundation.h>


@interface TSADEVValue : NSObject

@property (readonly, nonatomic) CGFloat adev; // ivar: _adev
@property (readonly, nonatomic) CGFloat observationInterval; // ivar: _observationInterval


-(id)description;
-(id)initWithObservationInterval:(CGFloat)arg0 andADEV:(CGFloat)arg1 ;


@end


#endif