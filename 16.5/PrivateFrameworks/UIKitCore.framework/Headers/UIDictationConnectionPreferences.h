// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONCONNECTIONPREFERENCES_H
#define UIDICTATIONCONNECTIONPREFERENCES_H

@class AFPreferences;

#import <Foundation/Foundation.h>


@interface UIDictationConnectionPreferences : NSObject

@property (retain, nonatomic) AFPreferences *afPreferences; // ivar: _afPreferences


+(id)sharedInstance;
-(BOOL)dictationIsEnabled;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(BOOL)isOnDeviceDictationSupportAvailableForLanguage:(id)arg0 ;
-(BOOL)isOnDeviceDictationSupportMissingAssetForLanguage:(id)arg0 ;
-(BOOL)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:(id)arg0 ;
-(BOOL)isSmartLanguageSelectionEnabled;
-(BOOL)suppressDataSharingOptIn;
-(BOOL)suppressDictationOptIn;
-(NSInteger)dataSharingOptInStatus;
-(id)dictationSLSEnabledLanguages;
-(id)getOfflineDictationStatusForLanguage:(id)arg0 ;
-(id)initSingleton;
-(id)languageCode;
-(id)manualEndpointingThreshold;
-(void)afPreferencesChanged:(id)arg0 ;


@end


#endif