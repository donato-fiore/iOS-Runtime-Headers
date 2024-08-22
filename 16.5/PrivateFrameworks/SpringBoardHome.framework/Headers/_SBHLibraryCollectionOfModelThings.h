// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBHLIBRARYCOLLECTIONOFMODELTHINGS_H
#define _SBHLIBRARYCOLLECTIONOFMODELTHINGS_H

@protocol SBIconViewProviding, SBIconListLayoutProvider;

#import <Foundation/Foundation.h>

#import "SBHLibraryCategoryMapProvider.h"
#import "SBFolderIconImageCache.h"
#import "SBHIconImageCache.h"
#import "SBHIconModel.h"
#import "SBRootFolder.h"

@interface _SBHLibraryCollectionOfModelThings : NSObject

@property (readonly, weak, nonatomic) SBHLibraryCategoryMapProvider *categoryMapProvider; // ivar: _categoryMapProvider
@property (readonly, weak, nonatomic) SBFolderIconImageCache *folderIconImageCache; // ivar: _folderIconImageCache
@property (readonly, weak, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (readonly, weak, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (readonly, weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (readonly, weak, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (readonly, weak, nonatomic) SBRootFolder *rootFolder; // ivar: _rootFolder


-(BOOL)examineModelValidityWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithIconViewProvider:(id)arg0 iconModel:(id)arg1 rootFolder:(id)arg2 listLayoutProvider:(id)arg3 iconImageCache:(id)arg4 folderIconImageCache:(id)arg5 categoryMapProvider:(id)arg6 ;


@end


#endif