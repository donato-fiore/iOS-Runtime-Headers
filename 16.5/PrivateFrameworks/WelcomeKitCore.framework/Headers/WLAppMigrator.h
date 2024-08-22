// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLAPPMIGRATOR_H
#define WLAPPMIGRATOR_H

@class NSString, WLSourceDevice, WLFeaturePayload;
@protocol WLDataclassMigrating, WLAnalyticsDataSource;

#import <Foundation/Foundation.h>

#import "WLSQLController.h"

@interface WLAppMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WLSourceDevice *device; // ivar: _device
@property (weak, nonatomic) WLFeaturePayload *featurePayload; // ivar: _featurePayload
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WLSQLController *sqlController; // ivar: _sqlController
@property (readonly) Class superclass;


+(id)_ssItemForiTunesStoreIdentifier:(id)arg0 ;
+(id)contentType;
+(id)dataType;
+(void)_sendStoreDownloadRequestForFreeMigratableApps:(id)arg0 completion:(id)arg1 ;
+(void)installMigratableApps:(id)arg0 completion:(id)arg1 ;
-(BOOL)accountBased;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(id)contentType;
-(id)dataType;
-(id)initWithDevice:(id)arg0 sqlController:(id)arg1 ;
-(void)_insertMatchingApps:(id)arg0 ;
-(void)_lookupStoreItemsMatchingExternalIDs:(id)arg0 attempt:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)addWorkingTime:(NSUInteger)arg0 ;
-(void)enable;
-(void)estimateItemSizeForSummary:(id)arg0 account:(id)arg1 ;
// -(void)importDataFromProvider:(id)arg0 forSummaries:(unk)arg1 summaryStart:(id)arg2 summaryCompletion:(id)arg3  ;
-(void)setEstimatedDataSize:(NSUInteger)arg0 ;
-(void)setState:(id)arg0 ;


@end


#endif