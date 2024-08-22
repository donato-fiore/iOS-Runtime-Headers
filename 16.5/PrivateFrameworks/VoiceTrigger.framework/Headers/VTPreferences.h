// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTPREFERENCES_H
#define VTPREFERENCES_H


#import <Foundation/Foundation.h>


@interface VTPreferences : NSObject



+(id)deviceCategoryStringRepresentationForCategoryType:(NSUInteger)arg0 ;
+(id)sharedPreferences;
-(BOOL)_gibraltarHasBuiltInMic;
-(BOOL)_isLocalVoiceTriggerAvailable;
-(BOOL)_isNonEndpointDeviceType:(NSUInteger)arg0 ;
-(BOOL)_isSATMarkedForMarker:(id)arg0 languageCode:(id)arg1 ;
-(BOOL)_storeModeEnabled;
-(BOOL)_voiceTriggerEnabledWithDeviceType:(NSUInteger)arg0 ;
-(BOOL)_voiceTriggerEnabledWithDeviceType:(NSUInteger)arg0 endpointId:(id)arg1 ;
-(BOOL)canUseVoiceTriggerDuringPhoneCall;
-(BOOL)corespeechDaemonEnabled;
-(BOOL)everNotifyUserCompactTrigger;
-(BOOL)fileLoggingIsEnabled;
-(BOOL)gestureSubscriptionEnabled;
-(BOOL)hasExplicitlySetVoiceTriggerEnabled;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg0 ;
-(BOOL)isCompactVoiceTriggerAvailableForLanguageCode:(id)arg0 ;
-(BOOL)isMphVTEnabled;
-(BOOL)isRemoteVoiceTriggerAvailable;
-(BOOL)isSATAvailable;
-(BOOL)isSATEnrolledForLanguageCode:(id)arg0 ;
-(BOOL)isSATEnrollmentMigratedForLanguageCode:(id)arg0 ;
-(BOOL)isVoiceTriggerAvailable;
-(BOOL)onetimeRemoteAssetQueryRanSuccessfully;
-(BOOL)overwritingVoiceTriggerMLock;
-(BOOL)phraseSpotterEnabled;
-(BOOL)remoteDarwinWasEverConnected;
-(BOOL)secondPassAudioLoggingEnabled;
-(BOOL)shouldOverwriteVoiceTriggerMLock;
-(BOOL)useSiriActivationSPIForiOS;
-(BOOL)useSiriActivationSPIForwatchOS;
-(BOOL)voiceTriggerEnabled;
-(BOOL)voiceTriggerEnabledForEndpointId:(id)arg0 ;
-(BOOL)voiceTriggerEnabledWhenChargerConnected;
-(BOOL)voiceTriggerEnabledWhenChargerDisconnected;
-(BOOL)voiceTriggerEnabledWithDeviceType:(NSUInteger)arg0 endpointId:(id)arg1 ;
-(BOOL)voiceTriggerInCoreSpeech;
-(BOOL)voiceTriggerWasEverUsed;
-(NSUInteger)canUseVoiceTriggerDuringPhoneCallWithState;
-(id)_VTSATBasePath;
-(id)_VTSATCachePath;
-(id)_getSATEnrollmentAudioPathForLanguageCodeForLegacyVoiceProfile:(id)arg0 ;
-(id)_getVoiceTriggerEnabledDidChangeNotificationStringWithDeviceType:(NSUInteger)arg0 ;
-(id)_getVoiceTriggerEnabledKeyWithDeviceType:(NSUInteger)arg0 ;
-(id)_languageCode;
-(id)_localeIdentifier;
-(id)audioInjectionFilePath;
-(id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg0 ;
-(id)fileLoggingLevel;
-(id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)arg0 ;
-(id)getSATEnrollmentPath;
-(id)init;
-(id)localizedCompactTriggerPhraseForLanguageCode:(id)arg0 ;
-(id)localizedTriggerPhrase;
-(id)localizedTriggerPhraseForLanguageCode:(id)arg0 ;
-(void)_setCanUseVoiceTriggerDuringPhoneCall:(BOOL)arg0 sender:(id)arg1 ;
-(void)_setVoiceTriggerEnabled:(BOOL)arg0 sender:(id)arg1 deviceType:(NSUInteger)arg2 ;
-(void)_setVoiceTriggerEnabled:(BOOL)arg0 sender:(id)arg1 deviceType:(NSUInteger)arg2 endpointId:(id)arg3 ;
-(void)discardAllSATEnrollment;
-(void)discardSATEnrollmentForLanguageCode:(id)arg0 ;
-(void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg0 ;
-(void)markSATEnrollmentSuccessForLanguageCode:(id)arg0 ;
-(void)setCanUseVoiceTriggerDuringPhoneCall:(BOOL)arg0 ;
-(void)setEverNotifyUserCompactTrigger;
-(void)setFileLoggingIsEnabled:(BOOL)arg0 ;
-(void)setFileLoggingLevel:(id)arg0 ;
-(void)setOnetimeRemoteAssetQueryRanSuccessfully:(BOOL)arg0 ;
-(void)setPhraseSpotterEnabled:(BOOL)arg0 ;
-(void)setPhraseSpotterEnabled:(BOOL)arg0 sender:(id)arg1 ;
-(void)setSecondPassAudioLoggingEnabled:(BOOL)arg0 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg0 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg0 sender:(id)arg1 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg0 sender:(id)arg1 deviceType:(NSUInteger)arg2 endpointId:(id)arg3 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg0 sender:(id)arg1 endpointId:(id)arg2 ;
-(void)setVoiceTriggerEnabledWhenChargerConnected:(BOOL)arg0 ;
-(void)setVoiceTriggerEnabledWhenChargerDisconnected:(BOOL)arg0 ;
-(void)synchronize;


@end


#endif