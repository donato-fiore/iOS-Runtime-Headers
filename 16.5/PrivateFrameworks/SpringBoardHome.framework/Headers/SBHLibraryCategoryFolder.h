// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYCATEGORYFOLDER_H
#define SBHLIBRARYCATEGORYFOLDER_H



#import "SBFolder.h"
#import "SBHLibraryCategoryIdentifier.h"

@interface SBHLibraryCategoryFolder : SBFolder

@property (readonly, nonatomic) SBHLibraryCategoryIdentifier *libraryCategoryIdentifier; // ivar: _libraryCategoryIdentifier


-(BOOL)isLibraryCategoryFolder;
-(id)_indexPathToRevealForJiggleMode;
-(id)initWithDisplayName:(id)arg0 maxListCount:(NSUInteger)arg1 listGridSize:(struct SBHIconGridSize )arg2 libraryCategoryIdentifier:(id)arg3 ;


@end


#endif