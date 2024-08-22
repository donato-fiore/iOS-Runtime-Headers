// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSZSTRINGWRITER_H
#define ICSZSTRINGWRITER_H

@class NSMutableData, NSString;
@protocol ICSAppendable;

#import <Foundation/Foundation.h>


@interface ICSZStringWriter : NSObject <ICSAppendable>

 {
    z_stream_s _strm;
    NSMutableData *_result;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)zResult;
-(void)_appendBytes:(*void)arg0 length:(NSUInteger)arg1 andFlush:(BOOL)arg2 ;
-(void)appendFormat:(id)arg0 ;
-(void)appendString:(id)arg0 ;


@end


#endif