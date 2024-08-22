// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STATTRIBUTEDENTITYRESOLVER_H
#define STATTRIBUTEDENTITYRESOLVER_H

@class NSArray;
@protocol STAttributedEntityResolving;

#import <Foundation/Foundation.h>

#import "STExecutableIdentityResolver.h"
#import "STReferenceCountedCache.h"

@interface STAttributedEntityResolver : NSObject <STAttributedEntityResolving>

 {
    STExecutableIdentityResolver *_identityResolver;
    STReferenceCountedCache *_cache;
}


@property (copy, nonatomic) NSArray *dynamicAttributions; // ivar: _dynamicAttributions
@property (readonly, copy, nonatomic) NSArray *preferredLocalizations; // ivar: _preferredLocalizations


-(id)beginBatchResolutionSession;
-(id)init;
-(id)initWithPreferredLocalizations:(id)arg0 ;
-(id)resolveEntity:(id)arg0 ;


@end


#endif