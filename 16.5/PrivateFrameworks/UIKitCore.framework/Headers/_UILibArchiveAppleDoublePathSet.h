// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILIBARCHIVEAPPLEDOUBLEPATHSET_H
#define _UILIBARCHIVEAPPLEDOUBLEPATHSET_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface _UILibArchiveAppleDoublePathSet : NSObject {
    NSMutableSet *_confirmAppleDoublePaths;
    NSMutableSet *_pathsWithDotUnderscorePrefixedFilenames;
}




+(BOOL)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)arg0 ;
-(BOOL)isConfirmedExactAppleDoubleItem:(id)arg0 ;
-(id)init;
-(id)pathToRealFileIfConfirmedAppleDoubleItem:(id)arg0 ;
-(void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)arg0 ;
-(void)confirmExactAppleDoubleFilesForItem:(id)arg0 ;


@end


#endif