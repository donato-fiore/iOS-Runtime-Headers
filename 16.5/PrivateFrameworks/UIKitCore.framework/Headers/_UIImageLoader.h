// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIIMAGELOADER_H
#define _UIIMAGELOADER_H

@class NSError, NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIImageLoader : NSObject {
    atomic_flag _started;
    uint8_t _finished;
    uint8_t _cancelled;
    UIImage *_image;
    NSError *_error;
    os_unfair_lock_s _trampolineLock;
    NSMutableArray *_completionTrampolines;
}


@property (readonly) NSError *_error;
@property (readonly) UIImage *_image;
@property (readonly) BOOL _isCancelled;
@property (readonly) BOOL _isFinished;


+(id)_imageLoaderWithDataFromItemProvider:(id)arg0 typeIdentifier:(id)arg1 ;
+(id)_imageLoaderWithLoadingQueue:(id)arg0 handler:(id)arg1 ;
+(id)_imageLoaderWithURLRequest:(id)arg0 session:(id)arg1 ;
-(BOOL)_really_cancel;
-(id)init;
-(void)_cancel;
-(void)_loadImageWithCompletionQueue:(id)arg0 handler:(id)arg1 ;
-(void)_really_loadImage:(id)arg0 ;


@end


#endif