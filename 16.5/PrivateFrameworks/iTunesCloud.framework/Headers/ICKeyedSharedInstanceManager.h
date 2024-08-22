// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICKEYEDSHAREDINSTANCEMANAGER_H
#define ICKEYEDSHAREDINSTANCEMANAGER_H

@class NSMutableDictionary, NSMapTable;

#import <Foundation/Foundation.h>


@interface ICKeyedSharedInstanceManager : NSObject {
    os_unfair_lock_s _lock;
    id *_instantiationHandler;
    NSMutableDictionary *_stronglyHeldSharedInstances;
    NSMapTable *_weaklyHeldSharedInstances;
    NSMutableDictionary *_usageCounts;
}




-(id)initWithInstantiationHandler:(id)arg0 ;
-(id)sharedInstanceForKey:(id)arg0 ;
-(void)decrementUsageCountForKey:(id)arg0 ;
-(void)incrementUsageCountForKey:(id)arg0 ;


@end


#endif