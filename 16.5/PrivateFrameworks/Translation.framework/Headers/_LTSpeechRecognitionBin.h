// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTSPEECHRECOGNITIONBIN_H
#define _LTSPEECHRECOGNITIONBIN_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTSpeechRecognitionBin : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *alternatives; // ivar: _alternatives
@property (nonatomic) NSUInteger bestAlternativeIndex; // ivar: _bestAlternativeIndex


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif