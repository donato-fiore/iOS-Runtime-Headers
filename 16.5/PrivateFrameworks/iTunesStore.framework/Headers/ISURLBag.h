// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISURLBAG_H
#define ISURLBAG_H

@class SSURLBagContext, SSNetworkConstraints, NSString, NSArray, NSSet, NSDictionary;

#import <Foundation/Foundation.h>

#import "ISURLBagBackend.h"

@interface ISURLBag : NSObject {
    SSURLBagContext *_context;
    SSNetworkConstraints *_defaultConstraints;
    ISURLBagBackend *_bagBackend;
    NSString *_bagBackendKey;
    NSArray *_guidPatterns;
    NSSet *_guidSchemes;
    NSDictionary *_headerPatterns;
}


@property (copy, nonatomic) SSURLBagContext *URLBagContext;
@property (readonly, nonatomic) NSDictionary *URLBagDictionary;
@property (readonly) NSSet *availableStorefrontItemKinds;
@property (nonatomic) CGFloat invalidationTime; // ivar: _invalidationTime
@property (nonatomic) BOOL loadedFromDiskCache; // ivar: _loadedFromDiskCache
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) NSInteger versionIdentifier;


+(BOOL)shouldSendGUIDForURL:(id)arg0 inBagContext:(id)arg1 ;
+(BOOL)urlIsTrusted:(id)arg0 inBagContext:(id)arg1 ;
+(id)_sharedBagBackend;
+(id)copyExtraHeadersForURL:(id)arg0 inBagContext:(id)arg1 ;
+(id)networkConstraintsForDownloadKind:(id)arg0 inBagContext:(id)arg1 ;
+(id)storeFrontURLBagKeyForItemKind:(id)arg0 ;
+(id)urlBagForContext:(id)arg0 ;
+(id)urlForKey:(id)arg0 inBagContext:(id)arg1 ;
+(id)valueForKey:(id)arg0 inBagContext:(id)arg1 ;
+(void)_loadItemKindURLBagKeyMap;
-(BOOL)loadFromDictionary:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg0 ;
-(BOOL)shouldSendGUIDForURL:(id)arg0 ;
-(BOOL)urlIsTrusted:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)URLForURL:(id)arg0 clientIdentifier:(id)arg1 ;
-(id)_copyGUIDPatternsFromBagBackend;
-(id)_copyGUIDSchemesFromBagBackend;
-(id)_copyHeaderPatternsFromBagBackend;
-(id)_networkConstraintsCachePath;
-(id)copyExtraHeadersForURL:(id)arg0 ;
-(id)init;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithRawDictionary:(id)arg0 ;
-(id)initWithURLBagContext:(id)arg0 ;
-(id)networkConstraintsForDownloadKind:(id)arg0 ;
-(id)sanitizedURLForURL:(id)arg0 ;
-(id)searchQueryParametersForClientIdentifier:(id)arg0 networkType:(NSInteger)arg1 ;
-(id)urlForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)_preprocessURLResolutionCacheDictionary:(id)arg0 ;
-(void)_setBagBackendWithDictionary:(id)arg0 ;
-(void)_toggleStopSendingLocalCookies;
-(void)_writeNetworkConstraintsCacheFile;
-(void)_writeURLResolutionCacheFile;


@end


#endif