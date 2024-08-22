// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBKSTOREURLBAGCONTEXT_H
#define SBKSTOREURLBAGCONTEXT_H

@class SSURLBag, NSString, NSURL;
@protocol NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>


@interface SBKStoreURLBagContext : NSObject <NSMutableCopying, NSCopying>



@property (retain, nonatomic) SSURLBag *bag; // ivar: _bag
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL domainDisabled; // ivar: _domainDisabled
@property (nonatomic) CGFloat pollingIntervalInSeconds; // ivar: _pollingIntervalInSeconds
@property (retain, nonatomic) NSURL *pullAllKeyValueRequestURL; // ivar: _pullAllKeyValueRequestURL
@property (retain, nonatomic) NSURL *pullKeyValueRequestURL; // ivar: _pullKeyValueRequestURL
@property (retain, nonatomic) NSURL *pushAllKeyValueRequestURL; // ivar: _pushAllKeyValueRequestURL
@property (retain, nonatomic) NSURL *pushKeyValueRequestURL; // ivar: _pushKeyValueRequestURL
@property (retain, nonatomic) NSURL *syncRequestURL; // ivar: _syncRequestURL


+(id)ExtrasDomainIdentifier;
+(id)UPPDomainIdentifier;
// +(void)_findFirstValueInBag:(id)arg0 keyEnumerator:(id)arg1 valueTransformer:(id)arg2 defaultValue:(unk)arg3 completionBlock:(id)arg4  ;
+(void)enumerateRequestURLBagKeysWithBlock:(id)arg0 ;
+(void)loadBagContextFromURLBag:(id)arg0 domain:(id)arg1 completionBlock:(id)arg2 ;
-(id)_initWithDomain:(id)arg0 syncRequestURL:(id)arg1 domainDisabled:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBag:(id)arg0 domain:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif