// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STEXECUTABLEIDENTITYRESOLUTIONSESSION_H
#define STEXECUTABLEIDENTITYRESOLUTIONSESSION_H

@class NSArray;
@protocol STExecutableIdentityBatchResolving, STExecutableIdentityResolving;

#import <Foundation/Foundation.h>

#import "STReferenceCountedCache.h"

@interface STExecutableIdentityResolutionSession : NSObject <STExecutableIdentityBatchResolving>

 {
    BOOL _invalidated;
    id<STExecutableIdentityResolving> *_resolver;
    STReferenceCountedCache *_cache;
    NSArray *_cachedIdentities;
}




-(id)initWithResolver:(id)arg0 cache:(id)arg1 ;
-(id)resolvedIdentityForIdentity:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)resolveIdentities:(id)arg0 ;


@end


#endif