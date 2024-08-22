// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ZOOMSERVICESKEYBOARDMANAGER_H
#define ZOOMSERVICESKEYBOARDMANAGER_H


#import <Foundation/Foundation.h>


@interface ZoomServicesKeyboardManager : NSObject

@property (nonatomic) BOOL inUnitTestMode; // ivar: _inUnitTestMode


+(id)sharedInstance;
-(NSInteger)keyboardCommandForEvent:(id)arg0 ;


@end


#endif