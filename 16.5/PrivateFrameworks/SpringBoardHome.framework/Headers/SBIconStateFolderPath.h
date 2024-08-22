// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONSTATEFOLDERPATH_H
#define SBICONSTATEFOLDERPATH_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SBIconStateFolderPath : NSObject {
    NSMutableArray *_folderNames;
    NSMutableArray *_folderDefaultNames;
    NSMutableArray *_folderUniqueIdentifiers;
    NSMutableArray *_folderPaths;
}


@property (readonly, nonatomic) NSUInteger count;


-(id)folderDefaultNameAtIndex:(NSUInteger)arg0 ;
-(id)folderIndexPathAtIndex:(NSUInteger)arg0 ;
-(id)folderNameAtIndex:(NSUInteger)arg0 ;
-(id)folderUniqueIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)addFolderWithName:(id)arg0 defaultName:(id)arg1 uniqueIdentifier:(id)arg2 indexPath:(id)arg3 ;
-(void)enumerateFoldersUsingBlock:(id)arg0 ;


@end


#endif