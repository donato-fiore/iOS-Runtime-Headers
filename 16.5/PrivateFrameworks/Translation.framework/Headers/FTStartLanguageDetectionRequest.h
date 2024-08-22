// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTSTARTLANGUAGEDETECTIONREQUEST_H
#define FTSTARTLANGUAGEDETECTIONREQUEST_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTStartLanguageDetectionRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StartLanguageDetectionRequest _root;
}


@property (readonly, nonatomic) NSInteger codec;
@property (readonly, nonatomic) NSArray *locales;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartLanguageDetectionRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartLanguageDetectionRequest *)arg1 verify:(BOOL)arg2 ;
-(id)locales_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::StartLanguageDetectionRequest> )addObjectToBuffer:(*void)arg0 ;
-(void)locales_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif