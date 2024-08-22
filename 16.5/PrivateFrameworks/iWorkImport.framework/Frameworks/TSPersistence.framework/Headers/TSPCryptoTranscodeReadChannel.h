// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPCRYPTOTRANSCODEREADCHANNEL_H
#define TSPCRYPTOTRANSCODEREADCHANNEL_H

@class NSString;
@protocol TSUStreamReadChannel, TSPMutableCryptoInfo;

#import <Foundation/Foundation.h>


@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel>

 {
    id<TSUStreamReadChannel> *_readChannel;
    id<TSPMutableCryptoInfo> *_encryptionInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithReadChannel:(id)arg0 decryptionInfo:(id)arg1 encryptionInfo:(id)arg2 ;
-(void)close;
-(void)readWithHandler:(id)arg0 ;
-(void)readWithHandlerAndWait:(id)arg0 ;


@end


#endif