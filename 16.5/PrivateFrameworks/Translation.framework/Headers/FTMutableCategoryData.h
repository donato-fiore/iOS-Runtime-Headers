// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLECATEGORYDATA_H
#define FTMUTABLECATEGORYDATA_H

@class NSArray, NSString;


#import "FTCategoryData.h"

@interface FTMutableCategoryData : FTCategoryData

@property (copy, nonatomic) NSArray *category_data;
@property (copy, nonatomic) NSString *category_name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif