// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTCATEGORYDATA_H
#define FTCATEGORYDATA_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTCategoryData : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *CategoryData _root;
}


@property (readonly, nonatomic) NSArray *category_data;
@property (readonly, nonatomic) NSString *category_name;


-(id)category_data_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CategoryData *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CategoryData *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::CategoryData> )addObjectToBuffer:(*void)arg0 ;
-(void)category_data_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif