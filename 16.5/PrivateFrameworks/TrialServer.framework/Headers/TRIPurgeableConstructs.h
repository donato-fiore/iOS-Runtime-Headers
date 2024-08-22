// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPURGEABLECONSTRUCTS_H
#define TRIPURGEABLECONSTRUCTS_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface TRIPurgeableConstructs : NSObject

@property (readonly) NSMutableDictionary *cacheDeleteableFactorsByNamespaceName; // ivar: _cacheDeleteableFactorsByNamespaceName
@property (readonly) NSMutableDictionary *eagerPurgeableFactorsByNamespaceName; // ivar: _eagerPurgeableFactorsByNamespaceName
@property (readonly) NSMutableSet *namespaceNamesPurgeableAtNamespaceLevel; // ivar: _namespaceNamesPurgeableAtNamespaceLevel


-(id)initWithPurgeabilityLevel:(int)arg0 purgeableNamespacesProvider:(id)arg1 paths:(id)arg2 ;


@end


#endif