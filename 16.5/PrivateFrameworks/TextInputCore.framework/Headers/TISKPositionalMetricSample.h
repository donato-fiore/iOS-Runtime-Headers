// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISKPOSITIONALMETRICSAMPLE_H
#define TISKPOSITIONALMETRICSAMPLE_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TISKPositionalMetricSample : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *positionalMetricSample; // ivar: _positionalMetricSample


+(BOOL)supportsSecureCoding;
+(id)makeMetric:(NSUInteger)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)size;
-(id)description:(BOOL)arg0 ;
-(id)generateDataForSR:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)singleMetricSample:(NSUInteger)arg0 ;
-(void)addSample:(id)arg0 withPosition:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)merge:(id)arg0 ;


@end


#endif