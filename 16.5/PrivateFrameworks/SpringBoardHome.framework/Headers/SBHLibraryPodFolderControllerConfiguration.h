// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYPODFOLDERCONTROLLERCONFIGURATION_H
#define SBHLIBRARYPODFOLDERCONTROLLERCONFIGURATION_H



#import "SBFolderControllerConfiguration.h"
#import "SBHLibraryCategoriesRootFolder.h"
#import "SBHLibraryCategoryMapProvider.h"

@interface SBHLibraryPodFolderControllerConfiguration : SBFolderControllerConfiguration

@property (retain, nonatomic) SBHLibraryCategoriesRootFolder *categoriesFolder; // ivar: _categoriesFolder
@property (retain, nonatomic) SBHLibraryCategoryMapProvider *categoryMapProvider; // ivar: _categoryMapProvider


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif