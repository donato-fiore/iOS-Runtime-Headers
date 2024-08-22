// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCALLINGLINEIDRESTRICTIONRESPONSE_H
#define TPSCALLINGLINEIDRESTRICTIONRESPONSE_H



#import "TPSResponse.h"

@interface TPSCallingLineIdRestrictionResponse : TPSResponse

@property (readonly, nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (readonly, nonatomic) NSInteger state; // ivar: _state


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
-(id)initWithsubscriptionContext:(id)arg0 editable:(BOOL)arg1 state:(NSInteger)arg2 error:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif