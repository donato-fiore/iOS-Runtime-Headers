// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSPEECHVOICE_H
#define TTSSPEECHVOICE_H

@class NSString, AVSpeechSynthesisProviderVoice;
@protocol NSSecureCoding, NSCopying, TTSSpeechService;

#import <Foundation/Foundation.h>


@interface TTSSpeechVoice : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL canBeDownloaded; // ivar: _canBeDownloaded
@property (readonly, nonatomic) BOOL excludeInAvailableVoiceList; // ivar: _excludeInAvailableVoiceList
@property (nonatomic) NSInteger footprint; // ivar: _footprint
@property (nonatomic) NSInteger gender; // ivar: _gender
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCombinedFootprint; // ivar: _isCombinedFootprint
@property (nonatomic) BOOL isDefault; // ivar: _isDefault
@property (readonly, nonatomic) BOOL isFallbackDefault; // ivar: _isFallbackDefault
@property (nonatomic) BOOL isNoveltyVoice; // ivar: _isNoveltyVoice
@property (nonatomic) BOOL isSystemVoice; // ivar: _isSystemVoice
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nonCombinedVoiceId; // ivar: _nonCombinedVoiceId
@property (weak, nonatomic) NSObject<TTSSpeechService> *service; // ivar: _service
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (retain, nonatomic) AVSpeechSynthesisProviderVoice *synthesisProviderVoice; // ivar: _synthesisProviderVoice
@property (nonatomic) NSInteger voiceType; // ivar: _voiceType


+(BOOL)supportsSecureCoding;
+(id)localizedName:(id)arg0 forLanguage:(id)arg1 ;
+(id)voiceFromAVSpeechSynthesisProviderVoice:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedNameForLanguage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif