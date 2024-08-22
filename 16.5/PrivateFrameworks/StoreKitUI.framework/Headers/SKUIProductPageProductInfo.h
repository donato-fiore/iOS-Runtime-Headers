// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPRODUCTPAGEPRODUCTINFO_H
#define SKUIPRODUCTPAGEPRODUCTINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SKUIProductPageProductInfo : NSObject {
    NSMutableArray *_labels;
    NSMutableArray *_values;
}


@property (readonly, nonatomic) NSInteger numberOfEntries;


-(id)initWithInfoSectionDictionaries:(id)arg0 ;
-(void)enumerateEntriesWithBlock:(id)arg0 ;


@end


#endif