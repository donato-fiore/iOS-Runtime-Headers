// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONPREFERREDSIZES_H
#define _UICOLLECTIONPREFERREDSIZES_H

@class NSMutableDictionary, NSMutableIndexSet;
@protocol NSCopying, _UICollectionLayoutAuxillaryOffsets;

#import <Foundation/Foundation.h>


@interface _UICollectionPreferredSizes : NSObject <NSCopying>

 {
    NSMutableDictionary *_sizes;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_supplementarySizesDict;
    NSInteger _frameOffset;
    id<_UICollectionLayoutAuxillaryOffsets> *_supplementaryBaseOffsets;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif