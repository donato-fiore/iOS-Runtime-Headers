// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTTEXTTOSPEECHSPEECHFEATUREREQUEST_H
#define FTTEXTTOSPEECHSPEECHFEATUREREQUEST_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTTextToSpeechSpeechFeatureModelIdentifier.h"
#import "FTTextToSpeechSpeechFeatureInputText.h"
#import "FTTextToSpeechSpeechFeatureInputWave.h"

@interface FTTextToSpeechSpeechFeatureRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechSpeechFeatureRequest _root;
}


@property (readonly, nonatomic) NSArray *lexicon;
@property (readonly, nonatomic) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) BOOL support_homograph;
@property (readonly, nonatomic) FTTextToSpeechSpeechFeatureInputText *text;
@property (readonly, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureRequest *)arg1 verify:(BOOL)arg2 ;
-(id)lexicon_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureRequest> )addObjectToBuffer:(*void)arg0 ;
-(void)lexicon_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif