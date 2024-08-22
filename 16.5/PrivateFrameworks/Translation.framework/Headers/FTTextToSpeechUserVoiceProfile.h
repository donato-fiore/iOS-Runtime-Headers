// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTTEXTTOSPEECHUSERVOICEPROFILE_H
#define FTTEXTTOSPEECHUSERVOICEPROFILE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTextToSpeechUserVoiceProfile : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechUserVoiceProfile _root;
}


@property (readonly, nonatomic) float duration_mean;
@property (readonly, nonatomic) float duration_std;
@property (readonly, nonatomic) float energy_mean;
@property (readonly, nonatomic) float energy_std;
@property (readonly, nonatomic) float pitch_mean;
@property (readonly, nonatomic) float pitch_std;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechUserVoiceProfile *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechUserVoiceProfile *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechUserVoiceProfile> )addObjectToBuffer:(*void)arg0 ;


@end


#endif