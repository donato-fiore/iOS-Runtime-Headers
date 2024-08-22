// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCLOUDKITFOLDER_H
#define WFCLOUDKITFOLDER_H

@class NSString, CKRecordID, NSData;
@protocol WFCloudKitItem, WFCloudKitWalrusSupporting;

#import <Foundation/Foundation.h>


@interface WFCloudKitFolder : NSObject <WFCloudKitItem, WFCloudKitWalrusSupporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger encryptedSchemaVersion; // ivar: _encryptedSchemaVersion
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short icon; // ivar: _icon
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSData *recordSystemFieldsData; // ivar: _recordSystemFieldsData
@property (readonly) Class superclass;


+(BOOL)isFolderRecordID:(id)arg0 ;
+(NSInteger)latestEncryptedSchemaVersion;
+(id)collectionIdentifierForRecordID:(id)arg0 ;
+(id)encryptedNameProperty;
+(id)properties;
+(id)recordIDWithZoneID:(id)arg0 collectionIdentifier:(id)arg1 ;
+(id)recordType;
-(id)initWithCollectionRecord:(id)arg0 identifier:(id)arg1 ;


@end


#endif