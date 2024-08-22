// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIROLLOUTALLOCATIONSTATUS_H
#define TRIROLLOUTALLOCATIONSTATUS_H

@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIRolloutAllocationStatus : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSDictionary *factorPackIds; // ivar: _factorPackIds
@property (readonly, nonatomic) NSString *rampId; // ivar: _rampId
@property (readonly, nonatomic) NSString *rolloutId; // ivar: _rolloutId


+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRolloutId:(id)arg0 deploymentId:(int)arg1 rampId:(id)arg2 factorPackIds:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif