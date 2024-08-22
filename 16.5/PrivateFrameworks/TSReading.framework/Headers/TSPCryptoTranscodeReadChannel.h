// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPCRYPTOTRANSCODEREADCHANNEL_H
#define TSPCRYPTOTRANSCODEREADCHANNEL_H

@class SFUCryptoKey, NSString;
@protocol TSUStreamReadChannel, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel>

 {
    id<TSUStreamReadChannel> *_readChannel;
    SFUCryptoKey *_encryptionKey;
    NSObject<OS_dispatch_queue> *_readQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithReadChannel:(id)arg0 decryptionKey:(id)arg1 encryptionKey:(id)arg2 ;
-(void)close;
-(void)readWithQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif