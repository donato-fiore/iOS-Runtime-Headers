// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTTEXTTOSPEECHVOICE_H
#define FTTEXTTOSPEECHVOICE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTextToSpeechVoice : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechVoice _root;
}


@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *quality;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *version;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechVoice *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechVoice *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechVoice> )addObjectToBuffer:(*void)arg0 ;


@end


#endif