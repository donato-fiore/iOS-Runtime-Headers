// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUSAGECONTROLLER_H
#define ICQUSAGECONTROLLER_H

@class PSListController, NSMutableArray, PSSpecifier;


#import "ICQCloudStorageGroupController.h"

@interface ICQUsageController : PSListController {
    ICQCloudStorageGroupController *_cloudGroup;
    NSMutableArray *_storageSpecifiers;
    PSSpecifier *_storageUsedSpecifier;
    PSSpecifier *_storageAvailableSpecifier;
}




-(id)specifiers;
-(id)usageStorageSpecifiers;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif