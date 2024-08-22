// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTRANSLATIONREQUEST_H
#define _LTTRANSLATIONREQUEST_H

@class NSURL, NSString, NSUUID;
@protocol _LTSpeechTranslationDelegate;

#import <Foundation/Foundation.h>

#import "_LTLocalePair.h"

@interface _LTTranslationRequest : NSObject <_LTSpeechTranslationDelegate>



@property (nonatomic) BOOL _forcedOnlineTranslation; // ivar: __forcedOnlineTranslation
@property (nonatomic) NSInteger _mtConfidenceThreshold; // ivar: __mtConfidenceThreshold
@property (retain, nonatomic) NSURL *_offlineMTModelURL; // ivar: __offlineMTModelURL
@property (copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (nonatomic) BOOL autodetectLanguage; // ivar: _autodetectLanguage
@property (copy, nonatomic) NSUUID *batchSessionUUID; // ivar: _batchSessionUUID
@property (nonatomic) BOOL censorSpeech; // ivar: _censorSpeech
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forcedOfflineTranslation; // ivar: _forcedOfflineTranslation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _LTLocalePair *localePair; // ivar: _localePair
@property (copy, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, nonatomic) NSString *loggingType;
@property (retain, nonatomic) NSURL *outputFileURL; // ivar: _outputFileURL
@property (readonly, copy, nonatomic) NSString *qssSessionID;
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) NSInteger sourceOrigin; // ivar: _sourceOrigin
@property (readonly) Class superclass;
@property (nonatomic) NSInteger taskHint; // ivar: _taskHint
@property (copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID


-(BOOL)_canUseTextService;
-(id)initWithLocalePair:(id)arg0 ;
-(id)initWithLocalePair:(id)arg0 suggestedUniqueID:(id)arg1 ;
-(id)initWithSourceLocale:(id)arg0 targetLocale:(id)arg1 ;
-(id)initWithSourceLocale:(id)arg0 targetLocale:(id)arg1 suggestedUniqueID:(id)arg2 ;
-(id)requestContext;
-(id)serviceDelegate;
-(void)_startTranslationWithService:(id)arg0 done:(id)arg1 ;
-(void)_startTranslationWithTextService:(id)arg0 done:(id)arg1 ;
-(void)_translationFailedWithError:(id)arg0 ;


@end


#endif