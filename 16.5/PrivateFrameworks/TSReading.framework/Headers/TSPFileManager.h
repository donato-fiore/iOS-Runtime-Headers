// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPFILEMANAGER_H
#define TSPFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface TSPFileManager : NSObject



+(BOOL)linkFileAtPath:(id)arg0 toPath:(id)arg1 ;
+(BOOL)linkFileAtURL:(id)arg0 toURL:(id)arg1 ;
+(BOOL)linkOrCopyURL:(id)arg0 decryptionKey:(id)arg1 toURL:(id)arg2 encryptionKey:(id)arg3 ;
+(BOOL)linkOrCopyURL:(id)arg0 toURL:(id)arg1 ;


@end


#endif