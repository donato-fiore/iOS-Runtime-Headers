// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDDATESCANNER_H
#define CNVCARDDATESCANNER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNVCardDateScanner : NSObject {
    NSString *_string;
}


@property (readonly) NSUInteger position; // ivar: _position


+(id)scannerWithString:(id)arg0 ;
-(BOOL)isAtEnd;
-(BOOL)scanLeapMarker;
-(NSInteger)scanCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)scanComponentValueOfLength:(NSUInteger)arg0 ;
-(NSUInteger)lengthOfCalendarUnit:(NSUInteger)arg0 ;
-(id)initWithString:(id)arg0 ;
-(unsigned short)nextCharacter;


@end


#endif