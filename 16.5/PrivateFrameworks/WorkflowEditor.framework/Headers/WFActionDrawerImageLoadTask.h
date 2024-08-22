// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONDRAWERIMAGELOADTASK_H
#define WFACTIONDRAWERIMAGELOADTASK_H


#import <Foundation/Foundation.h>


@interface WFActionDrawerImageLoadTask : NSObject

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled; // ivar: _canceled


-(void)cancel;


@end


#endif