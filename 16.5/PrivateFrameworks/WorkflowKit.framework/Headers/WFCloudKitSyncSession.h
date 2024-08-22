// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCLOUDKITSYNCSESSION_H
#define WFCLOUDKITSYNCSESSION_H


#import <Foundation/Foundation.h>


@interface WFCloudKitSyncSession : NSObject



+(BOOL)ignoresUserDeletedZoneErrors;
+(BOOL)isSyncEnabled;
+(BOOL)isWalrusEnabled;
+(BOOL)isWalrusForcedEnabled;
+(BOOL)needsDefaultShortcutUpdate;
+(BOOL)voiceShortcutMigrationDidRun;
+(BOOL)voiceShortcutMigrationDidSync;
+(BOOL)zoneWasPurged;
+(NSInteger)currentDefaultShortcutsVersion;
+(NSInteger)defaultShortcutsVersion;
+(NSInteger)lastSyncedFlagsHash;
+(NSInteger)syncedFlagsHash;
+(void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(id)arg0 ;
+(void)initialize;
+(void)resolveWalrusStatus;
+(void)setDefaultShortcutsVersion:(NSInteger)arg0 ;
+(void)setIgnoresUserDeletedZoneErrors:(BOOL)arg0 ;
+(void)setLastSyncedFlagsHash:(NSInteger)arg0 ;
+(void)setSyncEnabled:(BOOL)arg0 ;
+(void)setVoiceShortcutMigrationDidRun:(BOOL)arg0 ;
+(void)setVoiceShortcutMigrationDidSync:(BOOL)arg0 ;
+(void)setWalrusEnabled:(BOOL)arg0 ;
+(void)setWalrusForcedEnabled:(BOOL)arg0 ;
+(void)setZoneWasPurged:(BOOL)arg0 ;
-(id)applyConflictResolution:(id)arg0 inDatabase:(id)arg1 ;


@end


#endif