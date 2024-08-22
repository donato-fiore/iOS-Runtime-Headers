// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSAXRESOURCE_H
#define TTSAXRESOURCE_H

@class NSString, AXAsset, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "TTSSpeechVoice.h"
#import "TTSVoiceAsset.h"

@interface TTSAXResource : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *assetId; // ivar: _assetId
@property (nonatomic) NSUInteger assetSize; // ivar: _assetSize
@property (retain, nonatomic) AXAsset *axAsset; // ivar: _axAsset
@property (nonatomic) BOOL canBeDownloaded; // ivar: _canBeDownloaded
@property (retain, nonatomic) NSString *componentSubType; // ivar: _componentSubType
@property (readonly, nonatomic) NSString *contentPath;
@property (nonatomic) NSInteger footprint; // ivar: _footprint
@property (readonly, nonatomic) NSInteger gender; // ivar: _gender
@property (nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (readonly, nonatomic) BOOL isNoveltyVoice; // ivar: _isNoveltyVoice
@property (readonly, nonatomic) NSArray *languages; // ivar: _languages
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameWithFootprint;
@property (nonatomic) NSInteger memoryPeak; // ivar: _memoryPeak
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) TTSSpeechVoice *speechVoice; // ivar: _speechVoice
@property (readonly, nonatomic) NSUInteger subtype; // ivar: _subtype
@property (retain, nonatomic) NSString *synthesizerBundleIdentifier; // ivar: _synthesizerBundleIdentifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) TTSVoiceAsset *voiceAsset; // ivar: _voiceAsset
@property (readonly, nonatomic) NSString *voiceId; // ivar: _voiceId


+(BOOL)supportsSecureCoding;
-(BOOL)_isDefault;
-(BOOL)_isDennisVoice;
-(BOOL)_isSystemVoice;
-(BOOL)shouldFilterResourceFromUI;
-(NSInteger)_resourceFootprintFromStringInput:(id)arg0 ;
-(NSInteger)_resourceGenderFromStringInput:(id)arg0 ;
-(NSUInteger)_resourceSubtypeFromStringInput:(id)arg0 ;
-(NSUInteger)_resourceTypeFromStringInput:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 ;
-(id)primaryLanguage;
-(void)_ensureMacinTalkComponent;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif