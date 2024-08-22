// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWPREFETCHINGCONTEXT_H
#define _UICOLLECTIONVIEWPREFETCHINGCONTEXT_H

@class NSArray, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UICollectionViewPrefetchingContext : NSObject {
    NSArray *_remainingIndexPaths;
    NSMutableArray *_items;
    NSMutableDictionary *_itemsDict;
    CGRect _prefetchRect;
}






@end


#endif