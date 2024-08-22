// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTAUDIOFRAME_H
#define FTAUDIOFRAME_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTAudioFrame : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AudioFrame _root;
}


@property (readonly, nonatomic) NSData *audio_bytes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AudioFrame *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AudioFrame *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::AudioFrame> )addObjectToBuffer:(*void)arg0 ;
-(void)audio_bytes:(id)arg0 ;


@end


#endif