// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUTEMPORARYDIRECTORYMANAGER_H
#define TSUTEMPORARYDIRECTORYMANAGER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL *_baseDirectoryURL;
}




+(BOOL)shouldExcludeFromBackup;
+(Class)managedTemporaryDirectoryClass;
+(id)baseDirectoryURL;
+(id)makeUniqueDirectoryWithBaseDirectory:(id)arg0 filename:(id)arg1 ;
+(id)sharedManager;
-(id)_directoriesToRemoveOnInit;
-(id)init;
-(id)newDirectoryWithFilename:(id)arg0 ;
-(void)_excludeFromBackupAsynchronously;
-(void)_removeDirectories:(id)arg0 ;
-(void)_removeDirectoriesAsynchronously:(id)arg0 ;


@end


#endif