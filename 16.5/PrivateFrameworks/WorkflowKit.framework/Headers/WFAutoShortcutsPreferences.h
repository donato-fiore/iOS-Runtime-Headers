// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAUTOSHORTCUTSPREFERENCES_H
#define WFAUTOSHORTCUTSPREFERENCES_H

@class INAppDescriptor, NSString, NSData, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFAutoShortcutsPreferences : NSObject <NSSecureCoding>



@property (retain, nonatomic) INAppDescriptor *appDescriptor; // ivar: _appDescriptor
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) NSData *cloudKitMetadata; // ivar: _cloudKitMetadata
@property (retain, nonatomic) NSSet *disabledAutoShortcuts; // ivar: _disabledAutoShortcuts
@property (nonatomic) BOOL isSiriEnabled; // ivar: _isSiriEnabled
@property (nonatomic) BOOL isSpotlightEnabled; // ivar: _isSpotlightEnabled
@property (nonatomic) NSInteger lastSyncedHash; // ivar: _lastSyncedHash


+(BOOL)supportsSecureCoding;
+(id)appDescriptorWithBundleIdentifier:(id)arg0 ;
+(id)defaultSettingsForAppDescriptor:(id)arg0 ;
+(int)crossPlatformHashForAppDescriptor:(id)arg0 ;
-(NSInteger)computedSyncHash;
-(id)initWithAppDescriptor:(id)arg0 isSiriEnabled:(BOOL)arg1 isSpotlightEnabled:(BOOL)arg2 disabledAutoShortcuts:(id)arg3 cloudKitMetadata:(id)arg4 ;
-(id)initWithAppDescriptor:(id)arg0 isSiriEnabled:(BOOL)arg1 isSpotlightEnabled:(BOOL)arg2 disabledAutoShortcuts:(id)arg3 cloudKitMetadata:(id)arg4 lastSyncedHash:(NSInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif