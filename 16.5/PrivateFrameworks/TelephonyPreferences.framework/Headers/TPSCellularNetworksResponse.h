// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCELLULARNETWORKSRESPONSE_H
#define TPSCELLULARNETWORKSRESPONSE_H

@class NSArray;


#import "TPSResponse.h"

@interface TPSCellularNetworksResponse : TPSResponse

@property (readonly, copy, nonatomic) NSArray *cellularNetworks; // ivar: _cellularNetworks


+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 error:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg0 error:(id)arg1 cellularNetworks:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif