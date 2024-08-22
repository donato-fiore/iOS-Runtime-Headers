// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTCLIENTCONNECTION_H
#define _LTCLIENTCONNECTION_H

@class NSXPCConnection, NSString, NSUUID;
@protocol _LTTranslationService, _LTClientConnectionDelegate;

#import <Foundation/Foundation.h>

#import "_LTTranslationServer.h"

@interface _LTClientConnection : NSObject <_LTTranslationService>

 {
    NSXPCConnection *_connection;
    _LTTranslationServer *_server;
    BOOL _trusted;
    NSString *_trustedClientIdentifier;
    NSUUID *_speechSessionID;
}


@property (weak, nonatomic) NSObject<_LTClientConnectionDelegate> *delegate; // ivar: _delegate


-(id)_clientDelegate;
-(id)initWithConnection:(id)arg0 server:(id)arg1 trusted:(BOOL)arg2 ;
-(void)_deleteHotfix:(id)arg0 ;
-(void)_downloadAssetForLanguagePair:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_getAssetSize:(id)arg0 ;
-(void)_offlineLanguageStatus:(id)arg0 ;
-(void)_purgeAllAssets:(id)arg0 ;
-(void)_purgeAssetForLanguagePair:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateAllAssets:(id)arg0 ;
-(void)_updateHotfix:(id)arg0 ;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)additionalLikelyPreferredLocalesForLocale:(id)arg0 completion:(id)arg1 ;
-(void)availableLocalePairsForTask:(NSInteger)arg0 completion:(id)arg1 ;
-(void)cleanup;
-(void)cleanupOnDisconnect;
-(void)clearCaches;
-(void)configInfoForLocale:(id)arg0 otherLocale:(id)arg1 completion:(id)arg2 ;
-(void)endAudio;
-(void)installedLocales:(id)arg0 ;
-(void)languageForText:(id)arg0 completion:(id)arg1 ;
-(void)languagesForText:(id)arg0 completion:(id)arg1 ;
-(void)languagesForText:(id)arg0 usingModel:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)languagesForText:(id)arg0 usingModel:(NSUInteger)arg1 strategy:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)logRequestOfType:(id)arg0 context:(id)arg1 ;
-(void)logWithRequestData:(id)arg0 ;
-(void)onDeviceModeEnabled:(id)arg0 ;
-(void)preheatWithContext:(id)arg0 completion:(id)arg1 ;
-(void)provideFeedback:(id)arg0 withContext:(id)arg1 ;
-(void)shouldPresentSystemFirstUseConsent:(id)arg0 ;
-(void)speak:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)startInstallRequest:(id)arg0 ;
-(void)startSpeechTranslationWithContext:(id)arg0 ;
-(void)startTextToSpeechTranslationWithContext:(id)arg0 text:(id)arg1 ;
-(void)task:(NSInteger)arg0 isSupportedInCountry:(id)arg1 completion:(id)arg2 ;
-(void)translate:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)translateParagraphs:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)translateSentence:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;


@end


#endif