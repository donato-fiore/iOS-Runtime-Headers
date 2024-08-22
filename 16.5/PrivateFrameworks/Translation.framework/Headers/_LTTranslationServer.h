// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTRANSLATIONSERVER_H
#define _LTTRANSLATIONSERVER_H

@protocol _LTTranslationEngine, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_LTTextToSpeechCache.h"
#import "_LTServerSpeechSession.h"
#import "_LTServerSpeakSession.h"
#import "_LTLoggingRequestHandler.h"
#import "_LTActivityLogger.h"

@interface _LTTranslationServer : NSObject {
    id<_LTTranslationEngine> *_offlineCachedEngine;
    id<_LTTranslationEngine> *_onlineCachedEngine;
    _LTTextToSpeechCache *_ttsCache;
    _LTServerSpeechSession *_speechSession;
    _LTServerSpeakSession *_speakSession;
    _LTLoggingRequestHandler *_logger;
    _LTActivityLogger *_activityLogger;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_engineForContext:(id)arg0 error:(*id)arg1 ;
-(id)_offlineEngineForContext:(id)arg0 error:(*id)arg1 ;
-(id)_onlineEngineForContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)startSpeechTranslationWithContext:(id)arg0 delegate:(id)arg1 ;
-(id)startTextToSpeechTranslationWithContext:(id)arg0 text:(id)arg1 delegate:(id)arg2 ;
-(void)_deleteHotfix:(id)arg0 ;
-(void)_downloadAssetForLanguagePair:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_getAssetSize:(id)arg0 ;
-(void)_offlineLanguageStatus:(id)arg0 ;
-(void)_purgeAllAssets:(id)arg0 ;
-(void)_purgeAssetForLanguagePair:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_speechSessionCompleted;
-(void)_updateAllAssets:(id)arg0 ;
-(void)_updateHotfix:(id)arg0 ;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)additionalLikelyPreferredLocalesForLocale:(id)arg0 completion:(id)arg1 ;
-(void)availableLocalePairsForTask:(NSInteger)arg0 completion:(id)arg1 ;
-(void)cancelExistingSessions;
-(void)cancelSpeechSession;
-(void)cancelSpeechSessionWithID:(id)arg0 ;
-(void)cleanup;
-(void)cleanupOfflineEngine;
-(void)clearCaches;
-(void)configInfoForLocale:(id)arg0 otherLocale:(id)arg1 completion:(id)arg2 ;
-(void)endAudio;
-(void)installedLocales:(id)arg0 ;
-(void)languageForText:(id)arg0 completion:(id)arg1 ;
-(void)languagesForText:(id)arg0 completion:(id)arg1 ;
-(void)languagesForText:(id)arg0 usingModel:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)languagesForText:(id)arg0 usingModel:(NSUInteger)arg1 strategy:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)notifyOfMemoryPressure;
-(void)onDeviceModeEnabled:(id)arg0 ;
-(void)preheatWithContext:(id)arg0 completion:(id)arg1 ;
-(void)registerActivity:(NSInteger)arg0 ;
-(void)shouldPresentSystemFirstUseConsent:(id)arg0 ;
-(void)speak:(id)arg0 withContext:(id)arg1 delegate:(id)arg2 completion:(id)arg3 ;
-(void)startInstallRequest:(id)arg0 delegate:(id)arg1 ;
-(void)startLoggingRequest:(id)arg0 ;
-(void)task:(NSInteger)arg0 isSupportedInCountry:(id)arg1 completion:(id)arg2 ;
// -(void)translateParagraphs:(id)arg0 withContext:(id)arg1 paragraphResult:(id)arg2 completion:(unk)arg3  ;
-(void)translateSentence:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;


@end


#endif