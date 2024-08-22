// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSURLBAGCONTEXT_H
#define SSURLBAGCONTEXT_H

@class NSMutableDictionary, NSLock, NSDictionary, NSString, NSData, NSNumber;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying>

 {
    NSMutableDictionary *_httpHeaders;
    NSLock *_lock;
}


@property (copy, nonatomic) NSDictionary *allHTTPHeaders;
@property (nonatomic) NSInteger allowedRetryCount; // ivar: _allowedRetryCount
@property (nonatomic) BOOL allowsBootstrapCellularData; // ivar: _allowsBootstrapCellularData
@property (nonatomic) BOOL allowsExpiredBags; // ivar: _allowsExpiredBags
@property (nonatomic) NSInteger bagType; // ivar: _bagType
@property (readonly, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSData *clientAuditTokenData; // ivar: _clientAuditTokenData
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresCaches; // ivar: _ignoresCaches
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *userIdentifier; // ivar: _userIdentifier
@property (nonatomic) BOOL usesCachedBagsOnly; // ivar: _usesCachedBagsOnly


+(id)contextWithBagType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForHTTPHeaderField:(id)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;


@end


#endif