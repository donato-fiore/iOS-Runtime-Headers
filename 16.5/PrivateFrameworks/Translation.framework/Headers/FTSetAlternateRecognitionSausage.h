// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTSETALTERNATERECOGNITIONSAUSAGE_H
#define FTSETALTERNATERECOGNITIONSAUSAGE_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTSetAlternateRecognitionSausage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SetAlternateRecognitionSausage _root;
}


@property (readonly, nonatomic) NSArray *positional_tok_phrase_alt;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetAlternateRecognitionSausage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetAlternateRecognitionSausage *)arg1 verify:(BOOL)arg2 ;
-(id)positional_tok_phrase_alt_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::SetAlternateRecognitionSausage> )addObjectToBuffer:(*void)arg0 ;
-(void)positional_tok_phrase_alt_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif