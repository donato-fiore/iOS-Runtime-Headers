// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTENDPOINTCANDIDATE_H
#define FTENDPOINTCANDIDATE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTEndPointCandidate : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *EndPointCandidate _root;
}


@property (readonly, nonatomic) int end_point_likelihood;
@property (readonly, nonatomic) int processed_audio_duration_ms;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct EndPointCandidate *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct EndPointCandidate *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::EndPointCandidate> )addObjectToBuffer:(*void)arg0 ;


@end


#endif