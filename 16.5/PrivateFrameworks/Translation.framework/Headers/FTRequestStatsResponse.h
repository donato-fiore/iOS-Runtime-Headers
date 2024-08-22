// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTREQUESTSTATSRESPONSE_H
#define FTREQUESTSTATSRESPONSE_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTRequestStatsResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RequestStatsResponse _root;
}


@property (readonly, nonatomic) NSArray *bool_stats;
@property (readonly, nonatomic) NSArray *double_stats;
@property (readonly, nonatomic) NSArray *int32_stats;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *request_locale;
@property (readonly, nonatomic) NSString *speech_id;


-(id)bool_stats_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)double_stats_objectAtIndex:(NSUInteger)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RequestStatsResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RequestStatsResponse *)arg1 verify:(BOOL)arg2 ;
-(id)int32_stats_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::RequestStatsResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)bool_stats_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)double_stats_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)int32_stats_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif