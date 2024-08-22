// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISYSTEMINFOGUARDEDDATA_H
#define TRISYSTEMINFOGUARDEDDATA_H


#import <Foundation/Foundation.h>

#import "TRISystemInfo.h"

@interface TRISystemInfoGuardedData : NSObject {
    BOOL isStale;
    TRISystemInfo *systemInfo;
}






@end


#endif