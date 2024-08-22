// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYCATEGORY_H
#define SBHLIBRARYCATEGORY_H

@class NSHashTable, NSString, NSArray;
@protocol SBLeafIconDataSource, SBIconObserver, NSFastEnumeration, SBIconDelegate;

#import <Foundation/Foundation.h>

#import "SBHLibraryAdditionalItemsIndicatorIcon.h"
#import "SBHLibraryCategoryIdentifier.h"
#import "SBHLibraryCategoryFolder.h"

@interface SBHLibraryCategory : NSObject <SBLeafIconDataSource, SBIconObserver, NSFastEnumeration>

 {
    NSHashTable *_observers;
    NSInteger _aggregrateIconLabelAccessoryType;
}


@property (readonly, nonatomic) SBHLibraryAdditionalItemsIndicatorIcon *additionalItemsIndicatorIcon; // ivar: _additionalItemsIndicatorIcon
@property (copy, nonatomic) SBHLibraryCategoryIdentifier *categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, copy, nonatomic) SBHLibraryCategoryFolder *compactPodAdditionalItemsFolder; // ivar: _compactPodAdditionalItemsFolder
@property (readonly, copy, nonatomic) SBHLibraryCategoryFolder *compactPodFolder; // ivar: _compactPodFolder
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) SBHLibraryCategoryFolder *expandedPodFolder; // ivar: _expandedPodFolder
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIconDelegate> *iconDelegate; // ivar: _iconDelegate
@property (readonly, copy, nonatomic) NSArray *icons; // ivar: _icons
@property (readonly, copy, nonatomic) NSString *leafIdentifier;
@property (nonatomic) NSInteger overflowBehavior; // ivar: _overflowBehavior
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


-(BOOL)iconSupportsUninstall:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCategory:(id)arg0 ;
-(BOOL)updateCategoryIdentifier:(id)arg0 ;
-(BOOL)updateCategoryWithIcons:(id)arg0 ;
-(NSInteger)labelAccessoryTypeForIcon:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(id)_buildDisplayedIconsForFolder:(id)arg0 icons:(id)arg1 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)init;
-(void)_localizedDisplayNameChangedTo:(id)arg0 ;
-(void)_noteCategoryDidUpdate;
-(void)_noteCategoryWillUpdate;
-(void)_noteFolderDidUpdateIcons:(id)arg0 ;
-(void)_noteFolderWillUpdateIcons:(id)arg0 ;
-(void)_refreshAggregateIconLabelAccessoryType;
-(void)addObserver:(id)arg0 ;
-(void)iconAccessoriesDidUpdate:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif