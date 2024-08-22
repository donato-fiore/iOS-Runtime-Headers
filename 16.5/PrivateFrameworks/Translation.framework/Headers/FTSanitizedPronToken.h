// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTSANITIZEDPRONTOKEN_H
#define FTSANITIZEDPRONTOKEN_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTSanitizedPronToken : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SanitizedPronToken _root;
}


@property (readonly, nonatomic) NSString *pron_source;
@property (readonly, nonatomic) NSString *token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SanitizedPronToken *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SanitizedPronToken *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SanitizedPronToken> )addObjectToBuffer:(*void)arg0 ;


@end


#endif