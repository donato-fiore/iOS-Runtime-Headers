// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIDEFAULTFACTORPROVIDERGUARDEDDATA_H
#define TRIDEFAULTFACTORPROVIDERGUARDEDDATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TRINamespaceResolver.h"

@interface TRIDefaultFactorProviderGuardedData : NSObject {
    TRINamespaceResolver *namespaceResolver;
    NSMutableDictionary *factorProviders;
    NSMutableDictionary *containerIds;
}






@end


#endif