// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCALLCLASSREQUEST_H
#define TPSCALLCLASSREQUEST_H



#import "TPSRequest.h"

@interface TPSCallClassRequest : TPSRequest

@property (nonatomic) int callClass; // ivar: _callClass


+(id)unarchivedObjectClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 callClass:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif