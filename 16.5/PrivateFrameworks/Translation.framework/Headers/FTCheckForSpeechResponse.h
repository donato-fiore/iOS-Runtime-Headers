// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTCHECKFORSPEECHRESPONSE_H
#define FTCHECKFORSPEECHRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTCheckForSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *CheckForSpeechResponse _root;
}


@property (readonly, nonatomic) BOOL speech_detected;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CheckForSpeechResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CheckForSpeechResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::CheckForSpeechResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif