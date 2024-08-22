// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUREADCHANNELINPUTSTREAMADAPTER_H
#define TSUREADCHANNELINPUTSTREAMADAPTER_H

@class NSString;
@protocol SFUInputStream, TSUReadChannel, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream>

 {
    id<TSUReadChannel> *_readChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    NSInteger _offset;
    NSUInteger _length;
    BOOL _closeChannelOnClose;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSeek;
-(NSInteger)offset;
-(NSUInteger)readToBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)closeLocalStream;
-(id)initWithReadChannel:(id)arg0 length:(NSUInteger)arg1 ;
-(id)initWithReadChannel:(id)arg0 length:(NSUInteger)arg1 closeChannelOnClose:(BOOL)arg2 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)seekToOffset:(NSInteger)arg0 ;


@end


#endif