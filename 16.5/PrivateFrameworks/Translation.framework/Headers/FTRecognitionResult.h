// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTRECOGNITIONRESULT_H
#define FTRECOGNITIONRESULT_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTRecognitionSausage.h"

@interface FTRecognitionResult : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionResult _root;
}


@property (readonly, nonatomic) NSArray *choice_alignments;
@property (readonly, nonatomic) FTRecognitionSausage *post_itn;
@property (readonly, nonatomic) NSArray *post_itn_nbest_choices;
@property (readonly, nonatomic) FTRecognitionSausage *pre_itn;
@property (readonly, nonatomic) NSArray *pre_itn_nbest_choices;
@property (readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;


-(id)choice_alignments_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionResult *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionResult *)arg1 verify:(BOOL)arg2 ;
-(id)post_itn_nbest_choices_objectAtIndex:(NSUInteger)arg0 ;
-(id)pre_itn_nbest_choices_objectAtIndex:(NSUInteger)arg0 ;
-(id)pre_itn_token_to_post_itn_char_alignment_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::RecognitionResult> )addObjectToBuffer:(*void)arg0 ;
-(void)choice_alignments_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)post_itn_nbest_choices_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)pre_itn_nbest_choices_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)pre_itn_token_to_post_itn_char_alignment_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif