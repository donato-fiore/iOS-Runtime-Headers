// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIEXTERNALPREFERENCES_H
#define SBUIEXTERNALPREFERENCES_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface SBUIExternalPreferences : NSObject {
    NSUserDefaults *_soundDefaults;
}


@property (nonatomic) BOOL keyboardPlaysSounds; // ivar: _keyboardPlaysSounds


+(id)sharedInstance;
-(id)init;


@end


#endif