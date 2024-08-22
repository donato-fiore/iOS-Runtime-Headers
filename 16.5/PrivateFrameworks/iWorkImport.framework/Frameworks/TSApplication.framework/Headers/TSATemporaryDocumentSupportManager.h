// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSATEMPORARYDOCUMENTSUPPORTMANAGER_H
#define TSATEMPORARYDOCUMENTSUPPORTMANAGER_H

@class TSUTemporaryDirectoryManager;



@interface TSATemporaryDocumentSupportManager : TSUTemporaryDirectoryManager



+(Class)managedTemporaryDirectoryClass;
+(id)baseDirectoryURL;
+(id)sharedManager;
-(id)newDirectoryForDocumentUUID:(id)arg0 ;


@end


#endif