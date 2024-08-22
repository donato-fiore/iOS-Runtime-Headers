// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTCONTEXTWITHPRONHINTS_H
#define FTCONTEXTWITHPRONHINTS_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTContextWithPronHints : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ContextWithPronHints _root;
}


@property (readonly, nonatomic) NSString *contextual_text;
@property (readonly, nonatomic) NSArray *pron_hints;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ContextWithPronHints *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ContextWithPronHints *)arg1 verify:(BOOL)arg2 ;
-(id)pron_hints_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::ContextWithPronHints> )addObjectToBuffer:(*void)arg0 ;
-(void)pron_hints_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif