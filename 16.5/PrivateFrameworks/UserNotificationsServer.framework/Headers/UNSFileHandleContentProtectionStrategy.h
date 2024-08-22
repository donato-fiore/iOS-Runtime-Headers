// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSFILEHANDLECONTENTPROTECTIONSTRATEGY_H
#define UNSFILEHANDLECONTENTPROTECTIONSTRATEGY_H

@class NSString, NSMutableDictionary;
@protocol UNSContentProtectionStrategy;

#import <Foundation/Foundation.h>


@interface UNSFileHandleContentProtectionStrategy : NSObject <UNSContentProtectionStrategy>

 {
    BOOL _excludeFromBackup;
    NSString *_fileProtectionType;
    NSMutableDictionary *_keyedFileHandles;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isFileProtectionTypeSupported:(id)arg0 ;
-(BOOL)dataIsAvailableAtPath:(id)arg0 ;
-(BOOL)removeAllDataAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 atPath:(id)arg1 error:(*id)arg2 ;
-(id)_fileHandleForCreatingStoreAtPath:(id)arg0 protectionType:(id)arg1 ;
-(id)allDataAtPath:(id)arg0 ;
-(id)allPaths;
-(id)dataAtPath:(id)arg0 ;
-(id)initWithFileProtectionType:(id)arg0 excludeFromBackup:(BOOL)arg1 ;
-(void)_excludeItemFromBackupAtPath:(id)arg0 ;
-(void)migrateDataAtPath:(id)arg0 toPath:(id)arg1 ;


@end


#endif