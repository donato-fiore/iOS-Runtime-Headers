// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTTTSWORDPHONEMES_H
#define FTTTSWORDPHONEMES_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTTSWordPhonemes : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TTSWordPhonemes _root;
}


@property (readonly, nonatomic) NSArray *phonemes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TTSWordPhonemes *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TTSWordPhonemes *)arg1 verify:(BOOL)arg2 ;
-(id)phonemes_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::TTSWordPhonemes> )addObjectToBuffer:(*void)arg0 ;
-(void)phonemes_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif