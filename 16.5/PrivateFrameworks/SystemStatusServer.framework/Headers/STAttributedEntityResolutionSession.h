// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STATTRIBUTEDENTITYRESOLUTIONSESSION_H
#define STATTRIBUTEDENTITYRESOLUTIONSESSION_H

@class NSArray;
@protocol STAttributedEntityBatchResolving, STAttributedEntityResolving, STExecutableIdentityBatchResolving;

#import <Foundation/Foundation.h>

#import "STReferenceCountedCache.h"

@interface STAttributedEntityResolutionSession : NSObject <STAttributedEntityBatchResolving>

 {
    BOOL _invalidated;
    id<STAttributedEntityResolving> *_entityResolver;
    id<STExecutableIdentityBatchResolving> *_identityResolver;
    STReferenceCountedCache *_cache;
    NSArray *_cachedEntities;
}




-(id)initWithEntityResolver:(id)arg0 identityResolver:(id)arg1 cache:(id)arg2 ;
-(id)resolveEntity:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)resolveEntities:(id)arg0 ;


@end


#endif