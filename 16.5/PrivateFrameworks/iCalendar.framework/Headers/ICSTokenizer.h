// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSTOKENIZER_H
#define ICSTOKENIZER_H

@class NSMutableData;

#import <Foundation/Foundation.h>

#import "ICSPushbackStream.h"

@interface ICSTokenizer : NSObject {
    ICSPushbackStream *_data;
    NSMutableData *_token;
    int _tokenType;
    int _expectedNextTokenType;
}


@property int logCount; // ivar: _logCount
@property BOOL printedICS; // ivar: _printedICS


-(BOOL)consumeChar:(char)arg0 ;
-(BOOL)consumeEOL;
-(BOOL)consumeEscaped:(char *)arg0 ;
-(id)currentToken;
-(id)initWithCompressedData:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)nextToken;
-(int)tokenType;
-(void)consumeParamName;
-(void)consumeParamValue;
-(void)consumePropName;
-(void)consumePropValue;
-(void)consumeWhiteSpace;


@end


#endif