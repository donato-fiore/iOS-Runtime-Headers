// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCLOUDKITAUTOSHORTCUTSPREFERENCES_H
#define WFCLOUDKITAUTOSHORTCUTSPREFERENCES_H

@class INAppDescriptor, WFFileRepresentation, NSString, NSSet, CKRecordID, NSData;
@protocol WFCloudKitItem;

#import <Foundation/Foundation.h>


@interface WFCloudKitAutoShortcutsPreferences : NSObject <WFCloudKitItem>



@property (retain, nonatomic) INAppDescriptor *appDescriptor; // ivar: _appDescriptor
@property (retain, nonatomic) WFFileRepresentation *appDescriptorFileRepresentation; // ivar: _appDescriptorFileRepresentation
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *disabledAutoShortcuts; // ivar: _disabledAutoShortcuts
@property (retain, nonatomic) WFFileRepresentation *disabledAutoShortcutsFileRepresentation; // ivar: _disabledAutoShortcutsFileRepresentation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isSiriEnabled; // ivar: _isSiriEnabled
@property (nonatomic) BOOL isSpotlightEnabled; // ivar: _isSpotlightEnabled
@property (copy, nonatomic) NSData *recordSystemFieldsData; // ivar: _recordSystemFieldsData
@property (readonly) Class superclass;


+(BOOL)isAutoShortcutsPreferencesRecordID:(id)arg0 ;
+(id)identifierForRecordID:(id)arg0 ;
+(id)properties;
+(id)recordIDWithZoneID:(id)arg0 identifier:(id)arg1 ;
+(id)recordType;
-(id)dataFromObject:(id)arg0 error:(*id)arg1 ;
-(id)fileRepresentationFromObject:(id)arg0 ;
-(id)fileRepresentations;
-(id)initWithAutoShortcutsPreferences:(id)arg0 identifier:(id)arg1 ;


@end


#endif