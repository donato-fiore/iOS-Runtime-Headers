// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSUNFOLDINGSTREAM_H
#define ICSUNFOLDINGSTREAM_H

@class NSString;
@protocol ICSInputByteStream;

#import <Foundation/Foundation.h>


@interface ICSUnfoldingStream : NSObject <ICSInputByteStream>

 {
    id<ICSInputByteStream> *_underStream;
    char _char1;
    char _char2;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)eos;
-(char)read;
-(id)initWithInputStream:(id)arg0 ;
-(void)_readTwo;
-(void)_shiftRead;


@end


#endif