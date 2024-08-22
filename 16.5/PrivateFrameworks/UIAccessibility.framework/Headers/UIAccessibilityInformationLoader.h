// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYINFORMATIONLOADER_H
#define UIACCESSIBILITYINFORMATIONLOADER_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface UIAccessibilityInformationLoader : NSObject {
    NSTimer *_coalesceTimer;
}




+(id)sharedInstance;
-(id)_init;
-(void)_coalesceTimerFired:(id)arg0 ;
-(void)_loadAccessibilityInformationOnMainThread:(BOOL)arg0 ;
-(void)_setNeedsLoadAccessibilityInformationOnMainThread;
-(void)loadAccessibilityInformation;
-(void)setNeedsLoadAccessibilityInformation;


@end


#endif