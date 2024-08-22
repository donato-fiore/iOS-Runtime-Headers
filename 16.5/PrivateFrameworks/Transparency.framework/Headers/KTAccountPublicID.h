// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTACCOUNTPUBLICID_H
#define KTACCOUNTPUBLICID_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTAccountPublicID : NSObject <NSCopying, NSSecureCoding>

 {
    *_PCSPublicIdentityData _publicIdentity;
}


@property (readonly) NSString *ktStorageString;
@property (readonly) NSString *publicAccountIdentity;
@property (readonly) NSString *publicAccountPKI;
@property (retain) NSString *publicID; // ivar: _publicID
@property (readonly) NSData *publicKeyInfo;


+(BOOL)supportsSecureCoding;
+(id)encodePublicKeyInfoDigestSuffix:(id)arg0 ;
+(id)ktAccountPublicIDWithPKIString:(id)arg0 error:(*id)arg1 ;
+(id)ktAccountPublicIDWithPublicKeyInfo:(id)arg0 error:(*id)arg1 ;
+(id)ktAccountPublicIDWithStorageString:(id)arg0 error:(*id)arg1 ;
+(id)ktAccountPublicIDWithString:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPublicKeyIdentity:(id)arg0 error:(*id)arg1 ;
-(id)initWithPublicKeyInfo:(id)arg0 error:(*id)arg1 ;
-(id)initWithStorageString:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif