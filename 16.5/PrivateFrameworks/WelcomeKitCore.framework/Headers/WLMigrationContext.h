// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLMIGRATIONCONTEXT_H
#define WLMIGRATIONCONTEXT_H

@class NSArray, NSDate, NSMutableArray, WLPayload, WLSourceDevice;
@protocol WLMigrationDataSource, WLDataMigrationDelegate;

#import <Foundation/Foundation.h>

#import "WLStatistics.h"
#import "WLMigrationDataCoordinator.h"
#import "WLSourceDeviceMigrationMetadata.h"
#import "WLSQLController.h"
#import "WLTimeEstimateAccuracyTracker.h"
#import "WLURLSessionController.h"

@interface WLMigrationContext : NSObject

@property (retain, nonatomic) WLStatistics *aggregateStatistics; // ivar: _aggregateStatistics
@property (nonatomic) NSUInteger completedDownloadSegmentCount; // ivar: _completedDownloadSegmentCount
@property (retain, nonatomic) WLMigrationDataCoordinator *dataCoordinator; // ivar: _dataCoordinator
@property (retain, nonatomic) NSObject<WLMigrationDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSObject<WLDataMigrationDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger expectedDownloadBytesRemainingForItemsWithConcreteSizes; // ivar: _expectedDownloadBytesRemainingForItemsWithConcreteSizes
@property (nonatomic) NSUInteger expectedDownloadSegmentsRemaining; // ivar: _expectedDownloadSegmentsRemaining
@property (nonatomic) NSUInteger expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes; // ivar: _expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes
@property (retain, nonatomic) NSArray *importErrors; // ivar: _importErrors
@property (retain, nonatomic) NSDate *lastProgressSentDate; // ivar: _lastProgressSentDate
@property (nonatomic) CGFloat lastProgressSentToAndroidDevice; // ivar: _lastProgressSentToAndroidDevice
@property (retain, nonatomic) WLSourceDeviceMigrationMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSMutableArray *migrators; // ivar: _migrators
@property (retain, nonatomic) WLPayload *payload; // ivar: _payload
@property (nonatomic) *void powerAssertion; // ivar: _powerAssertion
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) WLSourceDevice *sourceDevice; // ivar: _sourceDevice
@property (retain, nonatomic) WLSQLController *sqlController; // ivar: _sqlController
@property (nonatomic) NSUInteger throughputBytesInCurrentPeriod; // ivar: _throughputBytesInCurrentPeriod
@property (retain, nonatomic) NSMutableArray *throughputSamples; // ivar: _throughputSamples
@property (retain, nonatomic) NSDate *throughputSegmentStartDate; // ivar: _throughputSegmentStartDate
@property (nonatomic) NSUInteger throughputSegmentsInCurrentPeriod; // ivar: _throughputSegmentsInCurrentPeriod
@property (retain, nonatomic) WLTimeEstimateAccuracyTracker *timeEstimateAccuracyTracker; // ivar: _timeEstimateAccuracyTracker
@property (retain, nonatomic) WLURLSessionController *urlSessionController; // ivar: _urlSessionController


-(id)init;


@end


#endif