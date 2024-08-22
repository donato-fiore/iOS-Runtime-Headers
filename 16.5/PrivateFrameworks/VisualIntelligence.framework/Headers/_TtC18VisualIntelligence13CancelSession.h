// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18VISUALINTELLIGENCE13CANCELSESSION_H
#define _TTC18VISUALINTELLIGENCE13CANCELSESSION_H

@protocol VIQueryHandling;

#import <Foundation/Foundation.h>


@interface _TtC18VisualIntelligence13CancelSession : NSObject <VIQueryHandling>

 {
    ? identifier;
    ? _isCanceled;
    ? onCancels;
    ? lock;
}




-(id)init;
-(void)cancel;
-(void)dealloc;


@end


#endif