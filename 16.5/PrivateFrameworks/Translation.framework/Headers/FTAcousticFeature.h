// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTACOUSTICFEATURE_H
#define FTACOUSTICFEATURE_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTAcousticFeature : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AcousticFeature _root;
}


@property (readonly, nonatomic) NSArray *acoustic_feature_per_frame;
@property (readonly, nonatomic) float frame_duration;


-(id)acoustic_feature_per_frame_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AcousticFeature *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AcousticFeature *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::AcousticFeature> )addObjectToBuffer:(*void)arg0 ;
-(void)acoustic_feature_per_frame_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif