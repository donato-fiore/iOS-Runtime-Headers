// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWZONEMEMORYSTORE_H
#define SCWZONEMEMORYSTORE_H

@class NSDate, NSArray, CKServerChangeToken;
@protocol SCWZoneStore;

#import <Foundation/Foundation.h>


@interface SCWZoneMemoryStore : NSObject <SCWZoneStore>



@property (copy, nonatomic) NSDate *lastDirtyDate; // ivar: _lastDirtyDate
@property (copy, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (copy, nonatomic) NSArray *pendingCommands; // ivar: _pendingCommands
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (copy, nonatomic) NSArray *serverRecords; // ivar: _serverRecords


-(id)init;
-(void)addPendingCommands:(id)arg0 ;
-(void)applyServerRecordsDiff:(id)arg0 ;
-(void)clearPendingCommandsUpToCount:(NSUInteger)arg0 ;


@end


#endif