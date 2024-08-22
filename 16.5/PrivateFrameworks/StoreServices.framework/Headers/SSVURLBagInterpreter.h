// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVURLBAGINTERPRETER_H
#define SSVURLBAGINTERPRETER_H

@class NSMutableDictionary, NSArray, NSURL, NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SSVSAPSignaturePolicy.h"

@interface SSVURLBagInterpreter : NSObject <NSCopying>

 {
    NSMutableDictionary *_cachedBagValues;
    NSArray *_subscriptionSignedActions;
    SSVSAPSignaturePolicy *_subscriptionSignaturePolicy;
}


@property (readonly, copy, nonatomic) NSArray *AMDDomains;
@property (readonly, copy, nonatomic) NSURL *mescalCertificateURL;
@property (readonly, copy, nonatomic) NSURL *mescalPrimingURL; // ivar: _mescalPrimingURL
@property (readonly, copy, nonatomic) NSURL *mescalSetupURL;
@property (readonly, copy, nonatomic) NSDictionary *mescalSignedActions;
@property (readonly, copy, nonatomic) NSDictionary *mescalSignedRequests;
@property (readonly, copy, nonatomic) NSDictionary *mescalSignedResponses;
@property (readonly, copy, nonatomic) NSURL *pastisCertificateURL;
@property (readonly, copy, nonatomic) NSURL *pastisKeyServerURL;
@property (readonly, copy, nonatomic) NSString *storeFrontSuffix;


-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg0 ;
-(id)URLForURLBagKey:(id)arg0 ;
-(id)_valueForKey:(id)arg0 withClass:(Class)arg1 ;
-(id)cachedValueFromBag:(id)arg0 key:(id)arg1 withType:(NSUInteger)arg2 updateCache:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSSBag:(id)arg0 ;
-(id)initWithURLBag:(id)arg0 ;
-(id)initWithURLBagDictionary:(id)arg0 ;
-(id)mescalSignaturePolicyForRequestURL:(id)arg0 ;
-(id)mescalSignaturePolicyForResponseURL:(id)arg0 ;
-(id)valueForURLBagKey:(id)arg0 ;


@end


#endif