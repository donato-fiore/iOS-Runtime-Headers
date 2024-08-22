// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUTABLEDATASOURCE_H
#define SUTABLEDATASOURCE_H

@class ISURLOperationPool, NSArray;

#import <Foundation/Foundation.h>

#import "SUVariableCellConfigurationCache.h"
#import "SUImageCache.h"

@interface SUTableDataSource : NSObject {
    SUVariableCellConfigurationCache *_configurationCache;
    NSInteger _preferringUserInteractionCount;
}


@property (nonatomic) id *cellReuseSource; // ivar: _cellReuseSource
@property (nonatomic) NSInteger columnCount; // ivar: _columnCount
@property (readonly, nonatomic) SUImageCache *imageCache;
@property (readonly, nonatomic) ISURLOperationPool *imagePool;
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly, nonatomic, getter=isPreferringUserInteraction) BOOL preferringUserInteraction;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, nonatomic) NSInteger tableViewStyle;


-(BOOL)canDeleteIndexPath:(id)arg0 ;
-(BOOL)canDoubleTapIndexPath:(id)arg0 ;
-(BOOL)canSelectIndexPath:(id)arg0 ;
-(BOOL)deleteIndexPath:(id)arg0 ;
-(CGFloat)cellHeightForIndexPath:(id)arg0 ;
-(CGFloat)heightForFooterInSection:(NSInteger)arg0 ;
-(CGFloat)heightForPlaceholderCells;
-(NSInteger)numberOfColumnsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)sectionIndexForIndexTitle:(id)arg0 atIndex:(NSInteger)arg1 ;
-(id)cachedConfigurationForClass:(Class)arg0 index:(NSInteger)arg1 ;
-(id)cellContextForConfigurationClass:(Class)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)headerViewForSection:(NSInteger)arg0 ;
-(id)init;
-(id)placeholderCellForIndexPath:(id)arg0 ;
-(id)titleForDeleteConfirmationForIndexPath:(id)arg0 ;
-(id)titleForHeaderInSection:(NSInteger)arg0 ;
-(void)beginPreferringUserInteraction;
-(void)configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)configurePlaceholderCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)didBeginPreferringUserInteraction;
-(void)didEndPreferringUserInteraction;
-(void)endPreferringUserInteraction;
-(void)reloadCellContexts;
-(void)reloadData;
-(void)resetCaches;
-(void)resetLayoutCaches;


@end


#endif