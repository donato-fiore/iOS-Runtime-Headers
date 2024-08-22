// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCALLWAITINGRESPONSE_H
#define TPSCALLWAITINGRESPONSE_H



#import "TPSResponse.h"

@interface TPSCallWaitingResponse : TPSResponse

@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled


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
-(id)initWithsubscriptionContext:(id)arg0 error:(id)arg1 enabled:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif