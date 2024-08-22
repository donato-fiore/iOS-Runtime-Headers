// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSINPUTDATA_H
#define ICSINPUTDATA_H

@class NSData, NSString;
@protocol ICSInputByteStream;

#import <Foundation/Foundation.h>


@interface ICSInputData : NSObject <ICSInputByteStream>

 {
    NSData *_data;
    NSUInteger _cursor;
    char * _rawData;
    NSUInteger _length;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)eos;
-(char)read;
-(id)initWithData:(id)arg0 ;


@end


#endif