// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCMIGRATEZONEPCSOPERATION_H
#define BRCMIGRATEZONEPCSOPERATION_H

@class BRCOperation, NSMutableArray, NSString;
@protocol BRCOperationSubclass;



@interface BRCMigrateZonePCSOperation : BRCOperation <BRCOperationSubclass>

 {
    NSMutableArray *_interestingZoneIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(void)_createCloudDocsZone:(id)arg0 ;
-(void)_fetchZonesNeedingMigration:(id)arg0 ;
-(void)main;


@end


#endif