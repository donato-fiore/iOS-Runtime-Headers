// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIUPDATEVISIBLECELLSCONTEXT_H
#define _UIUPDATEVISIBLECELLSCONTEXT_H

@class NSMutableArray, NSMutableIndexSet, NSArray, NSIndexSet;

#import <Foundation/Foundation.h>


@interface _UIUpdateVisibleCellsContext : NSObject {
    NSMutableArray *_attributes;
    NSMutableIndexSet *_sectionIndexes;
    NSInteger _visibleCellsRefCount;
}


@property (readonly, nonatomic) NSArray *attributes;
@property (readonly, nonatomic) BOOL hasLeftVisibleCellsPass;
@property (readonly, nonatomic) NSArray *indexPaths; // ivar: _indexPaths
@property (readonly, nonatomic) NSIndexSet *sectionIndexes;
@property (readonly, nonatomic) NSArray *sizes; // ivar: _sizes


-(BOOL)shouldInvalidate;
-(id)description;
-(id)init;
-(void)addPreferredAttributes:(id)arg0 ;
-(void)didEnterVisibleCellsPass;
-(void)didLeaveVisibleCellsPass;


@end


#endif