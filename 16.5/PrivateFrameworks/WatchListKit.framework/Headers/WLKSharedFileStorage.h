// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKSHAREDFILESTORAGE_H
#define WLKSHAREDFILESTORAGE_H

@class NSURL, NSFileCoordinator, NSString;

#import <Foundation/Foundation.h>


@interface WLKSharedFileStorage : NSObject {
    NSURL *_fileURL;
    NSFileCoordinator *_coordinator;
    Class _class;
    NSString *_debugString;
}




-(BOOL)_writeData:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(id)_readDataFromURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithFileName:(id)arg0 class:(Class)arg1 ;
-(void)delete:(id)arg0 ;
-(void)merge:(id)arg0 completion:(id)arg1 ;
-(void)read:(id)arg0 ;
-(void)write:(id)arg0 completion:(id)arg1 ;


@end


#endif