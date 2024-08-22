// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAPEOPLEDENSITYRESULT_H
#define TAPEOPLEDENSITYRESULT_H

@class NSDictionary, NSDate, NSString, NSDateInterval;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>


@interface TAPeopleDensityResult : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, copy, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDateInterval *observationInterval; // ivar: _observationInterval
@property (readonly, nonatomic) NSInteger peopleDensityState; // ivar: _peopleDensityState
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 confidence:(CGFloat)arg1 observationInterval:(id)arg2 additionalInfo:(id)arg3 date:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif