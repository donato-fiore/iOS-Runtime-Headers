// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OPTTSTEXTTOSPEECHMETA_H
#define OPTTSTEXTTOSPEECHMETA_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "OPTTSTextToSpeechResource.h"
#import "OPTTSTextToSpeechVoice.h"

@interface OPTTSTextToSpeechMeta : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechMeta _root;
}


@property (readonly, nonatomic) OPTTSTextToSpeechResource *resource;
@property (readonly, nonatomic) OPTTSTextToSpeechVoice *voice;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechMeta *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechMeta *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechMeta> )addObjectToBuffer:(*void)arg0 ;


@end


#endif