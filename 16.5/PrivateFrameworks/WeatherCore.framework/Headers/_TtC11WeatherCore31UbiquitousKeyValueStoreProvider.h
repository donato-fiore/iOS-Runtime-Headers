// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERCORE31UBIQUITOUSKEYVALUESTOREPROVIDER_H
#define _TTC11WEATHERCORE31UBIQUITOUSKEYVALUESTOREPROVIDER_H

@class SwiftObject;



@interface _TtC11WeatherCore31UbiquitousKeyValueStoreProvider : SwiftObject {
    ? lock;
    ? lazyMigrator;
    ? lazyEncryptedStore;
    ? lazyUnencryptedStore;
    ? activeStoreState;
    ? observers;
    ? notifyQueue;
    ? activityQueue;
    ? iCloudStatusProvider;
}




-(void)handleLocationsChangedExternally:(id)arg0 ;
-(void)migrateToEncryptedStoreIfNeededAndHandleLocationsChangedExternally:(id)arg0 ;


@end


#endif