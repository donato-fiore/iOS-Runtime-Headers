// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTSOLVEPARAMETERS_H
#define _UICOLLECTIONLAYOUTSOLVEPARAMETERS_H

@class NSMutableIndexSet, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutSolveParameters : NSObject <NSCopying>

 {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryDict;
    BOOL _isFullResolve;
    CGPoint _scrollOffset;
    CGRect _visibleBounds;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif