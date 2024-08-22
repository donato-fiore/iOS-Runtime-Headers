// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTPOSTITNHAMMERREQUEST_H
#define FTPOSTITNHAMMERREQUEST_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTPostItnHammerRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *PostItnHammerRequest _root;
}


@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *post_itn_string;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PostItnHammerRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PostItnHammerRequest *)arg1 verify:(BOOL)arg2 ;
-(id)tokens_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::PostItnHammerRequest> )addObjectToBuffer:(*void)arg0 ;
-(void)tokens_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif