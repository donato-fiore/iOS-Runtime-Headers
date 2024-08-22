// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SERVERSPEECHREQUEST_H
#define SERVERSPEECHREQUEST_H

@class NSAttributedString, NSArray, TTSSpeechRequest, NSString, NSURL, TTSSpeechString, TTSVoiceResourceAsset;

#import <Foundation/Foundation.h>

#import "TTSSpeechServerInstance.h"

@interface ServerSpeechRequest : NSObject

@property (retain, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (copy, nonatomic) id *audioBufferCallback; // ivar: _audioBufferCallback
@property (nonatomic) unsigned int audioQueueFlags; // ivar: _audioQueueFlags
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (retain, nonatomic) NSArray *channels; // ivar: _channels
@property (weak, nonatomic) TTSSpeechRequest *clientRequest; // ivar: _clientRequest
@property (weak, nonatomic) TTSSpeechServerInstance *clientServer; // ivar: _clientServer
@property (nonatomic) NSInteger footprint; // ivar: _footprint
@property (nonatomic) NSInteger gender; // ivar: _gender
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (nonatomic) _NSRange lastSentRange; // ivar: _lastSentRange
@property (nonatomic) BOOL maintainInput; // ivar: _maintainInput
@property (nonatomic) BOOL notifyMarkStart; // ivar: _notifyMarkStart
@property (retain, nonatomic) NSURL *outputPathURL; // ivar: _outputPathURL
@property (nonatomic) float pitch; // ivar: _pitch
@property (nonatomic) float rate; // ivar: _rate
@property (nonatomic) BOOL skipLuthorRules; // ivar: _skipLuthorRules
@property (retain, nonatomic) TTSSpeechString *speechString; // ivar: _speechString
@property (nonatomic) BOOL supportsAccurateWordCallbacks; // ivar: _supportsAccurateWordCallbacks
@property (nonatomic) BOOL synthesizeSilently; // ivar: _synthesizeSilently
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) BOOL useSharedSession; // ivar: _useSharedSession
@property (retain, nonatomic) NSString *voiceName; // ivar: _voiceName
@property (retain, nonatomic) TTSVoiceResourceAsset *voiceResource; // ivar: _voiceResource
@property (nonatomic) NSInteger voiceType; // ivar: _voiceType
@property (nonatomic) float volume; // ivar: _volume




@end


#endif