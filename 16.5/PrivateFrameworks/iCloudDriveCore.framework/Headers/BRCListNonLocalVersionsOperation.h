// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCLISTNONLOCALVERSIONSOPERATION_H
#define BRCLISTNONLOCALVERSIONSOPERATION_H

@class BRCOperation, NSString, CKRecordID;
@protocol BRCOperationSubclass;


#import "BRCLocalVersion.h"
#import "BRCLocalItem.h"
#import "BRCNotification.h"
#import "BRCServerZone.h"

@interface BRCListNonLocalVersionsOperation : BRCOperation <BRCOperationSubclass>



@property (retain, nonatomic) BRCLocalVersion *currentVersion; // ivar: _currentVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BRCLocalItem *item; // ivar: _item
@property (retain, nonatomic) BRCNotification *notification; // ivar: _notification
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) BRCServerZone *serverZone; // ivar: _serverZone
@property (retain, nonatomic) CKRecordID *shareID; // ivar: _shareID
@property (readonly) Class superclass;


-(id)createActivity;
-(id)initWithDocumentItem:(id)arg0 ;
-(void)main;


@end


#endif