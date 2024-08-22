// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMETRICSDISKMANAGER_H
#define VUIMETRICSDISKMANAGER_H


#import <Foundation/Foundation.h>


@interface VUIMetricsDiskManager : NSObject {
    ? sessionDefaults;
    ? eventDefaults;
}




+(id)sharedInstance;
-(id)init;
-(id)initWithSessionSuiteName:(id)arg0 eventSuiteName:(id)arg1 ;


@end


#endif