// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTPRONGUESSRESPONSE_H
#define FTPRONGUESSRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTVocToken.h"

@interface FTPronGuessResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *PronGuessResponse _root;
}


@property (readonly, nonatomic) NSString *apg_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSArray *human_readable_prons;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSArray *tts_pronunciations;
@property (readonly, nonatomic) FTVocToken *voc_token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)human_readable_prons_objectAtIndex:(NSUInteger)arg0 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PronGuessResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PronGuessResponse *)arg1 verify:(BOOL)arg2 ;
-(id)tts_pronunciations_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::PronGuessResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)human_readable_prons_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)tts_pronunciations_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif