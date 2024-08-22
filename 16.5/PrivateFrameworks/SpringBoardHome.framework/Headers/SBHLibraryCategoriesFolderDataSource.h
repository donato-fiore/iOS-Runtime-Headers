// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYCATEGORIESFOLDERDATASOURCE_H
#define SBHLIBRARYCATEGORIESFOLDERDATASOURCE_H

@class NSSet, NSHashTable, NSArray, NSString;
@protocol SBIconObserver;

#import <Foundation/Foundation.h>

#import "SBHLibraryCategoryMap.h"
#import "SBHLibraryCategoriesRootFolder.h"
#import "SBHIconModel.h"

@interface SBHLibraryCategoriesFolderDataSource : NSObject <SBIconObserver>

 {
    NSSet *_mappedIcons;
    SBHLibraryCategoryMap *_categoryMap;
    NSInteger _maximumNumberOfDisplayedCategories;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) SBHLibraryCategoriesRootFolder *categoriesFolder; // ivar: _categoriesFolder
@property (readonly, nonatomic) NSArray *categoryIdentifiers;
@property (readonly, nonatomic) NSUInteger categoryIdentifiersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (readonly) Class superclass;


-(BOOL)containsIcon:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDataSource:(id)arg0 ;
-(NSInteger)maximumNumberOfDisplayedCategories;
-(id)categoryForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCategoriesFolder:(id)arg0 ;
-(id)reloadData;
-(id)reloadDataSourceUsingIcons:(id)arg0 categoryMap:(id)arg1 ;
-(id)reloadDataWithCategoryMap:(id)arg0 ;
-(void)_noteDidAddIcon:(id)arg0 ;
-(void)_noteDidReloadIcons:(id)arg0 ;
-(void)_noteDidReplaceIcon:(id)arg0 ;
-(void)_noteIconVisibilityDidChange:(id)arg0 ;
-(void)_noteWillLayoutIconState:(id)arg0 ;
-(void)_noteWillRemoveIcon:(id)arg0 ;
-(void)_regenerateCategoriesFolder;
-(void)addObserver:(id)arg0 ;
-(void)iconAccessoriesDidUpdate:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setMaximumNumberOfDisplayedCategories:(NSInteger)arg0 ;


@end


#endif