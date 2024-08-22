// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC7VFXCORE10URLWATCHERP33_44229AA1B962F34745B596FB57A0D0CC9PRESENTER_H
#define _TTCC7VFXCORE10URLWATCHERP33_44229AA1B962F34745B596FB57A0D0CC9PRESENTER_H

@class NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface _TtCC7VFXCore10URLWatcherP33_44229AA1B962F34745B596FB57A0D0CC9Presenter : NSObject <NSFilePresenter>

 {
    ? url;
    ? entity;
    ? lastModificationDate;
    ? shouldReplicate;
    ? manager;
}


@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, readonly) NSURL *presentedItemURL;


-(id)init;
-(void)presentedItemDidChange;


@end


#endif