// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKAPRESENCEMEMBERSHIPKEY_H
#define SKAPRESENCEMEMBERSHIPKEY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SKAPresenceMembershipKey : NSObject

@property (nonatomic) *__SecKey privateKey; // ivar: _privateKey
@property (readonly, nonatomic) NSData *privateKeyMaterial;
@property (readonly, nonatomic) NSData *publicKeyMaterial;


+(id)logger;
-(BOOL)_generateKey;
-(BOOL)_generateKeyFromKeyData:(id)arg0 ;
-(id)initWithNewKeyMaterial;
-(id)initWithPrivateKeyMaterial:(id)arg0 ;
-(id)signPayload:(id)arg0 ;


@end


#endif