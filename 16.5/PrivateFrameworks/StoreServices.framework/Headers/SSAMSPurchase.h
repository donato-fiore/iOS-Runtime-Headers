// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSAMSPURCHASE_H
#define SSAMSPURCHASE_H

@class AMSPurchase, NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;



@interface SSAMSPurchase : AMSPurchase <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (nonatomic, getter=isPreauthenticated) BOOL preauthenticated; // ivar: _preauthenticated


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPurchase:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif