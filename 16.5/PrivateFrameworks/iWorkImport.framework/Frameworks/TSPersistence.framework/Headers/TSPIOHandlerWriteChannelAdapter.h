// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPIOHANDLERWRITECHANNELADAPTER_H
#define TSPIOHANDLERWRITECHANNELADAPTER_H

@class NSError, NSString;
@protocol TSPComponentWriteChannel;

#import <Foundation/Foundation.h>


@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel>

 {
    id *_handler;
    NSError *_error;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHandler:(id)arg0 ;
-(void)close;
-(void)setError:(id)arg0 ;
-(void)writeData:(id)arg0 ;


@end


#endif