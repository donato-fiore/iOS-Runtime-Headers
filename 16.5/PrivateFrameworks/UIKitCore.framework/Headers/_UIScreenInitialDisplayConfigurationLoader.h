// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCREENINITIALDISPLAYCONFIGURATIONLOADER_H
#define _UISCREENINITIALDISPLAYCONFIGURATIONLOADER_H

@class UISDisplayContext;

#import <Foundation/Foundation.h>


@interface _UIScreenInitialDisplayConfigurationLoader : NSObject {
    UISDisplayContext *_context;
    BOOL _hasRequestedPreload;
}


@property (readonly, nonatomic) UISDisplayContext *initialDisplayContext;


+(id)sharedLoader;
-(void)_startPreloadInitialDisplayContext;


@end


#endif