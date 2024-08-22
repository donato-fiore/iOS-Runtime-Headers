// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTTEXTTOSPEECHREQUESTDEVCONFIG_H
#define FTTEXTTOSPEECHREQUESTDEVCONFIG_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTextToSpeechRequestDevConfig : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRequestDevConfig _root;
}


@property (readonly, nonatomic) NSString *resource_asset_path;
@property (readonly, nonatomic) BOOL return_log;
@property (readonly, nonatomic) BOOL return_server_info;
@property (readonly, nonatomic) NSString *voice_asset_path;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestDevConfig *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestDevConfig *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechRequestDevConfig> )addObjectToBuffer:(*void)arg0 ;


@end


#endif