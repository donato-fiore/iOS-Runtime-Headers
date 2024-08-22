// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTGRIDDURATIONVALUE_H
#define TSCHCHARTGRIDDURATIONVALUE_H

@class NSString;
@protocol TSCHChartGridValue;

#import <Foundation/Foundation.h>


@interface TSCHChartGridDurationValue : NSObject <TSCHChartGridValue>

 {
    CGFloat _duration;
}


@property (readonly, nonatomic) int chartGridValueType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)durationValueWithDouble:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDouble:(CGFloat)arg0 ;


@end


#endif