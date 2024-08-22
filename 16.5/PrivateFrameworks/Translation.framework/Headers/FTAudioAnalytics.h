// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTAUDIOANALYTICS_H
#define FTAUDIOANALYTICS_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTAudioAnalytics : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AudioAnalytics _root;
}


@property (readonly, nonatomic) NSArray *acoustic_features;
@property (readonly, nonatomic) NSArray *speech_recognition_features;


-(id)acoustic_features_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AudioAnalytics *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AudioAnalytics *)arg1 verify:(BOOL)arg2 ;
-(id)speech_recognition_features_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::AudioAnalytics> )addObjectToBuffer:(*void)arg0 ;
-(void)acoustic_features_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)speech_recognition_features_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif