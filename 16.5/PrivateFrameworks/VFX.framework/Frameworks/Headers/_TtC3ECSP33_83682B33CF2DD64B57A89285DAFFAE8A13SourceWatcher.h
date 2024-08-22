// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC3ECSP33_83682B33CF2DD64B57A89285DAFFAE8A13SOURCEWATCHER_H
#define _TTC3ECSP33_83682B33CF2DD64B57A89285DAFFAE8A13SOURCEWATCHER_H

@class NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface _TtC3ECSP33_83682B33CF2DD64B57A89285DAFFAE8A13SourceWatcher : NSObject <NSFilePresenter>

 {
    ? handler;
    ? path;
    ? presentedItemURL;
}


@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue; // ivar: presentedItemOperationQueue
@property (nonatomic, copy) NSURL *presentedItemURL;


-(id)init;
-(void)presentedSubitemDidAppearAtURL:(id)arg0 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg0 ;


@end


#endif