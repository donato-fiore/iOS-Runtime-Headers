// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCCREATEZONEANDSUBSCRIBEOPERATION_H
#define BRCCREATEZONEANDSUBSCRIBEOPERATION_H

@class BRCOperation, CKRecordZoneID, CKRecordZone, NSString;
@protocol BRCOperationSubclass;



@interface BRCCreateZoneAndSubscribeOperation : BRCOperation <BRCOperationSubclass>

 {
    CKRecordZoneID *_zoneID;
}


@property (copy, nonatomic) id *createZoneAndSubscribeCompletionBlock; // ivar: _createZoneAndSubscribeCompletionBlock
@property (readonly, nonatomic) CKRecordZone *createdZone; // ivar: _createdZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL optimisticSubscribe; // ivar: _optimisticSubscribe
@property (nonatomic) BOOL subscriptionOnly; // ivar: _subscriptionOnly
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithServerZone:(id)arg0 ;
-(id)initWithSession:(id)arg0 zoneID:(id)arg1 ;
-(void)_createZoneWithZoneID:(id)arg0 ;
-(void)_registerSubscriptionForZoneID:(id)arg0 isOptimisticSubscribe:(BOOL)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif