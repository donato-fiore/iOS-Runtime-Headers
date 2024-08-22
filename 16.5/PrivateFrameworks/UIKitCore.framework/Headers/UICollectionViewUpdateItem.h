// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOLLECTIONVIEWUPDATEITEM_H
#define UICOLLECTIONVIEWUPDATEITEM_H

@class NSUUID, NSIndexPath;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UICollectionViewUpdateItem : NSObject <NSCopying>

 {
    _UICollectionUpdateIndexPair _initialIndexPair;
    _UICollectionUpdateIndexPair _finalIndexPair;
    _UICollectionUpdateIndexPair _indexPairForAction;
    ? _updateItemFlags;
    NSUUID *_identifier;
}


@property (readonly, nonatomic) NSIndexPath *indexPathAfterUpdate; // ivar: _finalIndexPath
@property (readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate; // ivar: _initialIndexPath
@property (readonly, nonatomic) NSInteger updateAction; // ivar: _updateAction


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareIndexPaths:(id)arg0 ;
-(NSInteger)compareIndexPathsForMoves:(id)arg0 ;
-(NSInteger)inverseCompareIndexPaths:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif