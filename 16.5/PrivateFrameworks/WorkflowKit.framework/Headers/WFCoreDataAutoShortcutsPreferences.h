// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOREDATAAUTOSHORTCUTSPREFERENCES_H
#define WFCOREDATAAUTOSHORTCUTSPREFERENCES_H

@class NSManagedObject, NSData, NSString;



@interface WFCoreDataAutoShortcutsPreferences : NSManagedObject

@property (retain, nonatomic) NSData *appDescriptor;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) NSData *cloudKitMetadata;
@property (retain, nonatomic) NSData *disabledAutoShortcuts;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) NSInteger lastSyncedHash;
@property (nonatomic) BOOL siriEnabled;
@property (nonatomic) BOOL spotlightEnabled;


+(id)fetchRequest;


@end


#endif