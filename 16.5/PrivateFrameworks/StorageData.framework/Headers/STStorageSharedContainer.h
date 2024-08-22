// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTORAGESHAREDCONTAINER_H
#define STSTORAGESHAREDCONTAINER_H

@class NSArray, NSString;


#import "STStorageApp.h"

@interface STStorageSharedContainer : STStorageApp {
    NSArray *_owners;
}


@property (retain) STStorageApp *appRep; // ivar: _appRep
@property (retain) NSArray *owners;
@property (retain) NSString *path; // ivar: _path


-(id)initWithPath:(id)arg0 owners:(id)arg1 ;


@end


#endif