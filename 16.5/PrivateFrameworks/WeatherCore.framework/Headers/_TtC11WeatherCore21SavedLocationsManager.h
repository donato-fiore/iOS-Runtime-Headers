// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERCORE21SAVEDLOCATIONSMANAGER_H
#define _TTC11WEATHERCORE21SAVEDLOCATIONSMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC11WeatherCore21SavedLocationsManager : NSObject {
    ? savedLocations;
    ? locationDataModels;
    ? syncedDataManager;
    ? localKeyValueStore;
    ? keyValueStoreProvider;
    ? locationsReconciler;
    ? savedLocationsReader;
    ? coherenceMigrator;
    ? nanoSyncManager;
    ? locationMetadataManager;
    ? observers;
    ? lock;
    ? notifyQueue;
    ? $__lazy_storage_$_useCoherence;
    ? $__lazy_storage_$_forceRemoveLocalCoherenceContainer;
    ? $__lazy_storage_$_forceMigrateToCoherence;
    ? testConfigurable;
    ? nanoSyncTask;
}




-(id)init;
-(void)dealloc;


@end


#endif