// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCDAEMONXPCEVENTHANDLER_H
#define VCDAEMONXPCEVENTHANDLER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VCDaemonXPCEventHandler : NSObject {
    ? streams;
    ? queue;
    ? observers;
    ? streamForEvent;
}


@property (nonatomic, readonly) NSArray *streams;


-(id)init;
-(id)initWithStreams:(id)arg0 ;
-(id)initWithStreams:(id)arg0 queue:(id)arg1 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 name:(id)arg1 ;


@end


#endif