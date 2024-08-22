// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMETRICSUBMITTER_H
#define VCMETRICSUBMITTER_H

@class WFMetricStatusEvent;
@protocol WFDatabaseProvider;

#import <Foundation/Foundation.h>

#import "VCMetricCheckIn.h"

@interface VCMetricSubmitter : NSObject

@property (readonly, nonatomic) VCMetricCheckIn *checkIn; // ivar: _checkIn
@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, nonatomic) WFMetricStatusEvent *event; // ivar: _event


+(id)activityIdentifier;
+(void)performWithDatabaseProvider:(id)arg0 ;
+(void)scheduleWithDatabaseProvider:(id)arg0 ;
+(void)scheduleWithScheduler:(id)arg0 databaseProvider:(id)arg1 ;
-(BOOL)addWidgetMetricsToEvent:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasSeenAutoShortcutsSections;
-(BOOL)homeAutomationsPresent:(*id)arg0 ;
-(BOOL)isAppInstalled;
-(BOOL)isSharingEnabled;
-(BOOL)isSleepEnabled;
-(BOOL)personalAutomationsPresent:(id)arg0 ;
-(id)initWithCheckIn:(id)arg0 event:(id)arg1 databaseProvider:(id)arg2 ;
-(id)initWithDatabaseProvider:(id)arg0 ;
-(unsigned int)averageShortcutCountPerFolder:(id)arg0 ;
-(unsigned int)folderCount:(id)arg0 ;
-(unsigned int)numberOfAppSessions:(*id)arg0 ;
-(unsigned int)numberOfPersonalAutomationsEnabled:(id)arg0 ;
-(unsigned int)numberOfShortcutRuns:(id)arg0 ;
-(unsigned int)shortcutsCount:(id)arg0 ;
-(unsigned int)sleepShortcutCount:(id)arg0 ;
-(unsigned int)uncategorizedShortcutCount:(id)arg0 ;
-(unsigned int)watchShortcutCount:(id)arg0 ;
-(void)perform;


@end


#endif