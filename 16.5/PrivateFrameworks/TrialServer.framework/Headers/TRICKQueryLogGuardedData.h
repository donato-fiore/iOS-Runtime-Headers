// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICKQUERYLOGGUARDEDDATA_H
#define TRICKQUERYLOGGUARDEDDATA_H

@class NSMutableSet, NSFileHandle;

#import <Foundation/Foundation.h>


@interface TRICKQueryLogGuardedData : NSObject {
    BOOL failed;
    NSMutableSet *uniqueLines;
    NSFileHandle *fh;
}






@end


#endif