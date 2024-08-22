// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTSPEECHTRANSLATIONINFO_H
#define FTSPEECHTRANSLATIONINFO_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTRecognitionSausage.h"

@interface FTSpeechTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationInfo _root;
}


@property (readonly, nonatomic) NSArray *raw_nbest_choices;
@property (readonly, nonatomic) FTRecognitionSausage *raw_sausage;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationInfo *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationInfo *)arg1 verify:(BOOL)arg2 ;
-(id)raw_nbest_choices_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::SpeechTranslationInfo> )addObjectToBuffer:(*void)arg0 ;
-(void)raw_nbest_choices_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif