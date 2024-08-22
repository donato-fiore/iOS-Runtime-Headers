// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUIDATACLASSHELPER_H
#define ICQUIDATACLASSHELPER_H


#import <Foundation/Foundation.h>


@interface ICQUIDataclassHelper : NSObject



+(BOOL)_isPhotosDataclass:(id)arg0 ;
+(id)dataclassesToEnableForAccount:(id)arg0 excludedApps:(id)arg1 ;
+(id)footerTextForSyncWithiCloudSpecifiersFromDataclasses:(id)arg0 forAccount:(id)arg1 ;
+(id)iconForDataclass:(id)arg0 ;
+(id)localizedTextForDataclass:(id)arg0 ;
+(id)unsyncedDataclassesExcludingPhotosForAccount:(id)arg0 ;


@end


#endif