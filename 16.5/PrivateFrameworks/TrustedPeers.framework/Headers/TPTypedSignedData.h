// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPTYPEDSIGNEDDATA_H
#define TPTYPEDSIGNEDDATA_H

@class NSData, NSString;
@protocol TPPublicKey, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPTypedSignedData : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSObject<TPPublicKey> *lastSigValidationPubkey; // ivar: _lastSigValidationPubkey
@property (nonatomic) BOOL lastSigValidationResult; // ivar: _lastSigValidationResult
@property (readonly, nonatomic) NSData *sig; // ivar: _sig
@property (readonly, nonatomic) NSString *sigTypeName; // ivar: _sigTypeName
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sigValidationQueue; // ivar: _sigValidationQueue


-(BOOL)checkSignatureWithKey:(id)arg0 ;
-(id)initWithData:(id)arg0 key:(id)arg1 signatureTypeName:(id)arg2 error:(*id)arg3 ;
-(id)initWithData:(id)arg0 sig:(id)arg1 pubkey:(id)arg2 sigTypeName:(id)arg3 ;
-(id)initWithData:(id)arg0 sig:(id)arg1 signatureTypeName:(id)arg2 ;


@end


#endif